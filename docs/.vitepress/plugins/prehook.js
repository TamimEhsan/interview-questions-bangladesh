// plugins/customBadge.js
export function myPreHook(md) {
    md.core.ruler.before('normalize', 'preprocess-markdown', (state) => {
        // `state.src` contains the raw markdown text before parsing
        let src = state.src

        // Regex to capture <article>...</article> blocks (non-greedy)
        const articleRegex = /<article>([\s\S]*?)<\/article>/g

        src = src.replace(articleRegex, (match, inner) => {
            // Split <article> content into main text + details sections
            const detailsRegex = /<details>([\s\S]*?)<\/details>/g
            let parts = []
            let lastIndex = 0
            let m

            // Find all details sections
            while ((m = detailsRegex.exec(inner)) !== null) {
                // text before this <details> → add as a "text" part
                if (m.index > lastIndex) {
                    const textChunk = inner.slice(lastIndex, m.index).trim()
                    if (textChunk) parts.push({ type: 'text', content: textChunk })
                }
                parts.push({ type: 'details', content: m[1] })
                lastIndex = m.index + m[0].length
            }

            // Remaining trailing text
            const tail = inner.slice(lastIndex).trim()
            if (tail) parts.push({ type: 'text', content: tail })

            // Fold every text chunk into the first one, so text that follows a
            // <details> (a trailing badge, say) does not spawn a second
            // "Question" tab
            const textParts = parts.filter(p => p.type === 'text')
            if (textParts.length > 1) {
                textParts[0].content = textParts.map(p => p.content).join('\n\n')
                parts = parts.filter(p => p.type !== 'text' || p === textParts[0])
            }

            if (parts.length <= 1) {
                return match
            }
            // Convert all parts to a tabbed interface
            // You can adapt this to your component library
            let tabs = [`:::::tabs`]
            let tabIndex = 1
            for (const part of parts) {
                if (part.type === 'text') {
                    tabs.push(`== Question`)
                    tabs.push(part.content.trim())
                    tabs.push(`\n\n`)
                } else if (part.type === 'details') {
                    const summaryMatch = part.content.match(/<summary>(.*?)<\/summary>/)
                    const summary = summaryMatch ? summaryMatch[1].trim() : `Tab ${tabIndex}`
                    const body = part.content.replace(/<summary>.*?<\/summary>/, '').trim()
                    tabs.push(`== ${summary}`)
                    tabs.push(body)
                    tabs.push(`\n\n`)
                    tabIndex++
                }
            }
            tabs.push(`:::::`)

            return tabs.join('\n\n')
        })

        state.src = src
    })
}