---
description: Synesis IT interview questions, Synesis IT interview stages, Synesis IT interview details, Synesis IT interview question and answers
head:
  - - link
    - rel: canonical
      href: https://tamimehsan.github.io/interview-questions-bangladesh/companies/synesis
---
# Synesis IT

| <img width="441" height="1"> | <img width="441" height="1"> |
| :-| :- |
| Founding year | |
| Company Website | https://synesisit.com.bd/ |
| Career Website | https://synesisit.com.bd/career/ |
| Technologies Used|  |

## Introduction
Synesis takes a on campus written test first. The questions contain some coding problem, Database, writting sql, OOP etc
The second stage is face to face interview

## On Campus Written Test

<article>

Given a list of courses you have to take and a list of prerequisites, return the order in which you have to take the courses. If it is not possible to take all the courses return an empty list.

[**💻 Submit Code**](https://leetcode.com/problems/course-schedule-ii)
<details><summary>Show Answer</summary>
	
```C++
class Solution {
public:
    vector<int> order;
    vector<int> graph[2005];
    int color[2005] = {0};

    bool dfs(int u){
        color[u] = 1;
        for(auto v : graph[u]){
            if( color[v] == 1 ) return false;
            if( color[v] == 2 ) continue;
            bool possible = dfs(v);
            if( !possible ) return false;
        }
        color[u] = 2;
        order.push_back(u);
        return true;
    }

    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        for(auto prerequisite : prerequisites){
            graph[prerequisite[1]].push_back(prerequisite[0]);
        }
        for(int i = 0; i < numCourses; i++){
            if( color[i] == 0 ) {
                bool possible = dfs(i);
                if( !possible ) return vector<int>{};
            }
        }
        reverse(order.begin(), order.end());
        return order;
    }
};
```
</details>
</article>

<article>

Given an integer array of size n, find all elements that appear more than `⌊n/3⌋` times.

[**💻 Submit Code**](https://leetcode.com/problems/majority-element-ii)
<details><summary>Show Answer</summary>
	
```C++
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> majors;
        int count = 1;

        for(int i = 1; i < nums.size(); i++){
            if( nums[i] != nums[i-1] ){
                if( count > nums.size()/3 ) majors.push_back(nums[i-1]);
                count = 0;
            }
            count++;
        }

        if( count > nums.size()/3 ) majors.push_back(nums.back());
        return majors;
    }
};
```
</details>
</article>

<article>

Given string num representing a non-negative integer `num`, and an integer `k`, return the smallest possible integer after removing `k` digits from num.

[**💻 Submit Code**](https://leetcode.com/problems/remove-k-digits)
<details><summary>Show Answer</summary>
	
```C++
class Solution {
public:
    string removeKdigits(string num, int k) {
       
        string newNum = "";
        // remove digits that are greater than the next digit
        for(int i=0;i<num.size();i++){
            while( k and newNum.size() and newNum.back() > num[i] ){
                k--;
                newNum.pop_back();
            }
            newNum += num[i];
        }
        // remove leading zeros
        reverse(newNum.begin(),newNum.end());
        while( newNum.size() and newNum.back() == '0' ) newNum.pop_back();
        reverse(newNum.begin(),newNum.end());
        // remove remaining k digits if any
        while(k and newNum.size()) {
            newNum.pop_back();
            k--;
        }
        // if newNum is empty, return 0
        if( newNum.size() == 0 ) newNum = "0";
        return newNum;
    }
};

```
</details>
</article>

## Behavioral Questions
<article>

How would you manage your team if some teammate doesn't cooperate or doesn't contribute?
<details><summary>Show Answer</summary>

Answer varies from person to person
</details>
</article>

