---
description: Bkash, Bkash Software Engineer, Bkash interview questions, Bkash interview stages, Bkash interview details, Bkash interview question and answers
head:
  - - link
    - rel: canonical
      href: https://tamimehsan.github.io/interview-questions-bangladesh/companies/bkash
---
# Bkash

| <img width="441" height="1"> | <img width="441" height="1"> |
| :--------------------------- | :--------------------------- |
| Founding year                |                              |
| Company Website              |                              |
| Career Website               |                              |
| Technologies Used            |                              |

## Introduction
Bkash Ltd. is a leading mobile financial service (MFS) provider in Bangladesh, focused on enabling digital financial inclusion. It is a subsidiary of BRAC Bank and partners with global players like Ant Financial.

Core Products & Services:

- Mobile Wallet Services: Send money, cash out, pay bills, mobile recharge, savings, donations, etc.
- Enterprise API Integration: For merchant payments and corporate disbursements.
- bKash App: Their core platform available on Android/iOS.

## Interview Stages:

Bkash interviews generally involve 3–4 rounds:
Stage	Format	Description
1. **Written Test**:	In-person/Online	Algorithms, data structures, OOP concepts, OS questions
2. **Technical Interview**:	Face-to-face/Virtual	Problem solving, system design, React/REST APIs, DB
3. **Engineering/Team Round**:	Panel	Deeper technical dive with team leads/managers
4. **HR Round** (optional):	Virtual/In-person	Behavioral questions, salary expectations, career plans

## Topics:

- Real-time coding
- Time & space complexity analysis
- System design (OOP-focused)
- REST API, CRUD operations
- Frontend/backend practicals (React, FastAPI)
- Database & OS-level concepts

## Questions

<article>

Given the head of a linked list, remove all duplicate elements so that each value appears only once. Return the modified head of the linked list.
</article>

<article>

Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

[**💻 Submit Code**](https://leetcode.com/problems/valid-parentheses/description/)

<details> <summary> Show Answer </summary>

```cpp
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (int i = 0; i < s.length(); i++) {
            // if opening bracket, push to stack
            if (s[i] ==  '(' or s[i] == '{' or s[i] == '[') {
                st.push(s[i]);
            } else {
                // if stack is empty, then no matching opening bracket 
                if (st.empty()) {
                    return false;
                } else {
                    char tp = st.top();

                    // check for matching pairs
                    if ((s[i] == ')' and tp == '(') 
                        or (s[i] == '}' and tp == '{') 
                        or s[i] == ']' and tp == '[') {
                            st.pop();
                    }  else {
                        return false;
                    }
                }
            }
        }

        return st.empty(); // if stack is empty, all pairs matched
    }
};

```
</details>
</article>

<article>

Given an array of integers `nums` and an integer `target`, return the indices of the two numbers such that they add up to `target`.

[**💻 Submit Code**](https://leetcode.com/problems/two-sum/description/)
</article>

<article>

Given the `head` of a singly linked list, reverse the list, and return the reversed list.

[**💻 Submit Code**](https://leetcode.com/problems/reverse-linked-list/description/)
<details><summary>Show Answer</summary>

::: code-group

```C++ [C++ Solution]
#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    void append(ListNode *&head, int value)
    {
        ListNode *newNode = new ListNode(value);
        if (!head)
        {
            head = newNode;
            return;
        }
        ListNode *curr = head;
        while (curr->next)
        {
            curr = curr->next;
        }
        curr->next = newNode;
    }
    void traverse(ListNode *head)
    {
        ListNode *curr = head;
        while (curr)
        {
            cout << curr->val << " ";
            curr = curr->next;
        }
        cout << endl;
    }
    ListNode *reverseList(ListNode *head)
    {
        ListNode *curr = head;
        ListNode *prev = nullptr;

        while (curr)
        {
            ListNode *temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
};
int main()
{
    Solution solution;
    ListNode *head = nullptr;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        solution.append(head, value);
    }

    cout << "Original list: ";
    solution.traverse(head);

    head = solution.reverseList(head);
    cout << "Reversed list: ";
    solution.traverse(head);

    return 0;
}
```

:::

</details>
</article>

<article>

What is concurrency control in databases? Why is it important?
</article>

<article>

What is function overriding in Object-Oriented Programming? How is it different from overloading?
</article>

<article>

What is inheritance in Object-Oriented Programming?
</article>

<article>

List and explain some basic Linux commands and their typical use cases.
</article>

<article>

What is a deadlock in computing? How can it be prevented or resolved?
</article>

<article>

What is database normalization? What are its benefits and common normal forms?
</article>

<article>

How can you generate random numbers in your preferred programming language?
</article>

<article>

How can you compare the contents of two text files to determine if they are identical?
</article>

<article>

What happens when you type google.com and press enter in your search bar
<details><summary>Show Answer</summary>

This is a very important question and aims to check the knowledge of networking. A very thorough explanation of this question is answered here in [What Happens When](https://github.com/alex/what-happens-when)

</details>
</article>

<article>
What happens when you copy a file in a computer? Are the copied file and the original file the same?
</article>
