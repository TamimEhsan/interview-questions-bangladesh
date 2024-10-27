# IQVIA

## Introduction
[IQVIA](https://www.iqvia.com/) is an American Fortune 500 and S&P 500 multinational company serving the combined industries of health information technology and clinical research. They hire professionals from Bangladesh as remote.
## Interview Stages
The preliminary test of IQVIA consists of 3 stage

- **Aptitude:** Understanding, Vocabulary, Reasoning, Maths
- **Automata:** Easy level coding test
- **Automata Pro:** Medium level coding test

Then if selected there will be a technical interview. 

## Questions

<details>
<summary>
Given a string of lowercase characters. Find the count of characters which only occured once in the string.
</summary>
<hr>

[**💻 Submit Code**](https://supecoder.dev/questions/Count%20of%20Characters%20Occurring%20Exactly%20Once?questionId=66ae165b9e71a163cdd21527)

```C++
int solve(string s) {
    sort(s.begin(),s.end());
    int unik = 0;
    int cnt = 1;
    for(int i=1;i<s.size();i++){
        if( s[i] != s[i-1] ){
            unik += (cnt == 1);
            cnt = 0;
        }
        cnt++;
    }
    unik += (cnt == 1);
    return unik;
}
```
</details>

<details>
<summary>
Given n,Find all primes less than equal n.
</summary>
<hr>

::: code-group
```C++ [O(n^2)]
vector<int> solve(int n) {
    vector<int> primes;
    for(int i=2;i<=n;i++){
        bool isPrime = true;
        for(int j=2;j<i;j++) {
            if( i%j == 0 ) isPrime = false;
        }
        if( isPrime ) primes.push_back(i);
    }
    return primes;
}
```
```C++ [O(n logn)]
vector<int> solve(int n) {
    bool notPrime[n+1] = {0};
    vector<int> primes;
    for(int i=2;i<=n;i++){
        if( notPrime[i] == true ) continue;
        primes.push_back(i);
        for(int j=i*i;j<=n;j+=i) notPrime[j] = true;
    }
    return primes;
}
```
:::
</details>

<details>
<summary>
Given coordinates x,y and radius r of two circle. Find the area of intersection between them. Print area in double with 6 digit precision.
</summary>
<hr>

```C++
// src: https://www.geeksforgeeks.org/area-of-intersection-of-two-circles/

#include <bits/stdc++.h>
using namespace std;
#define ld long double
// Function to return area of intersection
long long int
intersectionArea(long double X1, long double Y1,
                    long double R1, long double X2,
                    long double Y2, long double R2){
	long double Pi = 3.14;
	long double d, alpha, beta, a1, a2;
	long long int ans;

	// Calculate the euclidean distance
	// between the two points
	d = sqrt((X2 - X1) * (X2 - X1) + (Y2 - Y1) * (Y2 - Y1));

	if (d > R1 + R2)
		ans = 0;
	else if (d <= (R1 - R2) && R1 >= R2)
		ans = floor(Pi * R2 * R2);
	else if (d <= (R2 - R1) && R2 >= R1)
		ans = floor(Pi * R1 * R1);
	else {
		alpha = acos((R1 * R1 + d * d - R2 * R2) / (2 * R1 * d))* 2;
		beta = acos((R2 * R2 + d * d - R1 * R1) / (2 * R2 * d))* 2;
		a1 = 0.5 * beta * R2 * R2 - 0.5 * R2 * R2 * sin(beta);
		a2 = 0.5 * alpha * R1 * R1 - 0.5 * R1 * R1 * sin(alpha);
		ans = floor(a1 + a2);
	}

	return ans;
}

```
</details>

<details>
<summary>
Given a list of ranges. Find the length covered by at least one of the range. <br>
input: [[1,3],[2,5],[6,7]] <br>
output: 5 <br>
explanation: range [1,5],[6,7] are covered by at least one range
</summary>
<hr>

```C++
int solve(vector<pair<int,int>> ranges) {
    sort(ranges.begin(),ranges.end());
    int covered = 0;
    int st = ranges[0].first;
    int en = ranges[0].second;
    for(int i=1;i<ranges.size();i++){
        if( ranges[i].first > en ) {
            covered += en - st;
            st = ranges[i].first;
            en = ranges[i].second;
        }
        en = max(en,ranges[i].second);
    }
    covered += en - st;
    return covered;
}
```
</details>

<details>
<summary>
Sort array elements by their frequency and in case of tie, keep the order they arrive in the original array.
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
Given the connection between cities, Count the number of disjoint clusters of cities.
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
Given a string of characters S and a specific character C. Find the number of occurance of C in S.
</summary>
<hr>

```C++
int solve(string s, char c) {
    int cnt = 0;
    for(auto cc:s) cnt += (cc==c);
    return cnt;
}
```
</details>

<details>
<summary>
Given a range [l,r]. Find all primes between this range. 
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
Given two binary string A,B. Find the minimum number of bit flips to change string A to string B.
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
2 shops sell apples in lots. their price is given. You cannot buy any loose apples. find minimum cost of buying exactly n apples.
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
Given an integer array. Sort the array in nondecreasing order using frequency count of elements in the array. 
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
Given an array of thresholds. For each threshold print the first negative number.
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
What happens when you type google.com and press enter in your search bar
</summary>
<hr>

This is a very important question and aims to check the knowledge of networking. A very thorough explanation of this question is answered here in [What Happens When](https://github.com/alex/what-happens-when)

</details>

<details>
<summary>
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
</summary>
<hr>

[**💻 Submit Code**](https://leetcode.com/problems/valid-parentheses/)
```C++
bool isValid(string s) {
    stack<char> st;
    for(auto c:s){
        if( c == '(' or c == '[' or c == '{' ) {
            st.push(c);
            continue;
        }
        if( !st.size() ) return false;
        if( c == ')' ) {
            if(  st.top() != '(' ) return false;
        }else if(  c == '}' ) {
            if( st.top() != '{' ) return false;
        } else if( c == ']' ) {
            if( st.top() != '[' ) return false;
        }
        st.pop();
    }
    return st.size() == 0;
}
```

</details>

<details>
<summary>
You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.
Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police
</summary>
<hr>

[**💻 Submit Code**](https://leetcode.com/problems/house-robber/)
```C++
int rob(vector<int>& nums) {
    int n = nums.size();
    int dp[n+1][2];
    memset(dp, 0, sizeof(dp));
    for(int i=1;i<=n;i++){
        // we dont rob the ith house
        dp[i][0] = max(dp[i-1][0],dp[i-1][1]);
        // we rob the ith house
        dp[i][1] = dp[i-1][0] + nums[i-1];
    }
    return max(dp[n][0],dp[n][1]);
}
```
</details>

<details>
<summary>
Input given is an int array, which may or may not contain positive, negative or zero values. Write a program to find out the two numbers which gives the highest product. 
</summary>
<hr>
https://www.geeksforgeeks.org/return-a-pair-with-maximum-product-in-array-of-integers/
</details>

<details>
<summary>
Given an array having 0 to n-1 unsorted. Return a new array having their indices 
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
Given two strings, find the number of times the second string occurs in the first string, whether continuous or discontinuous. 
</summary>
<hr>
https://www.geeksforgeeks.org/find-number-times-string-occurs-given-string/
</details>

<details>
<summary>
Given an array of positive integers. We need to make the given array a ‘Palindrome’. The only allowed operation is”merging” (of two adjacent elements). Merging two adjacent elements means replacing them with their sum. The task is to find the array of maximum length with the minimum number of merge operations required to make the given array a ‘Palindrome’. 
</summary>
<hr>
https://www.geeksforgeeks.org/find-minimum-number-of-merge-operations-to-make-an-array-palindrome/
</details>
