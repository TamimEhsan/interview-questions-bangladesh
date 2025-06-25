---
description: REVE Systems interview questions, REVE Systems interview stages, REVE Systems interview details, REVE Systems interview questions and answers
head:
  - - link
    - rel: canonical
      href: https://tamimehsan.github.io/interview-questions-bangladesh/companies/revesystems
---
# REVE Systems

|  | |
| :-| :- |
| Founding year | 2003 |
| Company Website | https://www.revesoft.com/ |
| Career Website | https://www.revesoft.com/ |
| Technologies Used| Java, Kotlin, Swift |

## Introduction
[REVE Systems](https://www.revesoft.com/) specializes in delivering VoIP (Voice over IP) software solutions, with a focus on mobile VoIP, softswitch, and billing solutions. They have different departments such as Research & Development (R&D), E-Gov, Reve Chat, etc. In this article, the recruitment process for the R&D department for the DEV roles (Junior Software Engineer) is presented. They perform campus recruitment. At first, all the CVs from the participants (final year undergrad students who were to graduate soon) were collected. Then, an online MCQ-based exam was carried out, followed by two online technical rounds. At last, an onsite CTO round was performed.

## Interview Stages
1. **Online Screening Test**: This round is conducted via Zoom. All the participants are required to keep their microphones and cameras on during the MCQ exam via Google form. Questions were      given from the following areas:<br>
       1. Basic problem solving<br>
       2. Data structure and algorithms<br>
       3. Time Complexity<br>
       4. Finding error in code snippets<br>
       5. Finding the output of code blocks<br>
       6. Object-oriented programming<br>
       7. SQL<br>
       8. Computer networking<br>
       9. Software engineering and design patterns
2. **Technical Round I**: Two interviewers conducted this round via Skype. During the whole interview, the camera and microphone have to be on. At the beginning of the interview, a Google Doc was           shared for writing the code or any answers. Candidates are not allowed to use a pen or paper. Only the shared doc has to be used. In this round, they asked about me and told me to tell       them about any of my recent projects. Questions were asked on topics such as Linked list, BFS, DF, Fibonacci Series, String manipulation, a few basic OOP concepts, and REST APIs.
3. **Technical Round II**: This round is also conducted via Skype, and two interviewers (project managers) were there. They asked in-depth questions on object-oriented programming. Other           topics included - Java socket programming, computer networking, focusing on TCP and UDP protocols, software engineering and design patterns, SOLID principles, string matching algorithms      (Naive, KMP).
4. **CTO Round**: This was an onsite round where the CTO and head of the Mobile app department were present. They gave pen and paper to write the answers to their questions and asked many        questions where I struggled in the previous rounds.

## Technical Round I Questions
<article>
	
Reverse a given singly linked list.
  
[**💻 Submit Code**](https://leetcode.com/problems/reverse-linked-list/description/)

At first, I used extra memory to store the reversed array.

<details><summary>Show Answer</summary>

```cpp
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;
        
        int i;
        vector<int> v;
        ListNode* cur = head;
        while (cur != NULL) {
            v.push_back(cur->val);
            cur = cur->next;
        }
        
        i = v.size()-1;
        cur = head;
        while (head != NULL) {
            head->val = v[i];
            i--;
            head = head->next;
        }
        return cur;
    }
};
```
</details>

They told me not to use extra memory. So, I performed an in-place reversal of the linked list.

<details><summary>Show Answer</summary>

```cpp
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;
        
        ListNode* prev = NULL;
        while (head != NULL) {
            ListNode* tmp = head->next;
            head->next = prev;
            prev = head;
            head = tmp;
        }
        return prev;
    }
};
```
</details>

</article>

<article>
  
Given a sequence `1`, `1`, `2`, `3`, `5`, `8`, `13`, `21`..., where the indices start at `1`. For any given index, find the value of the sequence. For example, when the input is `3`, the output is `2`, and when the input is `6`, the output is `8`.
  
[**💻 Submit Code**](https://leetcode.com/problems/fibonacci-number/description/)

At first, I used an array for storing the calculated results of the intermediate steps and built the array going forward.

<details><summary>Show Answer</summary>

```cpp
int fib(int n){
  	int arr[n + 1];
  	arr[1] = 1;
  	arr[2] = 1;
  
  	int i;
  	for (i = 3; i <= n; i++) {
          arr[i] = arr[i-1] + arr[i-2];
  	}
  	return arr[n];
 }
```
</details>

As I used an array to store the intermediate results, extra memory usage was involved. They told me not to use an array. Then I used three variables and performed swapping values as needed.

<details><summary>Show Answer</summary>

```cpp
int fib(int n){
  	int a, b, c = 1;
  	a = 1;
  	b = 1;
  
  	int i;
  	for (i = 3; i <= n; i++) {
          c =  a + b; 
          a = b; 
          b = c; 
  	}
	return c;
 }
```
</details>

They asked me to solve this problem using recursion. When implementing the recursion-based one, I first implemented the unoptimized version and later used an array for storing the intermediate values. After that, they asked me about the time and space complexities of the different approaches.

<details><summary>Show Answer</summary>

```cpp
 int fib(int n){
	if (n == 1)
            return 1;
	else if (n == 2)
            return 1;
	else
	    return (fib(n-1) + fib(n-2));
 }
```
</details>

</article>

<article>
	
Given a weighted binary tree, you have to find whether a target sum can be achieved by traversing from the root to the leaf and summing the values on the intermediate nodes.
  
[**💻 Submit Code**](https://leetcode.com/problems/path-sum/description/)

I described how this problem can be solved using BFS and provided the solution.

<details><summary>Show Answer</summary>

```cpp
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == NULL)
            return false;
        else if (root->left == NULL && root->right == NULL)
            return (root->val == targetSum);

        queue<TreeNode*> q;
        bool found = false;
        q.push(root);
        
        while (!q.empty()) {
            TreeNode* cur = q.front();
            q.pop();
            
            if (cur->left == NULL && cur->right == NULL) {
                if (cur->val == targetSum) {
                    found = true;
                    break;
                }
            }
            
            if (cur->left != NULL) {
                cur->left->val = cur->val + cur->left->val;
                q.push(cur->left);
            }
            
            if (cur->right != NULL) {
                cur->right->val = cur->val + cur->right->val;
                q.push(cur->right);
            }
        }
        return found;
    }
};
```
</details>

</article>

<article>
	
Why are getters and setters used in Java?

</article>

<article>
	
Describe the Singleton design pattern and write the code in Java.

</article>

<article>
	
What are REST APIs? Tell about the HTTP verbs and the differences between PUT and POST in REST API.

</article>

<article>
	
Given a large input string without `\n` present. Output the string of sentences where we will input the max letter count in a line. output the modified string, so if line breaks occur in the middle of a word, place it after a newline.

Input: ``(“reve systems is a software company”, 11)``

Output:<br>
reve<br>
systems is<br>
a software<br>
company<br>

</article>

## Technical Round II Questions

<article>

What are the four pillars of OOP? 

</article>

<article>

Explain about `Encapsulation`, `Abstraction`, `Inheritance`, and `Polymorphism` with real-world examples.

</article>


<article>

Please tell us about Java Socket Programming.

</article>


<article>

What models are used in the Software development life cycle? Please tell us about the waterfall model.

</article>

<article>

Please explain the Agile model in software engineering.

</article>

<article>

What are the SOLID principles?

</article>

<article>

What are the differences between the TCP and UDP protocols?

</article>

<article>

Given two input strings, you have to find whether the second string is present in the first string. Please explain all the approaches for solving this problem. 

</article>

<article>

Do you have a plan for higher studies? When will you go abroad for higher studies?

</article>


## CTO Round Questions

<article>

Please tell us about yourself.

</article>

<article>

Why do you want to join a software company instead of joining a university as a faculty member?

</article>

<article>

Write the code of the Singleton pattern and explain.

</article>

<article>

Explain the four pillars of OOP with examples.

</article>

<article>

Actually they asked all the questions from the previous rounds where I made mistakes.

</article>

