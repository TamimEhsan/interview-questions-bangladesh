# Spectrum

## Intro
Spectrum Engineering Consortium Ltd. specializes in IP/DWDM/SDH Network infrastructure, Data Center-Cloud solutions Facility, Server, Storage/Virtualizations. 

## Questions
<details>
<summary>
What is heap? How heap sort works? what is its run time?
</summary>
<br>
[Answer]
<br/>
</details>

<details>
<summary>
What is AVL tree?
</summary>
<br/>
[Answer]
<br/>
</details>

<details>
<summary>
Given a singly linked list, more specifically the head of the linked list. Return the reverse of the list.
</summary>
<br/>

```C++
ListNode* reverseList(ListNode* head) {
    if( head == nullptr || head->next == nullptr ) return head;
    ListNode* tail = reverse(head->next);
    head->next->next = head;
    head->next = nullptr;
    return tail;
}
```
<br/>
</details>

<details>
<summary>
[System Design] Design a url shortener like tiny url. Ensure uniqueness of the shortened link and scalability of the system.

</summary>
<br>
[Answer]
<br/>
</details>

<details>
<summary>
What is RAID? Describe RAID 0-5.
</summary>
<br>
[Answer]
<br/>
</details>

<details>
<summary>
Why disk IO time increases if the chunk size is small?
</summary>
<br>
[Answer]
<br/>
</details>
