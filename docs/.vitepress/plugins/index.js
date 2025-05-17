// plugins/index.js
import { customBadgePlugin } from './customBadge'

// Export all plugins
export {
  customBadgePlugin
}

// Helper function to apply all plugins at once
export function applyMarkdownPlugins(md) {
  customBadgePlugin(md)
  // Add other plugins here as you create them
  // examplePlugin(md)
  // anotherPlugin(md)
}