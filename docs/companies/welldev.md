---
description: Welldev interview questions, Welldev interview stages, Welldev interview details, Welldev interview question and answers
head:
  - - link
    - rel: canonical
      href: https://tamimehsan.github.io/interview-questions-bangladesh/companies/welldev
---
# WellDev Ltd

| <img width="441" height="1"> | <img width="441" height="1"> |
| :-| :- |
| Founding year | |
| Company Website | https://www.welldev.io/ |
| Career Website | https://www.welldev.io/careers |
| Technologies Used| Ruby on Rails, Android, iOS, ReactJS |

## Introduction

WellDev Ltd is a software company based in Zurich, Switzerland, specializing in software development and IT services. It has offices in Bangladesh (Dhaka), South Africa, Canada etc.

## Interview Stages

1. **Initial Screening:** After dropping CV they take a MCQ Round, almost every candidate gets an email for participation in this round.
2. **Round 1:** The first round is a technical round and generally lasts for an hour.
3. **Round 2:** The second round is divided into two part. The first part is a behavioural part taken by HR of the company. For the second part two software engineer conducts the technical sessions.
4. **COO Round:** The final round is taken by the COO of the company

## Preliminary Round

A Broad Range of Topics

This round consisted of a multiple-choice questionnaire covering these topics. The test required me to share my screen with Quillgo and keep my camera on. It covers wide range of topics like JavaScript fundamentals, OOP, DBMS, SWE principles, Networking, Rest API knowledge, Analytical reasoning, DSA (time complexity, sorting, binary trees, MST, greedy algorithms).


## First Round Questions

Hands-On Problem Solving

<article>

What will the output of this code in C Programming Language and why?

```C
int arr[3] = {1, 2, 3};

if(&arr[0] == &arr){
    printf("They are the same!");
}else {
    printf("Not same");
}
```

<details><summary>Show Answer</summary>

The name of the array is a pointer to the first item of the Array.
So it will print "They are the same!"

</details>
</article>

<article>

Given an array, what will be the base address if we print the array name only (e.g., printf(ara))?
<details><summary>Show Answer</summary>

It will print the address of the first item of the array.
In C, you can't pass array to functions by "Pass by value".
So when you pass an array to an function (for example: printf(arr)),
the compiler will actually pass the pointer to the first element. 
You can easily test this hypothesis by doing something like this:

```C
int arr[1] = {100};

if(arr == &arr){
    printf("Yay!\n");
}

if(arr == &arr[0]){
    printf("Damn!");
}
```

The above code should print

```bash
Yay!
Damn!
```

</details>
</article>

<article>

What is the time complexity of the print statement?
if it's `O(1)` why is that? Is it the same case for Linked List?
If it's not, why it isn't the same case?
```python
arr = [1, 2, 3, 4]

print(arr[2])
```
<details><summary>Show Answer</summary>

`Tip:`
Learn about stack and heap memory and their use cases when memory is allocated.
Learn about compile time and runtime memory allocation.

</details>
</article>

<article>

Can we run binary search on a sorted LinkedList? If we can, what issues we might face?
<details><summary>Show Hint</summary>

Think about how and why arrays can be divided easily but LinkedList can't be.
</details>
</article>

<article>

Write a code to delete the middle element of a stack without using any additional data structure while preserving the original order. Input: [1, 2, 3, 4, 5]. Output: [1, 2, 4, 5]
</article>

<article>

```python
def fn(n):
    if n == 0:
        return 0

    return n + fn(n-1)
```

Given the above function, rename the function according to what the function tries to achive.

`2nd Iteration:`
Write the same function but in a iterative manner.
Does the both implementations have same Time Complexity and Space Complxity?

<details><summary>Show Hint</summary>

Write down the stack trace of the recursive function and try to speak aloud while doing so.
After getting what the function returns, rename the function accordingly.

For the second iterations, a simple loop will be the answer.
However, think deeply about the fundamental difference between the two implementations.
One of the implementation uses a Data structure, one doesn't. So their space complexity won't be same.

</details>
</article>

<article>

What is the time complexity of the following code?

