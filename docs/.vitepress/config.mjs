import { defineConfig } from "vitepress";
import companiesMap from "./sitemap/companies.mjs";
import notesMap from "./sitemap/notes.mjs";
import rewrites from "./sitemap/rewrites.mjs";
import { applyMarkdownPlugins } from "./plugins";
// https://vitepress.dev/reference/site-config
export default defineConfig({
  title: "Interview BD",
  description:
    "Crowd sourced collection of interview questions of different BD tech companies",

  // description: "Crowd sourced collection of interview questions of different BD tech companies",
  base: "/interview-questions-bangladesh/",
  cleanUrls: true,
  rewrites,
  themeConfig: {
    // https://vitepress.dev/reference/default-theme-config
    nav: [
      { text: 'Home', link: '/' },
      { text: 'Companies', link: '/companies/general', activeMatch:'/companies/' },
      { text: 'Notes', link: '/notes/general', activeMatch:'/notes/' }
      
    ],

    sidebar: {
      '/companies/' : {base:'/companies/', items: companiesMap},
      '/notes/' : {base:'/notes/', items: notesMap},
    },

    socialLinks: [
      {
        icon: "github",
        link: "https://github.com/TamimEhsan/interview-questions-bangladesh",
      },
    ],
    editLink: {
      pattern:
        "https://github.com/TamimEhsan/interview-questions-bangladesh/edit/master/:path",
      text: "Contribute to this page on GitHub",
    },
    search: {
      provider: "local",
    },
    lastUpdated: true,
    head: [
      [
        "script",
        {
          async: "",
          src: "https://www.googletagmanager.com/gtag/js?id=G-P6ZVQMX05B",
        },
      ],
      [
        "script",
        {},
        `window.dataLayer = window.dataLayer || [];
        function gtag(){dataLayer.push(arguments);}
        gtag('js', new Date());
        gtag('config', 'G-P6ZVQMX05B');`,
      ],
    ],
  },
  markdown: {
    config: applyMarkdownPlugins
  }
});
