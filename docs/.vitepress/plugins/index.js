// plugins/index.js
import { customBadgePlugin } from './customBadge'
import { tabsMarkdownPlugin } from 'vitepress-plugin-tabs'
import { myPreHook } from './prehook'

// Export all plugins
export {
  customBadgePlugin
}

// Helper function to apply all plugins at once
export function applyMarkdownPlugins(md) {
  customBadgePlugin(md)
  myPreHook(md)
  tabsMarkdownPlugin(md)
  // Add other plugins here as you create them
  // examplePlugin(md)
  // anotherPlugin(md)
}