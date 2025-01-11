import { defineConfig } from "vitepress";

// https://vitepress.dev/reference/site-config
export default defineConfig({
  title: "Interview BD",
  description:
    "Crowd sourced collection of interview questions of different BD tech companies",

  // description: "Crowd sourced collection of interview questions of different BD tech companies",
  base: "/interview-questions-bangladesh/",
  cleanUrls: true,
  themeConfig: {
    // https://vitepress.dev/reference/default-theme-config
    nav: [
      { text: "Home", link: "/" },
      { text: "Questions", link: "/general" },
    ],

    sidebar: [
      {
        items: [
          { text: "General Guidelines", link: "/general" },
          { text: 'Before Application', link: "/beforeapplying" },
          { text: "Chaldal", link: "/chaldal" },
          { text: "Bevy Commerce", link: "/bevycommerce" },
          { text: 'Brain Station 23 <span class="VPBadge warning">updated</span>', link: "/bs23" },
          { text: "DSI", link: "/dsi" },
          { text: "Exabyting", link: "/exabyting" },
          { text: 'Fringecore <span class="VPBadge tip">new</span>', link: "/fringecore" },
          { text: 'Inverse AI <span class="VPBadge warning">updated</span>', link: "/inverseai" },
          { text: "IQVIA", link: "/iqvia" },
          { text: "Priyo", link: "/priyo" },
          { text: "Kite Games Studio", link: "/kite" },
          { text: "Orbitax", link: "/orbitax" },
          { text: "Optimizely", link: "/optimizely" },
          { text: "Relisource", link: "/relisource" },
          { text: "RoBenDevs", link: "/robendevs" },
          { text: "Spectrum", link: "/spectrum" },
          { text: "SRBD", link: "/srbd" },
          { text: "Synesis IT", link: "/synesis" },
          {
            text: "Therap BD",
            link: "/therap/",
            items: [
              { text: 'Software Engineer <span class="VPBadge warning">updated</span>', link: "/therap/swe.md" },
              { text: "Database Engineer", link: "/therap/dbe.md" },
              { text: "Database Engineer", link: "/therap/test.md" },

            ],
          },
          { text: "WSD", link: "/wsd" },
          { text: "WellDev", link: "/welldev" },
        ],
      },
      {
        items: [{ text: "CSE competitions", link: "/competitions" }],
      },
    ],

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
});
