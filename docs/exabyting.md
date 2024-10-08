# Exabyting

## Introduction

[Exabyting](https://exabyting.com/) is an international software company based in Dhaka, Bangladesh. They have been successfully providing software services since 2018 in both the local and global market.

## Interview Stages

For the Trainee Software Engineer Position, Exabyting follows a 4-stage interview process.
They often give job advertisements on LinkedIn. We have to apply using the Google form mentioned in the post. In the Google form, some questionnaires about yourself and some basic technical questions are given sometimes. I applied several times through the Google form but never got a call. Last time, I applied through a referral from an employee of theirs and got shortlisted. The interview process is as follows:

1. **Phone Interview:** After applying and getting shortlisted, one of the employees will call you and ask you some basic questions about Computer Science.
2. **Round 1:** The first round is a technical round and generally lasts for half an hour. An engineering manager will join in this stage and ask about you, your hobbies, currently what are you doing and some basic questions.
3. **Round 2:** The second round is also a technical round. This interview session is taken by 3 software engineers and runs for around one and a half hours. In this round, they ask you about your projects, your role in the projects, and some technical questions. They will ask questions based on your recent used tech stack.
4. **CEO Round:** This is a behavioural interview with the CEO of the company. In this meeting, he briefs you about the vision and mission of the company. What is the long-term goal of the company, what is their expectation from the company and what is your expectation from the company? He also briefs about the culture of the company. He tries to understand whether you are aligned with their company culture or not. He also asks if you have any preference for any department like backend, frontend mobile application etc.

## Phone Interview

<details>
<summary>
Difference between Array and Linked List.
</summary>
</details>

<details>
<summary>
Which sorting algorithm works better in the average case?
</summary>
</details>

<details>
<summary>
Suppose, you have to sort 1000 numbers, numbers can be positive and negative. Which algorithm will you use?
</summary>
</details>

<details>
<summary>
What is Stack, Queue and Priority Queue?
</summary>
</details>

<details>
<summary>
Difference between Binary Tree and BST.
</summary>
</details>

<details>
<summary>
When we type a web address (www.google.com) in a web browser, what happens before we get the response?
</summary>
</details>

<details>
<summary>
Difference between TCP and UDP.
</summary>
</details>

<details>
<summary>
What are the principles of OOP and why do we use OOP?
</summary>
</details>

<details>
<summary>
Difference between SQL and NoSQL.
</summary>
</details>

<details>
<summary>
Difference between Compiler and Interpreter. 
</summary>
</details>

## First Round Questions

<details>
<summary>
Explain BST.
</summary>
</details>

<details>
<summary>
Suppose, we insert [1, 2, 3, 4] this array in BST. What will it look like after insertion? What is the search complexity in this tree? What if we want to make the search complexity  O(logn)?
</summary>
</details>

<details>
<summary>
Left Join VS Full Join. Describe a scenario where we need to use Left Join.
</summary>
</details>

<details>
<summary>
Describe the ACID properties of the database.
</summary>
</details>

<details>
<summary>
Describe the indexing of the database. Can we index with a column that has duplicate elements?
</summary>
</details>

<details>
<summary>
Describe the Event loop in JS.
</summary>
</details>

<details>
<summary>
What is closure? Describe.
</summary>
</details>

## Second Round Questions

<details>
<summary>
Why React? What advantages does React give us over direct DOM manipulation?
</summary>
</details>

<details>
<summary>
Why shouldn’t we mutate props in the child component?
</summary>
</details>

<details>
<summary>
Why Tailwind? What benefits Tailwind give us compared to other CSS libraries?
</summary>
</details>

<details>
<summary>
What type of language is JavaScript? Compiled or Interpreted? How do they work?
</summary>
</details>

<details>
<summary>
JavaScript is a single-threaded language, so how does it maintain asynchronous tasks?
</summary>
</details>

<details>
<summary>
Explain the event loop. Have you ever seen the implementations of libuv?
</summary>
</details>

<details>
<summary>
Explain var, let, const.
</summary>
</details>

<details>
<summary>
Explain hoisting.
</summary>
</details>

<details>
<summary>
Explain primitive and reference data types.
</summary>
</details>

<details>
<summary>
Explain closure. The inner function (which is returned) of the closure has access to its outer scope, how is it possible, where the variable is stored in that time?
</summary>
</details>

<details>
<summary>
What is a pure function?
</summary>
</details>

<details>
<summary>
Do you follow any functional programming philosophy?
</summary>
</details>

<details>
<summary>
Explain the ACID properties of the database.
</summary>
</details>

<details>
<summary>
Explain indexing. Why do we need indexing? What benefit does it give us?
</summary>
</details>

<details>
<summary>
Suppose, we want to use user_email as index. How can we do it?
</summary>
</details>

<details>
<summary>
Explain tree, binary tree, binary search tree. In a binary search tree, if the tree is imbalanced, then how can we make it balanced?
</summary>
</details>

<details>
<summary>
Explain the map, unordered_map and their complexity. Why does the complexity of the unordered_map go to O(n) in some cases?
</summary>
</details>

<details>
<summary>
Explain the four principles of OOP.
</summary>
</details>

<details>
<summary>
Do you know there is an OOP feature which is only in C/C++? (Operator).
</summary>
</details>

<details>
<summary>
Explain the difference between an array and a linked list. Tell me some use cases for each of them. How can we access an element of an array with the index?
</summary>
</details>

<details>
<summary>
Explain HTTP and HTTPS. Why HTTPS? How does data transfer in HTTPS? What is used under the hood to encrypt the communication between the sender and the receiver?
</summary>
</details>

<details>
<summary>
Is HTTPS stateful or stateless? If stateless, then how can we browse Facebook after login once?
</summary>
</details>

<details>
<summary>
Explain cookie-based authentication. How can we blacklist a cookie?
</summary>
</details>

<details>
<summary>
Do you know the structure of JWT? Explain. 
</summary>
</details>

<details>
<summary>

**Problem Statement:**
You'll be given two strings A and B, with lengths 1 <= length <= 10^6. The strings will contain only 1's and 0's. To make A a good string, you can insert B into A at any place, as many times as you want (or don't insert if you don't want). You have to print YES or NO depending on whether making A as a good string is possible.

**The Definition of GOOD:** A good string will never consecutively have two 1's or two 0's.

**Input/Output:**
The input will consist of two strings in two lines, strings A and B.

The output must be only one word, "YES" or "NO".

**Sample Input/Output:**

| Input            | Output |
| ---------------- | ------ |
| 101<br>010       | YES    |
| 111<br>010       | YES    |
| 1110011<br>01010 | NO     |
| 1001001000<br>10 | NO     |

</summary>
</details>

<details>
<summary>
Convert a decimal number to binary and show the output in string.
</summary>
</details>

<details>
<summary>
Explain JOIN and composite keys in the database.
</summary>
</details>

<details>
<summary>
Learn about polymorphism and inheritance in DB in your free time. (This is not a question).
</summary>
</details>
