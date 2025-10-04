---
description: Enosis, Enosis Solutions, Enosis Bangladesh, Enosis interview questions, Enosis interview stages, Enosis interview details, Enosis interview question and answers
head:
  - - link
    - rel: canonical
      href: https://tamimehsan.github.io/interview-questions-bangladesh/companies/enosis
---
# Enosis Solutions

|                   |                                  |
| :---------------- | :------------------------------- |
| Founding year     |                                  |
| Company Website   | https://www.enosisbd.com/        |
| Career Website    | https://enosisbd.pinpointhq.com/ |
| Technologies Used |                                  |

## Introduction

Enosis is a software development company based in Bangladesh, specializing in web and mobile application development. They focus on delivering high-quality software solutions to clients worldwide. 

## Interview Stages

1. **Online Screening**: This stage typically includes coding problems, algorithm questions. Candidates are expected to solve problems in a limited time frame. Usually the test is conducted on platforms like HackerRank.
2. **Technical Interview**: This interview focuses on assessing the candidate's technical skills, including programming languages, data structures, algorithms, and problem-solving abilities. Candidates may be asked to write code
3. **HR Interview**: The HR interview evaluates the candidate's fit within the company culture, communication skills, and overall personality. It may also cover salary expectations and job role details.

## Questions

<article>
Given an array of strings `words` and a width `maxWidth`, format the text such that each line has exactly `maxWidth` characters and is fully (left and right) justified

[**💻 Submit Code**](https://leetcode.com/problems/text-justification/description/)
</article>

<article>

You are given an `n x n` 2D `matrix` representing an image, rotate the image by 90 degrees (clockwise).

[**💻 Submit Code**](https://leetcode.com/problems/rotate-image/description/)
<details> <summary> Show Answer </summary>

```cpp
void rotate(vector<vector<int>> &matrix)
    {
        reverse(matrix.begin(), matrix.end());
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = i + 1; j < matrix.size(); j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
```
</details>
</article>

<article>

Given an array `nums`. Find the average of the array excluding the maximum and minimum values.
</article>

<article>

Given n cars in a row with their speeds and a specific position, calculate the total number of collisions that occur.
</article>

<article>

Given an array of integers `nums` and queries in the form `l, r`. For each query, count the number of elements which are in range `[l,r]` in the array.
</article>

<article>

Given an array of integers `nums`. Find the second maximum element in an array using only one loop.
</article>

<article>

How do you center-align a right-angled triangle of numbers up to a given base limit?
</article>

<article>

Convert a given string into a palindrome with the least number of changes.
</article>

<article>

You are given two integer arrays `nums1` and `nums2`, sorted in non-decreasing order. Merge `nums1` and `nums2` into a single array sorted in non-decreasing order.

[**💻 Submit Code**](https://leetcode.com/problems/merge-sorted-array/description/)
<details> <summary> Show Answer </summary>

```cpp
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = m - 1, j = n - 1, k = n + m - 1;
    while (j >= 0)
    {
        if (i>=0&&nums1[i] > nums2[j])
        {
            nums1[k] = nums1[i];
            i--;
        }
        else
        {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }
}
```
</details>
</article>

<article>

Given an array of integers, calculate the absolute difference between the sum of odd-indexed and even-indexed elements.
</article>

<article>

How would you encrypt a string based on a given set of encryption rules?
</article>

<article>

Given an array of integers `nums`. In each move pick two numbers from start and end of the array, store the smaller in output, then remove it. Repeat until empty. What will be the output array?
</article>

<article>

Given an integer `x`, return `true` if `x` is a palindrome, and `false` otherwise.

[**💻 Submit Code**](https://leetcode.com/problems/palindrome-number/description/)
<details> <summary> Show Answer </summary>

```cpp
bool isPalindrome(int x)
{
    if (x < 0)
        return false;
    vector<int> v;
    long long n = x, ans = 0;
    while (x)
    {
        v.push_back(x % 10);
        x /= 10;
    }
    for (int i = 0; i < v.size(); i++)
    {
        ans += v[i] * pow(10, v.size() - 1 - i);
    }
    return n == ans;
}
```
</details>
</article>

<article>

Given an integer array `nums`, rotate the array to the right by `k` steps, where `k` is non-negative.

[**💻 Submit Code**](https://leetcode.com/problems/rotate-array/description/)
<details> <summary> Show Answer </summary>

```cpp
void rotate(vector<int> &nums, int k)
    {
        vector<int> cp = nums;
        int n = nums.size();
        k = k % n;
        for (int i = 0; i < n; i++)
        {
            cp[(i + k) % n] = nums[i];
        }
        nums = cp;
    }
```
</details>
</article>

<article>

Given an array and a number, construct a number from the array digits, subtract the given number, and return the result.
</article>

<article>

Given `n`, calculate the `nth` Fibonacci number F`(n)`.

[**💻 Submit Code**](https://leetcode.com/problems/fibonacci-number/description/)
</article>

<article>

Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, and `false` otherwise.

[**💻 Submit Code**](https://leetcode.com/problems/valid-anagram/description/)
<details> <summary> Show Answer </summary>

```cpp
 bool isAnagram(string s, string t)
    {
        map<char, int> m1, m2;
        for (int i = 0; i < s.size(); i++)
        {
            m1[s[i]]++;
        }
        for (int i = 0; i < t.size(); i++)
        {
            m2[t[i]]++;
        }
        if (m1.size() != m2.size())
            return false;
        for (auto it : m1)
        {
            if (m2.count(it.first) == 0)
                return false;
            else if (m2[it.first] != it.second)
                return false;
        }
        return true;
    }
```
</details>
</article>

<article>

Print all repeating elements in an array.
</article>

<article>

Given a string queryIP, return "IPv4" if IP is a valid IPv4 address, "IPv6" if IP is a valid IPv6 address or "Neither" if IP is not a correct IP of any type.

[**💻 Submit Code**](https://leetcode.com/problems/validate-ip-address/description/)
</article>

<article>

You are given a string, `message`, and a positive integer, `limit`. Split the string into lines such that each line has a maximum of `limit` characters.
[**💻 Submit Code**](https://leetcode.com/problems/split-message-based-on-limit/description/)
</article>

<article>

Build a linked-list-based tree structure with left and right children.
</article>

<article>

How would you build a tree structure from a list of given nodes?
</article>

<article>

What are the key differences between a tree and a graph data structure?
</article>

<article>

What are the four pillars of Object-Oriented Programming (OOP)?
</article>

<article>

What is DFS? Implement Depth-First Search in any programming language.
</article>

<article>

Explain the internal working and implementation of a priority queue.
</article>

<article>

What is the time complexity of operations in a Red-Black Tree?
</article>

<article>

System design question: File management software. @@Senior@@
</article>