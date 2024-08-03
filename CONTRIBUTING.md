## How to contribute

Use pull requests to contribute to the project.

### Adding a New Company
If the company eg `Generic Company Ltd` is not in the list, then create a new file for the company in root folder eg `generic.md`, then add that in the table of contents in `/vitepress/config.mjs`. In the json file, find the items in themeConfig.sidebar.items. And add your new entry here

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

### Question Answer Format
Stick to the following format to add a question under a company:
```html
<details>
<summary>
[Question]
</summary>
<br>
[Answer]
<br>
</details>
```
Example:
<details>

<summary>
What is 1+1?
</summary>
<br/>
1+1 equals 3
<br/>
</details>



## Before submitting the pull request

Check if all the formatting is correct.
