---
description: Exabyting interview questions, Exabyting interview stages, Exabyting interview details, Exabyting interview question and answers
head:
  - - link
    - rel: canonical
      href: https://tamimehsan.github.io/interview-questions-bangladesh/companies/exabyting
---
# Exabyting

| <img width="441" height="1"> | <img width="441" height="1"> |
| :-| :- |
| Founding year | |
| Company Website | http://exabyting.com/ |
| Career Website | https://exabyting.com/join-our-team/ |
| Technologies Used| JAVA, Spring, PHP, Laravel, JavaScript, NodeJS, ExpressJS, Python, Django, REST, Microservices, SQL, NoSQL, SQS, SNS |

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

<article>

Difference between Array and Linked List.
</article>

<article>

Which sorting algorithm works better in the average case?
</article>

<article>

Suppose, you have to sort 1000 numbers, numbers can be positive and negative. Which algorithm will you use?
<details><summary>Show Answer</summary>

We can use merge sort to sort the 1000 numbers. Merge sort has a time complexity of `O(nlogn)` in the worst case. It is a stable sorting algorithm and works well with large and medium datasets. Merge sort is a divide and conquer algorithm. 
</details>
</article>

<article>

What is Stack, Queue and Priority Queue?
</article>

<article>

Difference between Binary Tree and BST.
<details><summary>Show Answer</summary>

- **Binary Tree**:A binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child. 
- **Binary Search Tree**: A binary search tree is a binary tree in which the value of the left child is less than the parent node and the value of the right child is greater than the parent node.

If the binary search tree is imbalanced, then we can make it balanced by using AVL tree or Red-Black tree. These trees are self-balancing binary search trees. 
</details>
</article>

<article>

When we type a web address (www.google.com) in a web browser, what happens before we get the response?
<details><summary>Show Answer</summary>

