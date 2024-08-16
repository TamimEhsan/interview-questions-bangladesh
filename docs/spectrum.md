# Spectrum

## Introduction
Spectrum Engineering Consortium Ltd. specializes in IP/DWDM/SDH Network infrastructure, Data Center-Cloud solutions Facility, Server, Storage/Virtualizations. 

## Questions
<details>
<summary>
What is heap? How heap sort works? what is its run time?
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
What is AVL tree?
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
Given a singly linked list, more specifically the head of the linked list. Return the reverse of the list.
</summary>
<hr>

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

<details>
<summary>
[System Design] Design a url shortener like tiny url. Ensure uniqueness of the shortened link and scalability of the system.

</summary>
<hr>
[Answer]
</details>

<details>
<summary>
What is RAID? Describe RAID 0-5.
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
Why disk IO time increases if the chunk size is small?
</summary>
<hr>
[Answer]
</details>
