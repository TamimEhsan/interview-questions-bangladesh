---
description: Spectrum Software interview questions, Spectrum Software interview stages, Spectrum Software interview details, Spectrum Software interview question and answers
head:
  - - link
    - rel: canonical
      href: https://tamimehsan.github.io/interview-questions-bangladesh/companies/spectrum
  - - meta
    - http-equiv: refresh
      content: "0; url=/interview-questions-bangladesh/companies/spectrum"
---
# Spectrum

| <img width="441" height="1"> | <img width="441" height="1"> |
| :-| :- |
| Founding year | |
| Company Website | https://www.spectrum-bd.com |
| Career Website |  |
| Technologies Used|  |

## Introduction
Spectrum Engineering Consortium Ltd. specializes in IP/DWDM/SDH Network infrastructure, Data Center-Cloud solutions Facility, Server, Storage/Virtualizations. 

## Questions
<article>

What is heap? How heap sort works? what is its run time?
</article>

<article>

What is AVL tree?
</article>

<article>

Given a singly linked list, more specifically the head of the linked list. Return the reverse of the list.
<details><summary>Show Answer</summary>

```C++
ListNode* reverseList(ListNode* head) {
    if( head == nullptr || head->next == nullptr ) return head;
    ListNode* tail = reverse(head->next);
    head->next->next = head;
    head->next = nullptr;
    return tail;
}
```
</details>
</article>

<article>

[System Design] Design a url shortener like tiny url. Ensure uniqueness of the shortened link and scalability of the system.
</article>

<article>

What is RAID? Describe RAID 0-5.
</article>

<article>

Why disk IO time increases if the chunk size is small?
</article>

