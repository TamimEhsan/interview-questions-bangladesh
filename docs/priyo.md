# Priyo

## Introduction
[Priyo](https://www.priyo.com/) is a finance based tech company operating in US market. They operate from Bangladesh. 
## Interview Stages
Priyo takes 2 interview. 
1. **Coding Round:** The coding round is half hour long. The problem given is typically harder than usual. Upon completion, follow ups can be asked
2. **Technical Round:** The technical round is also half hour. 
3. **CEO Round:** It is kind of a behavioural round. But the questions can be coding or technical.

## Coding Round Questions
<details>
<summary>
Given an array of positive integers and a integer p. Find the length of the minimum subarray upon deleting which the sum of remaining element will be divisible by p;

Follow up 1: find the number of subarray (need not be minimum) deleting which will result the sum to be divisible by p

Follow up 2: For each index find the number of times it is included in any subarray upon deleting which the remaining sum will be divisible by p
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
You are given an array people and an integer limit, where people[i] is the weight of the ith person, and an infinite number of boats where each boat can carry a maximum weight of limit. 
Each boat carries at most two people at the same time, provided the sum of the weight of those people is at most limit.

Return the minimum number of boats to carry every given person.
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
Given an array of n colored balls. And some boxes. Each box has some capacity and each box must contain balls of same color. What is the maximum number of balls that the boxes can carry?
Constraint: max capacity of box - min capacity of box <= 1
</summary>
<hr>
[Answer]
</details>


<details>
<summary>
Given an array of n integers.Find max subarray sum with at most one delete.
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
Given an array of n integers. Find the number of subarrays where the maximum element is between x and y
</summary>
<hr>
[Answer]
</details>

## Technical Round Questions
<details>
<summary>
Suppose you want to update value of a field in a database. Generally, a read operation is done to fetch the value. Based on the retrieved value some logic is applies and the result is updated in the field. Example, subtract from balance if the balance is more than some threshold. Another client in the meantime can update the field too thus resulting unexpected behaviour. How can this be solved?
</summary>
<hr>
There can be multiple approach to solve this problem.  

1. Complete the whole scenario in one query. 
1. Use stored procedure
1. Use locks. Add an extra column for the purpose of locking. Before fetching a data for update, set the said lock to 1. If it is already 1 then don't proceed.
</details>

<details>
<summary>
How authentication is done in microservice based applications?
</summary>
<hr>

</details>

