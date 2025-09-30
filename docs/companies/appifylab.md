# AppifyLab Ltd

|                   |                                            |
| :---------------- | :----------------------------------------- |
| Company Website   | https://www.appifylab.com/                 |
| Career Website    | https://www.appifylab.com/career           |
| Technologies Used | React, Flutter, Vue, Laravel, Nuxt, NodeJS |

## Introduction
Appify lab has a LMS(Learning Management System) product name [EzyCourse](https://ezycourse.com/)

## Interview Stages

### Initial Online Contest
**Platform:** vJudge  
**Details:** Participated in an online coding contest.  
**Selection:** Out of numerous participants, around 40-50 were selected for the onsite contest.  

### Onsite Contest
**Selection:** Out of numerous participants, around 10-15 were selected for the final interview.  
**Details:** The onsite contest was held in Sylhet.   

### Final Interview
The final interview is mainly a discussion about the company and the candidate's interest in joining. Employment terms like probabtion periond, internship time, possibility of permanent position, and location were discussed.

## First Round Questions

The given questions are the summarized version of the original questions. The original questions are available in the  [Online Round Problem Set](https://github.com/TamimEhsan/interview-questions-bangladesh/tree/master/docs/resource/appify/Online_Round.pdf).

<article>

Given multiple test cases, each containing a 3-letter string (uppercase/lowercase letters), you have to check whether the string equals "YES", case-insensitively. Output "YES" if it matches, else "NO".
</article>

<article>

Given
- Number of students, games, and connection events
- For each student, the game they like
- A sequence of connections between pairs of students over time

For each game, determine the earliest time when all students who like that game become connected (either directly or indirectly). Output `-1` if they never get connected.
</article>

<article>

Given:
- Number of questions
- For each question: initial score, per-minute penalty, minimum score
- For each question: submission time and number of submissions (positive if solved, non-positive if unsolved)

Calculate the total score based on a formula involving penalties and number of attempts. If a question is unsolved, its score is 0.
</article>

<article>

Given a list of unique 9-digit phone numbers. For each phone number, find the shortest digit substring that uniquely identifies it (i.e., no other number contains it as a substring).
</article>

<article>

Given:
- Number of dishes, adults, and kids
- For each dish: happiness value if eaten by an adult or by a kid

Assign one dish to each person (adult or kid) to maximize the total happiness. An adult eats the entire dish; a kid partially eats it.
</article>

<article>

Given:
- A list of item costs
- A limit on the total increase Sabbir can apply to the item costs

Sabbir increases item costs (total increment ≤ limit) to minimize the final score difference in a turn-based game where players pick items alternately and optimally.
</article>

<article>

Given:
- A circular string of length `N×K` representing N fragments of length `K`
- A list of G candidate fragments (all distinct)

Determine if the circular string can be split into a sequence of N valid fragments (from the candidate list) in some rotation. If possible, output any such valid sequence.
</article>

<article>

Given multiple test cases, each with two numbers: total artifacts `n` and a position `k`. Artifacts are arranged in a special sequence: first all odd-numbered ones, then multiples of odd numbers (2×odd, 3×odd, etc.) in order, skipping duplicates. Find which artifact appears at position k.

</article>

<article>

Given grid dimensions `n × m`. Determine if it is possible to assign pigment values to rows and columns such that every cell in the grid (combining row and column pigment modulo nm) has a unique value. If possible, output the row and column pigments. 
</article>
<!-- <iframe src="/interview-questions-bangladesh/resource/appify/Online_Round.pdf" width="400" height="600" type="application/pdf"></iframe> -->


## Second Round Questions
<!-- <iframe src="/interview-questions-bangladesh/resource/appify/Final_Onsite.pdf" width="400" height="600" type="application/pdf"></iframe>  -->
The given questions are the summarized version of the original questions. The original questions are available in the [Final Round Problem Set](https://github.com/TamimEhsan/interview-questions-bangladesh/tree/master/docs/resource/appify/Final_Onsite.pdf).

<article>
 
Given a sequence of integers, convert each number to binary using parity (even → 1, odd → 0), concatenate to form a binary string, and print it with leading zeros removed.
</article>

<article>
 
Given dimensions of two rectangles, one inside another, where the outer rectangle is `(A×B)` and inner rectangle is `(C×D)`, with `C ≤ A` and `D ≤ B`.

Compute the area between the two rectangles modulo `1,000,000,007`.

[**💻 Submit Code**](https://toph.co/p/the-attack-titan)

<details> <summary> Show Answer </summary>

```cpp
#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

long long multiplication(long long a, long long b,long long m){
    long long res = 0;
    a %= m;
    while (b) {
        if (b % 2)
            res = (res + a) % m;

        a = (2 * a) % m;
        b >>= 1;
    }
return res;
}

void solve(){
    long long a, b, c, d; cin >> a >> b >> c >> d;

    long long x = multiplication(a, b, mod);
    long long y = multiplication(c, d, mod);

    long long result = (x - y + mod) % mod;
    cout << result << "\n";
}
 
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}
```
</details>

</article>

<article>
 
Given `N` baskets arranged in a circle with given apples in each and a number `K` indicating how many apples one will eat. 

Simulate the person moving right and eating apples if present, and output the number of apples left in each basket after exactly K apples are eaten.
</article>

<article>

Given a string `s` of length `n`. Pick an integer `k` `(1 ≤ k ≤ n)` and perform a transformation: reverse each substring of length `k` sliding through the string, and find the lexicographically smallest resulting string. Output that string and the smallest such k.

[**💻 Submit Code**](https://codeforces.com/problemset/problem/1316/B)
</article>

<article>
 
Given a simple directed graph with `N` vertices and `M` edges. Count how many vertices can be starting points for infinite walks (i.e., they lie on or can reach a cycle).

[**💻 Submit Code**](https://atcoder.jp/contests/abc245/tasks/abc245_f)
</article>

<article>

Given a book with `N` pages (numbered `1` to `N`) and a secret digit (0–9), and you randomly pick a page. 
Compute the probability that the page number you picked contains the secret digit, expressed as an irreducible fraction `P/Q`.

[**💻 Submit Code**](https://www.codechef.com/problems/ANUBGC)
</article>

<article>
 
Given Grid size `n×m` and manhattan distances from a hidden cell `(a, b)` to `(1, 1)` and `(1, m)`. Find the coordinates `(a, b)` of the hidden cell using the given distances

[**💻 Submit Code**](https://codeforces.com/problemset/problem/1934/C)
</article>

## Contributors
- Interview applicant [Peal Hassan](https://www.linkedin.com/in/pealhassan/)  
- Collected and organized by [Mustaq Mujahid Mim](https://www.linkedin.com/in/mmmim/)