# Interview Questions Bangladesh

A crowd sourced collection of interview questions asked in Bangladeshi Tech companies. 

## Table of Contents
- [Chaldal](#chaldal)
- [DSI](#dsi)
- [IQVIA](#iqvia)
- [Priyo](#priyo)
- [Samsung (SRBD)](#srbd)
- [Synesis IT](#synesis-it)
- [Therap](#therap)


## Chaldal

### Intro
Chaldal interview process has 3 stage

1. Apltitude Test: Basic reasoning, vocabulary, maths etc
2. First round Interview :  There will be 2 seperate interview. The questions asked depend on the interviewer. They may be coding or technical or both. Two yes will lead to next round. 1 yes and 1 no gives you a third chance.
3. CTO round: It is kind of a behavioural round. But the questions can be coding or technical.

### Questions

<details>
<summary>
Tell me about yourself? Why do you want to join chaldal
</summary>
<br>
Answer varies from person to person
</b>
</details>

<details>
<summary>
You have been provided a spiral matrix of size NXN along with a coordinate (x, y) as follows. Find the element at the position (x, y) of the matrix.
N = 4, x = 2, y =1 

```math
$$\begin{bmatrix}
1 & 2 & 3 & 4 \\
12 & 13 & 14 & 5 \\
11 & 16 & 15 & 6 \\
10 & 9 & 8 & 7
\end{bmatrix}$$
```
</summary>
<br>

```C++
The element at position (2, 1) is **12** [*indexed at (1, 0)*]
```
<br>
</details>

<details>
<summary>
Given a number in roman format. Convert it to arabic numeral.
</summary>
<br>

```C++

map<char,int>RtoA;
void preprocess(){
    // Map of romans to Arabic
    RtoA['I'] = 1;      RtoA['V'] = 5;
    RtoA['X'] = 10;     RtoA['L'] = 50;
    RtoA['C'] = 100;    RtoA['D'] = 500;
    RtoA['M'] = 1000;
}

// Roman numerals to Arabic
int RomanToArabic(string R){
    int value = 0;
    int n = R.size();
    for(int i=0;i<n;i++){
        if( R[i+1] && RtoA[ R[i] ] < RtoA[ R[i+1] ] ){
            value+= RtoA[ R[i+1] ] - RtoA[ R[i] ];
            i++;
        } else{
            value+=RtoA[ R[i] ];
        }
    }
    return value;
}
```

<br>
</details>


<details>
<summary>
Given a string of characters. Reverse the string without using any library function.
</summary>
<br>
[Answer]
<br>
</details>


<details>
<summary>
Given a string of characters. Check if the given string is a palindrome.
</summary>
<br>
[Answer]
<br>
</details>

<details>
<summary>
Given an positive integer n. Find the sum of even fibonacchi number upto nth term.
</summary>
<br>
[Answer]
<br>
</details>

<details>
<summary>
Given a string of characters [0-9]. Convert it to integer.
</summary>
<br>
[Answer]
<br>
</details>

<details>
<summary>
Given an array of integers. Generate all possible permutation of the given array.
</summary>
<br>
[Answer]
<br>
</details>

<details>
<summary>
Given an array of integers. Generate all possible subset of the given array.
</summary>
<br>
[Answer]
<br>
</details>

<details>
<summary>
Given a regex expression and a string. Check if the regex expression matches with the string.
</summary>
<br>
[Answer]
<br>
</details>



<details>
<summary>
Find digits from a string( Leading zeroes doesn't get counted)
</summary>
<br>

```
```

</b>
</details>

<details>
<summary>
Given a string s containing lowercase lattin letters and another string p containing lowercase lattin letters and * and ?. * means any substring possibly empty. ? means any character but single.

Print yes or no if both strings matches. [RegEx Matching]
</summary>
<br>

```
```

</b>
</details>

<details>
<summary>
About project: What have you done in the authentication part in your project? Also how did you specify roles for different users.
</summary>
<br>

```
```

</b>
</details>

<details>
<summary>
Write a function which converts decimal number to hexadecimal
</summary>
<br>

```C++
string decimalToHexa(int decimal){
    string hexa = "";
    while(decimal > 0){
        int remainder = decimal % 16;
        if(remainder < 10){
            hexa = to_string(remainder) + hexa;
        }else{
            hexa = char(remainder + 55) + hexa;
        }
        decimal /= 16;
    }
    return hexa;
}
```

</b>
</details>

<details>
<summary>
Write a function which finds all the subset of a given set.
</summary>
<br>

```
```

</b>
</details>


## DSI

### Intro
DSI takes a on campus written test first. The questions contain some coding problem, Database, writting sql, OOP etc
The second stage is face to face interview

### Questions
<details>
<summary>
There is an array initially containing n numbers. then each of the numbers of the array is multiplied by 2. Now the array is 2 * n size and each element of the array gets shuffled. You are given the shuffled array of size 2 * n. You have to restore the original array.
</summary>
<br>

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
<br/>
</details>

<details>
<summary>
Given n inputs each with n bits. Output a number not given which has n bits too.
</summary>
<br>
[Answer]
<br>
</details>


## IQVIA

### Intro
The preliminary test of IQVIA consists of 3 stage

- Aplitude: Understanding, Vocabulary, Reasoning, Maths
- Automata: Easy level coding test
- Automata Pro: Medium level coding test

Then if selected there will be a technical interview. 

### Questions

<details>
<summary>
Given a string of lowercase characters. Find the count of characters which only occured once in the string.
</summary>
<br>
[Answer]
<br>
</details>

<details>
<summary>
Given n,Find all primes less than equal n.
</summary>
<br>
[Answer]
<br>
</details>

<details>
<summary>
Given coordinates x,y and radius r of two circle. Find the area of intersection between them. Print area in double with 6 digit precision.
</summary>
<br>
[Answer]
<br>
</details>

<details>
<summary>
Given a list of ranges. Find the length covered by at least one of the range. <br>
input: [[1,3],[2,5],[6,7]] <br>
output: 5 <br>
explanation: range [1,5],[6,7] are covered by at least one range
</summary>
<br>
[Answer]
<br>
</details>

<details>
<summary>
Sort array elements by their frequency and in case of tie, keep the order they arrive in the original array.
</summary>
<br>
[Answer]
<br>
</details>

<details>
<summary>
Given the connection between cities, Count the number of disjoint clusters of cities.
</summary>
<br>
[Answer]
<br>
</details>

<details>
<summary>
Given a string of characters S and a specific character C. Find the number of occurance of C in S.
</summary>
<br>
[Answer]
<br>
</details>

<details>
<summary>
Given a range [l,r]. Find all primes between this range. 
</summary>
<br>
[Answer]
<br>
</details>

<details>
<summary>
Given two binary string A,B. Find the minimum number of bit flips to change string A to string B.
</summary>
<br>
[Answer]
<br>
</details>

<details>
<summary>
2 shops sell apples in lots. their price is given. You cannot buy any loose apples. find minimum cost of buying exactly n apples.
</summary>
<br>
[Answer]
<br>
</details>

<details>
<summary>
Given an integer array. Sort the array in nondecreasing order using frequency count of elements in the array. 
</summary>
<br>
[Answer]
<br>
</details>

<details>
<summary>
Given an array of thresholds. For each threshold print the first negative number.
</summary>
<br>
[Answer]
<br>
</details>

<details>
<summary>
What happens when you type google.com and press enter in your search bar
</summary>
<br>
[Answer]
<br/>
</details>

## Priyo

### Intro
Priyo takes 2 interview. \
First one has two part. One coding round and another technical round. Each half hour long. \
Second one is with CEO. It is a behavioural round. 

### Questions
<details>
<summary>
Given an array of positive integers and a integer p. Find the length of the minimum subarray upon deleting which the sum of remaining element will be divisible by p;

Follow up 1: find the number of subarray (need not be minimum) deleting which will result the sum to be divisible by p

Follow up 2: For each index find the number of times it is included in any subarray upon deleting which the remaining sum will be divisible by p
</summary>
<br>
[Answer]
<br/>
</details>

<details>
<summary>
You are given an array people and an integer limit, where people[i] is the weight of the ith person, and an infinite number of boats where each boat can carry a maximum weight of limit. 
Each boat carries at most two people at the same time, provided the sum of the weight of those people is at most limit.

Return the minimum number of boats to carry every given person.
</summary>
<br>
[Answer]
<br/>
</details>

<details>
<summary>
Given an array of n colored balls. And some boxes. Each box has some capacity and each box must contain balls of same color. What is the maximum number of balls that the boxes can carry?
Constraint: max capacity of box - min capacity of box <= 1
</summary>
<br>
[Answer]
<br/>
</details>


<details>
<summary>
Given an array of n integers.Find max subarray sum with at most one delete.
</summary>
<br>
[Answer]
<br/>
</details>

<details>
<summary>
Given an array of n integers. Find the number of subarrays where the maximum element is between x and y
</summary>
<br>
[Answer]
<br/>
</details>


## SRBD
### Intro

SRBD takes interview in two round.

Round 1 is coding round. The problems are typically from leetcode. You can only proceed to round 2 if you can solve round 1 correctly.

Round 2 is a technical round. You might get asked about basic theories or solve some simple problems

### Questions

<details>
<summary>
You are given n balloons, indexed from 0 to n - 1. Each balloon is painted with a number on it represented by an array nums. You are asked to burst all the balloons.

If you burst the ith balloon, you will get nums[i - 1] * nums[i] * nums[i + 1] coins. If i - 1 or i + 1 goes out of bounds of the array, then treat it as if there is a balloon with a 1 painted on it.

Return the maximum coins you can collect by bursting the balloons wisely.

Variants: coins achived is nums[i-1]*nums[i+1]
</summary>
<br>
[Answer]
<br>
</details>


## Synesis IT
Synesis takes a on campus written test first. The questions contain some coding problem, Database, writting sql, OOP etc
The second stage is face to face interview
<details>
<summary>
How would you manage your team if some teammate doesn't cooperate or doesn't contribute?
</summary>
<br>
Answer varies from person to person
<br/>
</details>

## Therap
### Intro
Therap has multiple roles. 
1. Software Engineer
2. Database Engineer
3. Quality Assurance Engineer
4. Embedded System Engineer

The selection process has x number of steps
1. Initial screening
2. ?
### Questions
<details>
<summary>
[DB] Design an ERD of online restaurant management system
</summary>
<br>
[Answer]
<br/>
</details>

<details>
<summary>
[DB] What is Database Transaction
</summary>
<br>
[Answer]
<br/>
</details>

<details>
<summary>
[DB] Briefly explain ACID properties
</summary>
<br>
[Answer]
<br/>
</details>

<details>
<summary>
[DB] What is normalization and denormalization
</summary>
<br>
[Answer] 
<br/>
</details>

<details>
<summary>
[DB] Briefly explain BCNF
</summary>
<br>
[Answer]
<br/>
</details>

<details>
<summary>
[DB] Explain data warehousing
</summary>
<br>
[Answer]
<br/>
</details>

<details>
<summary>
[DB] Explain data redundancy
</summary>
<br>
[Answer]
<br/>
</details>

<details>
<summary>
[DB] Briefly mention the differences between stored procedure, function and trigger
</summary>
<br>
[Answer]
<br/>
</details>

<details>
<summary>
[DB] Briefly mention the differences between delete, drop and truncate
</summary>
<br>
[Answer]
<br/>
</details>

<details>
<summary>
[DB] Briefly mention the differences between where and having clause
</summary>
<br>
[Answer]
<br/>
</details>

<details>
<summary>
[DB] Briefly mention the differences between candidate key and super key
</summary>
<br>
[Answer]
<br/>
</details>

<details>
<summary>
[DB] A schema has entities like CUSTOMERS, ORDERS, ORDER_ITEMS, PRODUCTS, PRODUCT_DETAILS, WAREHOUSES, INVENTORIES. Data fields of entities and cardinality relationships were given in the figure. Questions included from <>
1. Group by, Order by, Join <>
2. Extracting month and year from oracle dates <>
3. Find ranks based on some criterion. The extremely hard question was - find top 10 customers based on their total amount spent in 2023. This one involved the following topics: aggregation, join of multiple tables, nested sub-query, year extraction from date. The book of Sukarna sir contains one/two such exercises. Practise them properly

</summary>
<br>
[Answer]
<br/>
</details>

<details>
<summary>
[SWE] Given an array of numbers indicating stock price of n consecutive days. If you buy stock at one day and sell at any later day what is the maximum profit that you can get
</summary>
<br>
[Answer]
<br/>
</details>

<details>
<summary>
[SWE] Given an array of n integers. You need to take all zeroes in array to the end without changing the relative order of remaining element.
eg: [2,0,0,3,1,0,5] => [2,3,1,5,0,0,0]
</summary>
<br>
[Answer]
<br/>
</details>

<details>
<summary>
[SWE] Given an array of n integers. Reorder the elements such that all odd numbers occur after even numbers.
</summary>
<br>
[Answer]
<br/>
</details>

<details>
<summary>
[SWE] Given an array of strings. Print the sets of strings which are anagram.
eg: ["cat","tab","act","bat","taco"] => [{"cat","act"},{"tab","bat"},{"taco"}] 
</summary>
<br>
[Answer]
<br/>
</details>

<details>
<summary>
[SWE] Given an array of n integers. Find the kth largest element in the array.
</summary>
<br>
[Answer]
<br/>
</details>

<details>
<summary>
[SWE] Given two very large number in string format. Find the sum of the two number
</summary>
<br>
[Answer]
<br/>
</details>

<details>
<summary>
[SWE] Given two binary tree. Check if they are identical [not isomorphism]
</summary>
<br>
[Answer]
<br/>
</details>

<details>
<summary>
[SWE] Given two array of integers. Find the common elements between them.
</summary>
<br>
[Answer]
<br/>
</details>

## Contributing
See CONTRIBUTION.md for more guidelines
