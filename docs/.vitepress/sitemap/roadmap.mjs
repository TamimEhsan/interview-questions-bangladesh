const roadmapMap = [
  {
    items: [
      { text: "Overview", link: "/" },
    ],
  },
  {
    text: "Foundations",
    collapsed: false,
    items: [
      { text: "Programming Fundamentals", link: "/programming-fundamentals" },
      { text: "Data Structures", link: "/data-structures" },
      { text: "Algorithms", link: "/algorithms" },
    ],
  },
  {
    text: "Systems & Data",
    collapsed: false,
    items: [
      { text: "Databases", link: "/databases" },
      { text: "Operating Systems", link: "/operating-systems" },
      { text: "Computer Networking", link: "/computer-networking" },
      { text: "System Design", link: "/system-design" },
      { text: "Security", link: "/security" },
    ],
  },
  {
    text: "Practice & Craft",
    collapsed: false,
    items: [
      { text: "Engineering Practices", link: "/engineering-practices" },
      { text: "Web &amp; Frontend", link: "/web-frontend" },
      { text: "Interview Craft", link: "/interview-craft" },
      { text: "Machine Learning", link: "/machine-learning" },
    ],
  },
];

export default roadmapMap;
