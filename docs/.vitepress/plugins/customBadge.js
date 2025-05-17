// plugins/customBadge.js
export function customBadgePlugin(md) {
    md.inline.ruler.after('emphasis', 'custom-badge', (state, silent) => {
      const start = state.pos;
      
      // Check for @@
      if (state.src.slice(start, start + 2) !== '@@') {
        return false;
      }
      
      // Find the closing @@
      const endMarker = state.src.indexOf('@@', start + 2);
      if (endMarker === -1) {
        return false;
      }
      
      // Don't proceed if just checking for existence
      if (silent) {
        return true;
      }
      
      // Extract the content between @@ markers
      const content = state.src.slice(start + 2, endMarker);
      
      // Check if there's a type specified (format: @@type:text@@)
      let badgeType = 'warning'; // Default type
      let badgeText = content.trim();
      
      // If there's a colon, parse for type and text
      const colonPos = content.indexOf(':');
      if (colonPos !== -1) {
        const possibleType = content.slice(0, colonPos).trim().toLowerCase();
        // Valid badge types in VitePress
        const validTypes = ['info', 'tip', 'warning', 'danger'];
        
        if (validTypes.includes(possibleType)) {
          badgeType = possibleType;
          badgeText = content.slice(colonPos + 1).trim();
        }
      }
      
      // Create token for the Badge component
      const token = state.push('html_inline', '', 0);
      token.content = `<Badge type="${badgeType}" text="${badgeText}" />`;
      
      // Update position
      state.pos = endMarker + 2;
      
      return true;
    });
  }