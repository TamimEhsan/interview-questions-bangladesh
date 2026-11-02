---
description: DSI interview questions, DSI interview stages, DSI interview details, DSI interview question and answers
head:
  - - link
    - rel: canonical
      href: https://tamimehsan.github.io/interview-questions-bangladesh/companies/dsi
---
# DSI

| <img width="441" height="1"> | <img width="441" height="1"> |
| :-| :- |
| Founding year | 2001  |
| Company Website | https://www.dsinnovators.com/ |
| Career Website | https://app.hrythmic.com/recruit/openings/company/dsinnovators/ |
| Technologies Used| Java, Springboot, Nodejs(hapi), Hibernate, ReactJs, NextJs, AngularJS, Android, iOS |

## Introduction
[Dynamic Solution Innovators Ltd](https://www.dsinnovators.com/) is an international software company based in Dhaka, Bangladesh. They have been successfully providing software services since 2001 in both the local and global market.
## Interview Stages
DSI takes a on campus written test first. The questions contain some coding problem, Database, writting sql, OOP etc
The second stage is face to face interview

## Questions
<article>

There is an array initially containing n numbers. then each of the numbers of the array is multiplied by 2. Now the array is 2 * n size and each element of the array gets shuffled. You are given the shuffled array of size 2 * n. You have to restore the original array.

[**💻 Submit Code**](https://supecoder.dev/questions/Find%20Original%20Array%20From%20Doubled%20Array?questionId=66ae10189e71a163cdd2011b)
<details><summary>Show Answer</summary>

```C++
bool restoreDouble(vector<int> input,vector<int>& output){
    int n = input.size();
    map<int,int> marked;
    sort(input.begin(),input.end());
    for(int i=0;i<n;i++){
        if( marked[ input[i] ] == 0 ) {
            output.push_back( input[i] );
            marked[ 2*input[i] ] ++;
        }else{
            marked[ input[i] ]--;
        }
    }
    for( auto entry:marked ){
        if( entry.second != 0 ) return false;
    }
    return true;
}
```
</details>
</article>

<article id="q-algo-missing-bit-string">

Given n inputs each with n bits, output a number which was not in the given inputs and has n bits too.
</article>

<article id="q-net-osi-layers">

What are the 7 layers in OSI networking model? 
<details><summary>Show Answer</summary>

![](https://cf-assets.www.cloudflare.com/slt3lc6tev37/6ZH2Etm3LlFHTgmkjLmkxp/59ff240fb3ebdc7794ffaa6e1d69b7c2/osi_model_7_layers.png)

</details>
</article>

<article>

Given a string s, find the longest substring between two identical character.ex: afgksia -> ans: fgksi
</article>

<article>

Given a number n.return true if you find a middle element k such that sum of 1 to k and sum from k to n are equal.if there no one return false.
    ex: 49.
	output: true.
	explanation: 1 + 2 + ... + 35 = 35 + 36 + ... + 49
</article>

<article id="q-db-normalize-student-table">

Apply database normalization technique to the following table

student table:
|student_id | name    | course_name | course_fee |
| :-: | :- | :- | :-: |
| 1 	   | shakib  | DSA         | 400	  |
| 2 	   | rakib   | Algorithms  | 100	  |
| 3 	   | showrov | Networking  | 300	  |
| 4 	   | kalam   | Algorithms  | 100	  |

<details><summary>Show Answer</summary>
We will normalize the given table step by step into **1NF, 2NF, and 3NF**. You can at first read through the theory from [Normalization in SQL: A Complete Guide to 1NF Through 5NF by DataCamp](https://www.datacamp.com/tutorial/normalization-in-sql)

### Normalization Steps:
- 1NF: Each cell holds a single atomic value; every row is uniquely identifiable
- 2NF: Remove partial dependencies—non-key columns must depend on the entire primary key
- 3NF: Remove transitive dependencies—non-key columns depend only on the primary key, not on other non-key columns

### Step 1: 1NF

**Rule**: All values must be atomic, with no repeating groups, and each row must be uniquely identifiable.  
**Check**: Every cell holds a single value, and student_id uniquely identifies each row.  
**Result**: The table is already in 1NF. No change is needed.

### Step 2: 2NF

**Rule**: Must be in 1NF, with no partial dependencies (a non-key attribute depending on only part of a composite key).  
**Check**: The primary key is a single column (student_id), so a partial dependency is impossible.  
**Result**: The table is already in 2NF. No change is needed.

### Step 3: 3NF

**Rule**: Must be in 2NF, with no transitive dependencies (a non-key attribute depending on another non-key attribute).  
**Check**: There is a transitive dependency: `student_id → course_name → course_fee`. `course_fee` depends on `course_name`, which is not a key, rather than directly on `student_id`.

**Fix**: Move the course data into its own table and link it with a foreign key.

#### `Course` table

| course_name (PK) | course_fee
| :- | :-: |
| DSA	| 400 |
| Algorithms	| 100 |
| Networking	| 300 |

#### `Student` table
| student_id (PK) | name | course_name (FK)
| :-: | :- | :-: |
| 1	| shakib	| DSA |
| 2	| rakib	| Algorithms |
| 3	| showrov	| Networking |
| 4	| kalam	| Algorithms |

Note: It is better to use a surrogate key for the `Course` table, but for simplicity, we are using `course_name` as the primary key.
</details>
</article>

<article>

Explain ACID properties
</article>

<article id="q-oop-static-keyword">

Explain static keyword
</article>

<article>

What is significance of this below operation?

```
a=a^b;
b=a^b;
a=a^b;
```
   
<details><summary>Show Answer</summary>

Swaps the value of a and b without a third variable using bit manipulation
</details>
</article>

<article id="q-sec-authn-vs-authz">

Difference between authentication and authorization
</article>

<article>

Given three value `a,b,c`, write a program to determine if we can make a traingle using these as side lengths.
</article>

