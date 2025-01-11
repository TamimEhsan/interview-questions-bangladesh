## How to contribute

Use pull requests to contribute to the project.

### Adding a New Company
If the company eg `Generic Company Ltd` is not in the list, then create a new file for the company in `/docs/` folder eg `generic.md`, then add that in the table of contents in `/docs/.vitepress/sitemap/companies.mjs`. In the json file, find the items as json array and add your new entry here. If you feel like this is too much hassle, then just mention it in the pull request. I will add it later.

```json
items: [
    ...
    {
        text: 'Generic Company Ltd', 
        link: '/generic'
    } 
    ...
]
```

The `generic.md` might have the following sections
```
# Generic Company Ltd

## Introduction
Introduction about the company

## Interview Stages
stages of the interview process and if possible the details

## Questions
The interview questions and answers (optional) following the given format
```
### Contributing to an Existing Company
Else list the interview question under that company section. If the question is already added in other company section but not under the company you are currently wanting to contribute then too you can add the question.

### Question Format
Stick to the following format to add a question under a company:
```html
<article>

Your markdown supported question here
</article>
```
Example:
```html
<article>

What is `1+1`?
</article>
```

### [OPTIONAL] Sections
If you want to add collapsible sections with your question. You can use collapsible sections to reduce the size of the visible fields. Some example of these can be 

- Show Description
- Show Hint
- Show Answer

You can use the following template to add an entry with collapsible section.

**Template:**
```html
<article>

Your markdown supported question here.

<details><summary>Your visible collapsible section title</summary>

Hidden details of your collapsible section
</details>
</article>
```

**Example:**
```html
<article>

What is `1+1`?

<details><summary>Show Hint</summary>

Use calculator
</details>

<details><summary>Show Answer</summary>

`1+1` equals `2`
</details>
</article>
```
**Rendered:**

<article>

What is `1+1`?
<details><summary>Show Hint</summary>

Use calculator
</details>

<details><summary>Show Answer</summary>

`1+1` equals `2`
</details>
</article>

## Adding Images
If you want to add any images with the question or answer, then at first add the image in `docs/resource`. Then reference that file from your content. If you are in `docs/comapanies/generic_company.md`, then you will use `../resource/image.jpg` as the link. If you are in `docs/comapanies/generic_company/generic_role.md`, then you will use `../../resource/image.jpg` as the link.

## Self Citation
If you want to add show yourself as a contributor in the page then add a new section if there isn't one already and add your name under it. 

Example

```
## Contributors
- [Mohammad Tamimul Ehsan](https://www.linkedin.com/in/tamimehsan/): Tamim is a software engineer specialized in backend and software architecture.  
```

## Before submitting the pull request

1. Check if all the formatting is correct.
1. Build and run the site locally to check if changes are correct. Check `README.md` to find how to run locally.
