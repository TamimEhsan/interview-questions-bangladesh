import { defineConfig } from 'vitepress'

// https://vitepress.dev/reference/site-config
export default defineConfig({
  title: "Interview BD",
  description: "Crowd sourced collection of interview questions of different BD tech companies",

  // description: "Crowd sourced collection of interview questions of different BD tech companies",
  base: '/interview-questions-bangladesh/',
  cleanUrls: true,
  themeConfig: {
    // https://vitepress.dev/reference/default-theme-config
    nav: [
      { text: 'Home', link: '/' },
      { text: 'Questions', link: '/general' }
    ],

    sidebar: [
      {
        items: [
          {text: 'General guidelines', link: '/general' },
          {text: 'Chaldal', link: '/chaldal'},
          {text: 'DSI', link: '/dsi'},
          {text: 'IQVIA', link: '/iqvia'},
          {text: 'Priyo', link: '/priyo'},
          {text: 'Relisource', link: '/relisource'},
          {text: 'Spectrum', link: '/spectrum'},
          {text: 'SRBD', link: '/srbd'},
          {text: 'Synesis IT', link: '/synesis'},
          {text: 'Therap BD', link: '/therap'},
          {text: 'WSD', link: '/wsd'}
        ]
      }
    ],

    socialLinks: [
      { icon: 'github', link: 'https://github.com/TamimEhsan/interview-questions-bangladesh' }
    ],
    editLink: {
      pattern: 'https://github.com/TamimEhsan/interview-questions-bangladesh/edit/master/:path',
      text: 'Contribute to this page on GitHub'
    },
    search: {
      provider: 'local'
    },
    lastUpdated: true
  }
})
