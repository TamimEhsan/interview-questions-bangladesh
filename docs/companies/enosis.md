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

<article>

You are given two arrays, `files[]` and `backupTimes[]`, where each index `i` represents a backup event for file `files[i]` at time `backupTimes[i]` (in seconds). A file is considered redundant if it has been backed up at least three times within a day (i.e., within 86,400 seconds). Return the number of distinct redundant files. @@SWE2026@@
</article>

<article>

Engineers analyze user interaction patterns to enhance personalized recommendations for an online streaming platform. They are given a binary string `interactionLog` where each character (`'0'` or `'1'`) represents a specific type of user engagement.

A substring of `interactionLog` is considered significant if it meets both of these conditions:

1. Its length is in the range `[minSeqLength, maxSeqLength]` inclusive.
2. No two adjacent characters are the same.

Implement a function `countSignificantInteractions`, which takes the following inputs:

- `string interactionLog`: the binary data representing user interaction patterns
- `int minSeqLength`: the minimum length
- `int maxSeqLength`: the maximum length

The function should calculate and return the total number of significant substrings in `interactionLog`.


**Constraints**

- `1 ≤ |interactionLog| ≤ 2 × 10⁵`
- `1 ≤ minSeqLength ≤ maxSeqLength ≤ |interactionLog|` @@SWE2026@@

<details><summary>Example</summary>

**Example**

```
interactionLog = "10010"
minSeqLength = 2
maxSeqLength = 3
```

| Start Index (i) | End Index (r) | Substring [i...r] | Is Significant? |
| :-: | :-: | :-: | :- |
| 0 | 1 | `"10"` | Yes |
| 1 | 2 | `"00"` | No (matching adjacent characters) |
| 2 | 3 | `"01"` | Yes |
| 3 | 4 | `"10"` | Yes |
| 0 | 2 | `"100"` | No (matching adjacent characters) |
| 1 | 3 | `"001"` | No (matching adjacent characters) |
| 2 | 4 | `"010"` | Yes |

Return the number of significant substrings: `4`.
</details>

<details><summary>Sample Cases</summary>

Sample Input 0

```
interactionLog = "1010"
minSeqLength = 2
maxSeqLength = 2
```

Sample Output 0

```
3
```

Sample Input 1

```
interactionLog = "110"
minSeqLength = 1
maxSeqLength = 3
```

Sample Output 1

```
4
```
</details>

<details><summary>Code Template (C++)</summary>

```cpp
#include <bits/stdc++.h>

/*
 * Complete the 'countSignificantInteractions' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. STRING interactionLog
 *  2. INTEGER minSeqLength
 *  3. INTEGER maxSeqLength
 */

long countSignificantInteractions(string interactionLog, int minSeqLength, int maxSeqLength) {

}

int main() { ... }
```
</details>
</article>

<article>

In a multi-model machine learning system, different models are trained sequentially on a single GPU. If a higher-priority task arrives during training, the lower-priority task is paused until the higher-priority task finishes.

There are `n` different AI models to be trained on the GPU, each with a unique ID between `0` and `n - 1`. A list of training logs is represented by an array of strings, `logs[m]`. Log entries follow the format `(modelId):(start/end):(timestamp)`, indicating that the model with ID = `modelId` either starts or ends at a time identified by the timestamp value. If any model is introduced while the previous one is running, the previous model is put on hold, and the current model is trained until it is completed or put on hold.

Implement a function `getTotalTrainingTime` that determines each model's training time. It takes two inputs:

- `int n`: the number of models to train
- `string logs[m]`: each string is a training log

The function should return an array specifying the exclusive training times of each model.

**Constraints**

- `1 ≤ n ≤ 100`
- `1 ≤ m ≤ 500`
- `0 ≤ model_id < n`
- `0 ≤ timestamp ≤ 3 × 10³`
- The timestamps are given in non-decreasing order.
- No two starting timestamps and no two ending timestamps are equal.
- Every model's `start` call has a corresponding `end` call. @@SWE2026@@

<details><summary>Example</summary>

**Example**

```
n = 3
logs = ["0:start:0", "2:start:4", "2:end:5", "1:start:7", "1:end:10", "0:end:11"]
```

| Timestamp | Model Running | Remarks |
| :-: | :-: | :- |
| 0 | 0 | Model 0 starts |
| 1 | 0 | |
| 2 | 0 | |
| 3 | 0 | |
| 4 | 2 | Model 0 is paused and Model 2 starts |
| 5 | 2 | Model 2 ends |
| 6 | 0 | Model 0 resumes |
| 7 | 1 | Model 0 is paused and Model 1 starts |
| 8 | 1 | |
| 9 | 1 | |
| 10 | 1 | Model 1 ends |
| 11 | 0 | Model 0 ends |

Thus, the total number of seconds allocated to Models 0, 1, and 2 are 6, 4, and 2 respectively. Hence the answer is `{6, 4, 2}`.
</details>

<details><summary>Sample Cases</summary>

Sample Input 0

```
n = 2
logs[] size m = 4
logs = ["0:start:0", "1:start:3", "1:end:6", "0:end:10"]
```

Sample Output 0

```
7
4
```

Sample Input 1

```
n = 3
logs[] size m = 6
logs = ["0:start:0", "1:start:3", "1:end:6", "2:start:8", "2:end:10", "0:end:12"]
```

Sample Output 1

```
6
4
3
```
</details>

<details><summary>Code Template (C++)</summary>

```cpp
#include <bits/stdc++.h>

/*
 * Complete the 'getTotalTrainingTime' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING_ARRAY logs
 */

vector<int> getTotalTrainingTime(int n, vector<string> logs) {

}

int main() { ... }
```
</details>
</article>

<article>

Given `AB = 4` and `AC = 5`, the perimeter of the rectangle is:

- A. 18
- B. 40
- C. 14
- D. 22

@@SWE2026@@
</article>

<article>

Select the option that is related to the fifth number in the same way as the second number is related to the first number and the fourth number is related to the third number.

`52 : 5 :: 100 : 7 :: 164 : ?`

- A. 7
- B. 8
- C. 11
- D. 9

@@SWE2026@@
</article>

<article>

One watch which gains uniformly is one minute slow at 1 pm on Tuesday and it is two minutes fast at 1 am on the following Friday. When had it shown the correct time?

- A. 5.00 pm on Wednesday
- B. 9.00 pm on Wednesday
- C. 5.00 am on Wednesday
- D. 9.00 am on Wednesday

@@SWE2026@@
</article>

<article>

The product of two numbers is 9375 and the quotient, when the larger one is divided by the smaller, is 15. The sum of the numbers is:

- A. 395
- B. 380
- C. 400
- D. 425

@@SWE2026@@
</article>
