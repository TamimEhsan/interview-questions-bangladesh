// .vitepress/theme/index.js
import DefaultTheme from 'vitepress/theme'
import './custom.css'
import { enhanceAppWithTabs } from 'vitepress-plugin-tabs/client'
import Layout from './Layout.vue'

export default {
  extends: DefaultTheme,
  Layout,
  enhanceApp({ app }) {
    enhanceAppWithTabs(app)
  },
}