```C
int fun(int n) {
    if(n <= 1) return n;
    int x = fun(n - 1);
    int y = fun(n - 2);
    return x + y;
}
```

<details><summary>Show Answer</summary>

</details>
</article>

<article>

Explain the order of SQL query execution (e.g., FROM, WHERE, GROUP BY, HAVING, SELECT).

</article>

<article>

Given a table with redundant data in multiple columns, how would you optimize it? (Hint: Normalization)
</article>

<article>

Given a Java code, identify issues that violate access modifiers.
</article>

<article>

Explain the basic concepts of Object-Oriented Programming (OOP).
</article>

<article>

What are the ACID properties in DBMS?
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

A basic GRE-like math question.
</article>

<article>

Write a SQL query to show all the duplicate rows in a table.
</article>

<article>

Can we make a stack with a queue?
<details><summary>Show Hint</summary>

Think multiple queue.
</details>
</article>

## Second Round Questions

<article>

Write an API call to check whether the system is running properly and explain a GET API call.
</article>

<article>

Write a code to create a directory and a text file inside it with “Hello World” written.
</article>

<article>

What happens if two people try to reserve the same ticket simultaneously in a ticket reservation system? How would you solve this problem in a ticket management system? What will be your idea in this regard?
</article>

<article>

How many APIs are required to solve the above ticket reservation problem?
</article>

<article>

How can passwords be secured so that no one (even the administrator) can view them? How can password hashing be strengthened? What techniques do you know? (Hint: Salting and hashing techniques)
</article>

<article>

What is a trigger in DBMS, and what does cascading mean?
</article>

<article>

If we need to display a large amount of data on a website, what technique should be followed? (Hint: Pagination)
</article>

<article>

What happens when we browse a website? How are the contents rendered?
</article>

<article>

What is the difference between SQL and NoSQL?
</article>

<article>

For storing values from cache memory to RAM, should we use SQL or NoSQL?
</article>

<article>

Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.