This is a very important question and aims to check the knowledge of networking. A very thorough explanation of this question is answered here in [What Happens When](https://github.com/alex/what-happens-when)
</details>
</article>

<article>

Difference between TCP and UDP.
<details><summary>Show Answer</summary>

- TCP (Transmission Control Protocol) is a connection-oriented protocol. It is used to establish a connection between two devices before transferring data. It is reliable but slower than UDP.
- UDP (User Datagram Protocol) is a connectionless protocol. It does not establish a connection before transferring data. It is faster but less reliable than TCP.

The main difference between TCP (transmission control protocol) and UDP (user datagram protocol) is that TCP is a connection-based protocol and UDP is connectionless. While TCP is more reliable, it transfers data more slowly. UDP is less reliable but works more quickly. This makes each protocol suited to different types of data transfers.

Read more from [TCP vs UDP: What's the Difference? | Cloudflare](https://www.cloudflare.com/learning/ddos/glossary/tcp-vs-udp/)
</details>
</article>

<article>

What are the principles of OOP and why do we use OOP?
</article>

<article>

Difference between SQL and NoSQL.
<details><summary>Show Answer</summary>

- **SQL**: Full form of SQL is Structured Query Language . SQL databases are primarily called Relational Databases (RDBMS). They use structured query language (SQL) for defining and manipulating the data. These are table-based databases. SQL databases are good for complex queries and relationships between the tables.
- **NoSQL**: NoSQL databases are primarily called non-relational or distributed databases. They can be document-based, key-value pairs, graph databases, or wide-column stores. They have dynamic schemas for unstructured data. NoSQL databases are horizontally scalable.

Read more from [Understanding SQL vs NoSQL Databases | MongoDB](https://www.mongodb.com/resources/basics/databases/nosql-explained/nosql-vs-sql)
</details>
</article>

<article>

Difference between Compiler and Interpreter.
<details><summary>Show Answer</summary>

- **Compiler**: A compiler translates code from a high-level programming language into machine code before the program runs.
- **Interpreter**: An interpreter translates code written in a high-level programming language into machine code line-by-line as the code runs.

To learn more about the difference between Compiler and Interpreter, read this article: [Difference between Compiler and Interpreter](https://www.geeksforgeeks.org/difference-between-compiler-and-interpreter/)
</details>
</article>

## First Round Questions

<article>

Explain BST.
<details><summary>Show Answer</summary>

**Binary Search Tree**: A binary search tree is a binary tree in which the value of the left child is less than the parent node and the value of the right child is greater than the parent node.
</details>
</article>

<article>

Suppose, we insert `[1, 2, 3, 4]` this array in BST. What will it look like after insertion? What is the search complexity in this tree? What if we want to make the search complexity  O(logn)?
<details><summary>Show Answer</summary>
The tree will look like this:

```
    1
     \
      2
       \
        3
         \
          4
```
And the search complexity will be `O(n)` in this case. To make the search complexity `O(logn)`, we have to make the tree balanced. We can use AVL tree or Red-Black tree to make the tree balanced.
</details>
</article>

<article>

Left Join VS Full Join. Describe a scenario where we need to use Left Join.
<details><summary>Show Answer</summary>

![Left Join VS Full Join](https://thecrazyprogrammer.com/wp-content/uploads/2019/05/Joins-in-SQL-Inner-Outer-Left-and-Right-Join.jpg)
Here are the different types of the JOINs in SQL:

- **(INNER) JOIN**: Returns records that have matching values in both tables.
- **LEFT (OUTER) JOIN**: Returns all records from the left table, and the matched records from the right table. The result is NULL from the right side if there is no match
- **RIGHT (OUTER) JOIN**: Returns all records from the right table, and the matched records from the left table. The result is NULL from the left side when there is no match
- **FULL (OUTER) JOIN**: Returns all records when there is a match in either left or right table.

A scenario where we need to use Left Join is when we want to get all the records from the left table and the matched records from the right table. For example, we have two tables, one is the `students` table and another is the `marks` table. We want to get all the students' information and their marks. If a student has no marks, then we want to show `NULL` in the marks column. In this case, we will use Left Join. The SQL query will look like this:

```sql
SELECT students.name, marks.marks
FROM students
LEFT JOIN marks ON students.id = marks.student_id;
```

</details>
</article>

<article>

Describe the ACID properties of the database.
<details><summary>Show Answer</summary>

ACID is a set of properties of database transactions intended to guarantee data validity despite errors, power failures, and other mishaps. Databases that support this are called ACID compliance. The properties are

- **Atomicity:** Each statement in a transaction (to read, write, update or delete data) is treated as a single unit. Either the entire statement is executed, or none of it is executed.
- **Consistency:** Ensures the databases remain consistent following some predefined business logic both before and after the transaction
- **Isolation:** Each transaction executes in such a way that one is not affected by other s though they were occurring only one.
- **Durability:** The data changes by a successfull transaction is saved even in the event of system failure

> [!IMPORTANT]
> Atomicity, isolation and durability are properties of the database, whereas consistency is a property of the application. The C in ACID was tossed in to make the acronym work. [ref: Martin Kleppmann, Designing Data Intensive Applications]

</details>
</article>

<article>

Describe the indexing of the database. Can we index with a column that has duplicate elements?
<details><summary>Show Answer</summary>

Indexing is a data structure technique that is used to quickly locate and access the data in a database. it is created mainly using B+ trees. 

If a column has duplicate elements, then we can still create index on that column. 

Read more from [What is Indexing in Database? | Medium](https://medium.com/@rtawadrous/introduction-to-database-indexes-9b488e243cc1)
</details> 
</article>

<article>

Describe the Event loop in JS.
</article>

<article>

What is closure? Describe.
</article>

## Second Round Questions

<article>

Why React? What advantages does React give us over direct DOM manipulation?
</article>

<article>

Why shouldn’t we mutate props in the child component?
</article>

<article>

Why Tailwind? What benefits Tailwind give us compared to other CSS libraries?
</article>

<article>

What type of language is JavaScript? Compiled or Interpreted? How do they work?
</article>

<article>

JavaScript is a single-threaded language, so how does it maintain asynchronous tasks?
</article>

<article>

Explain the event loop. Have you ever seen the implementations of libuv?
</article>

<article>

Explain var, let, const in JavaScript.
<details><summary>Show Answer</summary>

- **let**: Block-scoped and can be reassigned. 
- **var**: Function-scoped and can be reassigned. 
- **const**: Block-scoped and cannot be reassigned

Read more from [Var, Let, and Const – What's the Difference? | FreeCodeCamp](https://www.freecodecamp.org/news/var-let-and-const-whats-the-difference/)
</details>
</article>

<article>

Explain hoisting.
<details><summary>Show Answer</summary>

Hoisting is a JavaScript mechanism where variables and function declarations are moved to the top of their containing scope before code execution. This means that no matter where functions and variables are declared, they are moved to the top of their scope regardless of whether their scope is global or local.

Read more from [JavaScript Hoisting Explained | DigitalOcean](https://www.digitalocean.com/community/tutorials/understanding-hoisting-in-javascript)
</details>
</article>

<article>

Explain primitive and reference data types.
</article>

<article>

Explain closure. The inner function (which is returned) of the closure has access to its outer scope, how is it possible, where the variable is stored in that time?
</article>

<article>

What is a pure function?
<details><summary>Show Answer</summary>

A pure function is a function where the return value is determined by its input values, without observable side effects. This is how a pure function works:

- The function always returns the same result if the same arguments are passed in.
- The function does not depend on any state, or data, change during its execution.
- The function does not modify any state, or data, outside of its scope.

Read more from [Pure Functions in JavaScript | Medium]https://medium.com/javascript-scene/master-the-javascript-interview-what-is-a-pure-function-d1c076bec976)
</details>
</article>

<article>

Do you follow any functional programming philosophy?
</article>

<article>

Explain the ACID properties of the database.
<details><summary>Show Answer</summary>

ACID is a set of properties of database transactions intended to guarantee data validity despite errors, power failures, and other mishaps. Databases that support this are called ACID compliance. The properties are

- **Atomicity:** Each statement in a transaction (to read, write, update or delete data) is treated as a single unit. Either the entire statement is executed, or none of it is executed.
- **Consistency:** Ensures the databases remain consistent following some predefined business logic both before and after the transaction
- **Isolation:** Each transaction executes in such a way that one is not affected by other s though they were occurring only one.
- **Durability:** The data changes by a successfull transaction is saved even in the event of system failure

> [!IMPORTANT]
> Atomicity, isolation and durability are properties of the database, whereas consistency is a property of the application. The C in ACID was tossed in to make the acronym work. [ref: Martin Kleppmann, Designing Data Intensive Applications]

</details>
</article>

<article>

Explain indexing. Why do we need indexing? What benefit does it give us?
<details><summary>Show Answer</summary>

Indexing is a data structure technique that is used to quickly locate and access the data in a database. it is created mainly using B+ trees. 

Indexing is important because it helps to speed up the retrieval of data from the database. It is used to quickly locate and access the data in a database. Without an index, the database engine has to scan the entire table to find the data. This can be very slow if the table is large. However, creating an unnecessary index can slow down the database system because the database engine has to update the index every time the table is updated.

Read more from [What is Indexing in Database? | Medium](https://medium.com/@rtawadrous/introduction-to-database-indexes-9b488e243cc1)
</details> 
</article>

<article>

Suppose, we want to use user_email as index. How can we do it?
<details><summary>Show Answer</summary>

```sql
CREATE INDEX user_email_index ON users (user_email);
```
</details>
</article>

<article>

Explain tree, binary tree, binary search tree. In a binary search tree, if the tree is imbalanced, then how can we make it balanced?
<details><summary>Show Answer</summary>

- **Binary Tree**:A binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child. 
- **Binary Search Tree**: A binary search tree is a binary tree in which the value of the left child is less than the parent node and the value of the right child is greater than the parent node.

If the binary search tree is imbalanced, then we can make it balanced by using AVL tree or Red-Black tree. These trees are self-balancing binary search trees. 
</details>
</article>

<article>

Explain the map, unordered_map and their complexity. Why does the complexity of the unordered_map go to O(n) in some cases?
</article>

<article>

Explain the four principles of OOP.
</article>

<article>

Do you know there is an OOP feature which is only in C/C++? (Operator).
</article>

<article>

Explain the difference between an array and a linked list. Tell me some use cases for each of them. How can we access an element of an array with the index?
</article>

<article>

Explain HTTP and HTTPS. Why HTTPS? How does data transfer in HTTPS? What is used under the hood to encrypt the communication between the sender and the receiver?
<details><summary>Show Answer</summary>

- HTTP (HyperText Transfer Protocol) is a communication protocol used for transferring data between web browsers and servers. It operates over port 80 and does not encrypt data, making it vulnerable to attacks like Man-in-the-Middle (MITM). 
- HTTPS (HyperText Transfer Protocol Secure) is the secure version of HTTP, using encryption to protect data from interception and tampering. It operates over port 443 and ensures confidentiality, integrity, and authentication.

In HTTPS, data transfer is encrypted using SSL/TLS (Secure Sockets Layer / Transport Layer Security). When a user connects to a secure website, the browser and server perform an SSL/TLS handshake, exchanging encryption keys and verifying the server’s identity using an SSL certificate issued by a trusted Certificate Authority (CA). The encryption uses asymmetric cryptography (RSA, ECC) for key exchange and symmetric encryption (AES) for actual data transfer, ensuring secure communication.
</details>
</article>

<article>

Is HTTPS stateful or stateless? If stateless, then how can we browse Facebook after login once?
<details><summary>Show Answer</summary>

HTTPS itself is stateless because it follows the HTTP protocol, which does not retain session information between requests. However, websites like Facebook manage user sessions using **cookies** and **tokens** to maintain state.

When we log in, the server sends a session ID (stored in a cookie) to our browser. This session ID is sent with every request, allowing the server to recognize and authenticate us. Additionally, modern web applications use JWT (JSON Web Tokens) or OAuth tokens for secure authentication and session management. This way, even though HTTPS is stateless, the session is maintained through these mechanisms.
</details>
</article>

<article>

Explain cookie-based authentication. How can we blacklist a cookie?
<details><summary>Show Answer</summary>


**Cookie-based authentication** is a method where a server issues a session cookie upon successful login. This cookie, stored in the user's browser, is sent with every subsequent request, allowing the server to identify the user without requiring reauthentication. The server typically stores session details in a database or in-memory store (e.g., Redis). Cookies can have attributes like HttpOnly (prevents JavaScript access), Secure (only sent over HTTPS), and SameSite (prevents CSRF attacks).

#### How to Blacklist a Cookie?
- Server-Side Invalidation – Remove the session from the database or cache, making the cookie useless.
- Set Expiry in the Past – Send a new Set-Cookie header with an expired timestamp.
- Revoke the Cookie via Logout – Overwrite it with an empty value.
- Use a Token Blacklist – If using JWT, maintain a blacklist of revoked tokens.

Read more from [Cookie-Based Authentication: A Comprehensive Guide | Auth0](https://auth0.com/blog/cookies-vs-tokens-definitive-guide/)
</details>
</article>

<article>

Do you know the structure of JWT? Explain. 
<details><summary>Show Answer</summary>

JWT (JSON Web Token) is a compact, URL-safe means of representing claims to be transferred between two parties. The structure of a JWT consists of three parts separated by dots: `xxxxx.yyyyy.zzzzz`

- **Header**: Contains metadata about the token (e.g., type and signing algorithm).
- **Payload**: Contains claims (e.g., user ID, role, and expiration time).
- **Signature**: Ensures the integrity of the token and verifies that it has not been tampered with.

Read more from [Introduction to JSON Web Tokens | JWT.io](https://jwt.io/introduction/)
</details>
</article>

<article>

**Problem Statement:**
You'll be given two strings `A` and `B`, with lengths `1 <= length <= 10^6`. The strings will contain only `1`'s and `0`'s. To make `A` a good string, you can insert `B` into `A` at any place, as many times as you want (or don't insert if you don't want). You have to print `YES` or `NO` depending on whether making `A` as a good string is possible.
<details><summary>Show Details</summary>

**The Definition of GOOD:** A good string will never consecutively have two `1`'s or two `0`'s.

**Input/Output:**
The input will consist of two strings in two lines, strings `A` and `B`.

The output must be only one word, "YES" or "NO".

**Sample Input/Output:**

| Input            | Output |
| ---------------- | ------ |
| 101<br>010       | YES    |
| 111<br>010       | YES    |
| 1110011<br>01010 | NO     |
| 1001001000<br>10 | NO     |
</details>
</article>

<article>

Convert a decimal number to binary and show the output in string.
</article>

<article>

Explain JOIN and composite keys in the database.
<details><summary>Show Answer</summary>

- **JOIN**: JOIN is used to combine rows from two or more tables based on a related column between them. There are different types of JOINs in SQL, such as INNER JOIN, LEFT JOIN, RIGHT JOIN, and FULL JOIN.
- **Composite Key**: A composite key is a combination of two or more columns in a table that can be used to uniquely identify each row in the table. A composite key is also known as a compound key.
</details>
</article>

<article>

Learn about polymorphism and inheritance in DB in your free time. (This is not a question).
</article>

