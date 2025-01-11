# Interview BD contents

This folder serves as the content repository for the site. 

Add new company in the `/companies` folder. 

If you need to add any image or something, then add the image in `/resource` folder and use that link. 

## Directory structure
```bash
docs/
    ├── index.md # the home page
    ├── companies/ # All companies folder
    │   ├── beforeapplying.md # A company page
    │   ├── chaldal.md # Another company page
    │   ├── ...
    │   └── therap/ # A company iwith multiple files
    │       ├── dbe.md # A role under the company
    │       ├── index.md # Index page for the company
    │       └── swe.md
    ├── notes/ # The notes folder
    │   └── general.md # A page in the notes section
    ├── resource/ # Add your resources like images here
    │   ├── README.md # Instruction page for resource
    │   ├── image1.jpg # An image used in somewhere
    │   └── image2.webp
    └── .vitepress/
        ├── config.mjs # Site configuration file
        ├── sitemap/ # Folder containing sidebar contents
        │   ├── companies.mjs # Sidebar of company section
        │   └── notes.mjs # Sidebar of notes section
        └── theme/
            ├── custom.css # Add custom css here
            └── index.js

```