[**💻 Submit Code**](https://leetcode.com/problems/largest-rectangle-in-histogram/description/)
<details><summary>Show Answer</summary>

::: code-group

```C++ [Stack]
// src: https://www.geeksforgeeks.org/largest-rectangular-area-in-a-histogram-using-stack/
int largestRectangleArea(vector<int>& hist) {
    int n = hist.size();
    stack<int> s;

    int max_area = 0;
    int tp;
    int area_with_top;
    int i = 0;
    while (i < n) {
        if (s.empty() || hist[s.top()] <= hist[i]){
            s.push(i++);
        } else {
            tp = s.top();
            s.pop();

            area_with_top = hist[tp] * (s.empty() ? i : i - s.top() - 1);
            max_area = max(max_area,area_with_top);
        }
    }

    while (s.empty() == false) {
        tp = s.top();
        s.pop();

        area_with_top = hist[tp] * (s.empty() ? i : i - s.top() - 1);
        max_area = max(max_area,area_with_top);
    }

    return max_area;
}
```

```C++ [Segment Tree]
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<ll,ll>
#define F first
#define S second
const int MAX = 1e9+5;
const int N = 200005;
pii segtree[4*N];
int ara[N],n;

void build(int node,int l,int r ){
    if( l == r ){
        segtree[node] = {ara[l],l};
        return;
    }
    int mid = (l+r)/2;
    build(node*2,l,mid);
    build(node*2+1,mid+1,r);
    segtree[node] = min( segtree[node*2],segtree[node*2+1] );
}

pii query(int node,int L,int R,int l,int r){
    if( l>R or r<L ) return {MAX,-1};
    if( l>=L and r<=R ) return segtree[node];
    int mid = (l+r)/2;
    return min( query(node*2,L,R,l,mid), query(node*2+1,L,R,mid+1,r) );
}

ll getRect(int l,int r){
    if( l>r ) return 0;
    auto pp = query(1,l,r,0,n-1);
    ll res = (r-l+1)*pp.F;
    return max({ res, getRect(l,pp.S-1),getRect(pp.S+1,r) });
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>ara[i];
    build(1,0,n-1);

    cout<<getRect(0,n-1);
}
```

:::

</details>
</article>

<article>

You have a `n`-story building, and two eggs. An egg will break if dropped from a certain height (ie above a floor `f`).  Determine the minimum number of moves that you need to determine with certainty what the value of `f` is.

[**💻 Submit Code**](https://leetcode.com/problems/egg-drop-with-2-eggs-and-n-floors/description/)
<details><summary>Show Answer</summary>

```C++
class Solution {
public:
    int twoEggDrop(int n) {
        int sq = sqrt(2*n);
        if ( sq * (sq+1) < 2*n ) sq++;
        return sq;
    }
};
```
</details>
</article>

<article>

Given a table with product_id, price, and product_name, write a query to find products with the same price.
</article>

<article>

What is the difference between DELETE, TRUNCATE, and DROP in SQL?
</article>

<article>

Explain threading in OOP.
</article>

<article>

How do you check for changes in a database?
</article>

<article>

Many questions from my CV (all practical, not just asking what you have done).
</article>

<article>

Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

[**💻 Submit Code**](https://leetcode.com/problems/move-zeroes/description/)
<details><summary>Show Answer</summary>

```C++
void moveZeroes(vector<int>& nums) {
    int i = 0;
    for(int j=0;j<nums.size();j++){
        swap(nums[i], nums[j]);
        if( nums[i] != 0 ) i++;
    }
}
```

</details>
</article>

## Behavioral questions

<article>

Could you please introduce yourself? where do you live? Who is there in your family?
</article>

<article>

Where do you wanna see yourself after 5years?
</article>

<article>

If you could devote yourself to learn new technologies?
</article>

<article>

What is your strength and weakness?
</article>

<article>

Do you have a plan to join full-time after successfully passing the training program?
</article>

<article>

Why should we hire you?
</article>

<article>

What is your salary expectation?
</article>

<article>

How you will deal with a tough co-worker
</article>

<article>

If you have a tight deadline and will miss it that time, how will you handle it?
</article>

<article>

Tell me something that will convince me to hire you.
</article>

<article>

How do you balance between a tight deadline and preserving best practices for?
</article>

<article>

what stack u wanna work with, do you wanna go abroad?
</article>

<article>

How would your friends, parents, and teachers describe you?
</article>

<article>

3 word to describe yourself?
</article>

<article>

What are your expectations from WellDev as a workplace?
</article>

<article>

What is the motivation to apply here?
</article>


### Coding Questions


<article>
Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.

[**💻 Submit Code**](https://leetcode.com/problems/longest-palindrome/description/)
</article>

<article>

Write pseudocode of generating fibonacci number using only two variable
</article>

<article>

Given the `root` of a binary tree, return the postorder traversal of its nodes' values.

[**💻 Submit Code**](https://leetcode.com/problems/binary-tree-postorder-traversal/description/)
<details><summary>Show Answer</summary>

```C++
class Solution {
public:
    void traverse(TreeNode* root, vector<int> &path) {
        if(root == nullptr) return;
        traverse(root->left,path);
        traverse(root->right,path);
        path.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> path;
        traverse(root, path);
        return path;
    }
};
```
</details>
</article>

<article>

Given an array of integers nums and an integer target, return all pairs of indices of the two numbers such that they add up to target.

[**💻 Submit Code**](https://leetcode.com/problems/two-sum/description/)
<details><summary>Show Answer</summary>

```C++
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<pair<int,int>> pos;
    for(int i=0;i<nums.size();i++) pos.push_back({nums[i],i});
    sort(pos.begin(),pos.end());
    int st = 0, en = nums.size()-1;
    while(st<en) {
        if( pos[st].first + pos[en].first == target ) return {pos[st].second, pos[en].second};
        if( pos[st].first + pos[en].first > target ) en--;
        else st++;
    }
    return {-1,-1};
}
```
</details>
</article>

<article>

Sort an array that consists with elements of odd numbers.
</article>

<article>

Given an array representing preorder traversal of BST, print its postorder traversal. 

[**💻 Submit Code**](https://www.geeksforgeeks.org/dsa/find-postorder-traversal-of-bst-from-preorder-traversal/)
</article>

<article>

Given an integer array nums, return all the triplets `[nums[i]`, `nums[j]`, `nums[k]]` such that `i != j` and `j != k` and `i != k` and `nums[i] + nums[j] + nums[k] == 0`.

[**💻 Submit Code**](https://leetcode.com/problems/3sum/description/)
<details><summary>Show Answer</summary>

```C++
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> sum3;
        for(int i=0;i<n;i++){
            if( i>0 and nums[i] == nums[i-1] ) continue;
            int j = i+1,k = n-1;
            while( j<k ){
                if( nums[j]+nums[k] + nums[i] > 0 ) k--;
                else if( nums[j]+nums[k] + nums[i] < 0 ) j++;
                else{
                    if( j != i+1 and nums[j] == nums[j-1] ){j++;k--; continue;}
                    sum3.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
            }
        }

        return sum3;
    }
};
```
</details>
</article>

<article>

Given an array of strings, group the anagrams together. You can return the answer in any order.

[**💻 Submit Code**](https://leetcode.com/problems/group-anagrams/description/)
<details><summary>Show Answer</summary>

```C++
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> anagrams;
        for(auto str:strs) {
            string sorted = str;
            sort(sorted.begin(),sorted.end());
            anagrams[sorted].push_back(str);
        }
        vector<vector<string>> groups;
        for(auto [k,v]:anagrams) {
            groups.push_back(v);
        }
        return groups;
    }
};
```
</details>
</article>

<article>

Basic recursive implementation problem
</article>

<article>

Given two variables, write a code to swap them without using any additional variable.
</article>

<article>

Printing cumulative sum
</article>

<article>

Given a chessboard, there are some knights placed initially. How can we place some another knights in such a way so that no one attacked each other.
</article>

<article>

Find the second highest element in a given array.
</article>

## SQL Questions

<article>

Write SQL query to find unique column of a database
</article>

<article>

Write SQL query to find second highest salary
</article>

<article>

Write SQL query to sort salary in descending order
</article>

### Short Questions

<article>

Write the output of the following code:

```cpp
int i = 5;
cout << i++ << endl;
cout << ++i << endl;
```
</article>

<article>

How to iterate a binary search tree in reverse order?
</article>

<article>

Write a function to describe polymorphism
</article>

<article>

How to describe a graph on code
</article>

<article>

Details on Two pointers
</article>

<article>

What is abstract class?
</article>

<article>

Explain how insertion sort works
</article>

<article>

Describe Encapsulation with examples?
</article>

<article>

Which performs better Linked List or Array?
</article>

<article>

Deletion and insertion of circular linked list Data structures used in DFS and BFS?
</article>

<article>

What are the advantages and disadvantages of Linked List?
</article>

<article>

Describe Singleton pattern.
</article>

<article>

Describe database normalization
</article>

<article>

Which http codes are used for success and failure?
</article>

<article>

Finding network address
</article>

<article>

BFS, DFS, Mergesort, Quicksort, Recursion
</article>

<article>

Which data structure is good to use to search strings?
</article>

<article>

What's the difference between selection sort and insertion sort?
</article>

<article>

Explain ER Diagram in Relational Database.
</article>

<article>

What is a Circular linked ist?
</article>

<article>

what is the difference between graph and tree?
</article>

<article>

What is kernel in os?
</article>

<article>

Difference between left outer join and right outer join?
</article>

<article>

What do you understand by the term Dependency Injection?
</article>

<article>

What are protected and public variables?
</article>

<article>

What is the JavaScript event in a document?
</article>

<article>

What steps do you take to improve UI design?
</article>

<article>

Give me a short description of polymorphism?
</article>

<article>

What is the difference between array and linked list?
</article>

<article>

Describe Stack & Queue?
</article>

<article>

Difference between polymorphism and constructor overloading?
</article>

<article>

How to reverse a linked list?
</article>

## Contributors

1. [Salman Farsi](https://www.linkedin.com/in/salmanfarsi0/)
