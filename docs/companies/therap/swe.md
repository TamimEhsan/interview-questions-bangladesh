---
description: Therap Software Engineer interview questions, Therap Software Engineer interview stages, Therap Software Engineer interview details, Therap Software Engineer interview question and answers
head:
  - - link
    - rel: canonical
      href: https://tamimehsan.github.io/interview-questions-bangladesh/companies/therap/swe
---
# Therap Software Engineer

## Interview Stages

The selection process has 3 stages,

1. **Initial screening:** This round is taken in written format
1. **1st technical round** The first round is taken by the BD team
1. **HR Round:** This is the final stage before onboarding and typically deals with salary negotiation. 

## Initial Screening Questions

<article>

Given an integer `num`, you need to return the sum all its digits in the number. @@ASWE 2025@@
</article>

<article>

Given an integer `n`, for every number `i` in the range `1 <= i <= n`, print one of the following:

- `"FizzBuzz"` if i is divisible by 3 and 5.
- `"Fizz"` if i is divisible by 3.
- `"Buzz"` if i is divisible by 5.
- `i` if none of the above conditions are true. @@ASWE 2025@@

[**💻 Submit Code**](https://leetcode.com/problems/fizz-buzz/)

</article>

<article>

Given an integer array `nums`. All the integers of `nums` are sorted in ascending order except for one element. Find the index of the element. @@ASWE 2025@@
</article>

## Software Engineering Questions

<article>

Given an array of numbers indicating stock price of n consecutive days. If you buy stock at one day and sell at any later day what is the maximum profit that you can get?

[**💻 Submit Code**](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)
<details><summary>Show Answer</summary>

```C++
int maxProfit(vector<int>& prices) {
    int buy = prices[0];
    int profit = 0;
    for(int i=1;i<prices.size();i++){
        if( prices[i]-buy > profit ) profit = prices[i] - buy;
        if( prices[i] < buy ) buy = prices[i];
    }
    return profit;
}
```

</details>
</article>

<article>

Given an array of n integers. You need to take all zeroes in array to the end without changing the relative order of remaining element.
eg: `[2,0,0,3,1,0,5]` => `[2,3,1,5,0,0,0]`

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

<article>

Given an array of n integers. Reorder the elements such that all odd numbers occur after even numbers.
</article>

<article>

Given an array of strings. Print the sets of strings which are anagram.
eg: ["cat","tab","act","bat","taco"] => [{"cat","act"},{"tab","bat"},{"taco"}] 

[**💻 Submit Code**](https://leetcode.com/problems/group-anagrams/)
<details><summary>Show Answer</summary>

```C++
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    map<string,int> index;
    vector<vector<string>> vs;
    for(auto str:strs){
        string str2 = str;
        if( str2.size()>1 ) sort(str2.begin(),str2.end());
        if( index.find(str2) == index.end() ){
            vs.push_back(vector<string>());
            index[str2] = vs.size()-1;
        }
        vs[ index[str2] ].push_back(str);
    }
    return vs;
}
```

</details>
</article>

<article>

Given an array of n integers. Find the kth largest element in the array.

[**💻 Submit Code**](https://leetcode.com/problems/kth-largest-element-in-an-array/)
<details><summary>Show Answer</summary>

```C++
int findKthLargest(vector<int>& nums, int k) {
    partial_sort(nums.begin(), nums.begin() + k, nums.end(), greater<int>());
    return nums[k-1];
}
```

</details>
</article>

<article>

Given two very large number in string format. Find the sum of the two number
<details><summary>Show Answer</summary>

```C++
string sum(string &A, string &B){
    reverse(A.begin(),A.end());
    reverse(B.begin(),B.end());
    string sum;
    int c = 0;
    int i=0,j=0;
    while(true){
        int a=0,b=0;
        if( i<A.size() ) a = A[i++]-'0';
        if( j<B.size() ) b = B[j++]-'0';

        int s = (a+b+c)%10;
        c = (a+b+c)/10;
        sum.push_back(s+'0');
        if( i>=A.size() and j>=B.size() and c == 0 ) break;
    }
    reverse(sum.begin(),sum.end());
    return sum;
}
```

</details>
</article>

<article>

Given two binary tree. Check if they are identical [not isomorphism]

[**💻 Submit Code**](https://leetcode.com/problems/same-tree/)
<details><summary>Show Answer</summary>

::: code-group

```C++ [Normal Solution]
bool isSameTree(TreeNode* p, TreeNode* q) {
    if( p == nullptr and q != nullptr ) return false;
    if( p != nullptr and q == nullptr ) return false;
    if( p == nullptr and q == nullptr ) return true;

    if( p->val != q->val ) return false;

    return isSameTree(p->left,q->left) &&
            isSameTree(p->right,q->right);
}
```

```go [Weird Solution]
// ref: https://go.dev/tour/concurrency/7
package main

import (
	"fmt"

	"golang.org/x/tour/tree"
)

// Walk walks the tree t sending all values
// from the tree to the channel ch.
func WalkRecursive(t *tree.Tree, ch chan int) {
	if t.Left != nil {
		WalkRecursive(t.Left, ch)
	}
	ch <- t.Value
	if t.Right != nil {
		WalkRecursive(t.Right, ch)
	}
}

func Walk(t *tree.Tree, ch chan int) {
    WalkRecursive(t, ch)
    close(ch)
}

// Same determines whether the trees
// t1 and t2 contain the same values.
func Same(t1, t2 *tree.Tree) bool {
	ch1 := make(chan int)
	ch2 := make(chan int)
	go Walk(t1, ch1)
	go Walk(t2, ch2)
	for {
		x, ok1 := <-ch1
		y, ok2 := <-ch2

		if ok1 != ok2 || x != y {
			return false
		}
		if !ok1 {
			break
		}
	}
	return true
}

func main() {
	fmt.Println(Same(tree.New(1), tree.New(2)))
}
```

:::

</details>
</article>

<article>

Given two array of integers. Find the common elements between them.

Unique : [**💻 Submit Code**](https://leetcode.com/problems/intersection-of-two-arrays/) Repeats: [**💻 Submit Code**](https://leetcode.com/problems/intersection-of-two-arrays-ii/)
<details><summary>Show Answer</summary>

::: code-group

```C++ [Return uniques]
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    set<int> st;
    for(auto num:nums1) st.insert(num);
    set<int> res;
    for(auto num:nums2) if( st.count(num) == 1 ) res.insert(num);
    vector<int> ret;
    for(auto num:res) ret.push_back(num);
    return ret;
}
```

```C++ [With repeatation]
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());

    vector<int> merged;
    int i=0,j=0;
    while(i<nums1.size() and j<nums2.size()){
        if( nums1[i] == nums2[j] ){
            merged.push_back(nums1[i]);
            i++;j++;
        }else if( nums1[i]<nums2[j] ) i++;
        else j++;
    }
    return merged;
}
```

:::

</details>
</article>

<article>

Find pairs with given target sum in a doubly linked list. 
```
Input: 
1 <> 2 <> 4 <> 5 <> 6 <> 8 <> 9
target = 7
Output: 
(1,6), (2,5)
```

[**💻 Submit Code**](https://www.geeksforgeeks.org/problems/find-pairs-with-given-sum-in-doubly-linked-list/1)
<details><summary>Show Answer</summary>

```C++
class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        vector<pair<int,int>> ans;
        
        Node* left = head;
        
        /// traverse to the end of the list
        while(head!= nullptr && head->next!=nullptr){
            head = head->next;
        }
        Node* right = head;
        
        while(left!= right && left->prev != right){
            if(left->data + right->data == target){
                ans.push_back(make_pair(left->data, right->data));
                left = left->next;
                right = right->prev;
            }
            else if(left->data + right->data > target){
                right = right->prev;
            }else{
                left = left->next;
            }
        }
        
        return ans;    
        
    }
};
```
</details>
</article>

<article>

Solve the problem using Object Oriented Programming

``` C++
int main(){
    int square1width = 50;
    int square2width = 80;
    int rectangle1width = 30, rectangle1height = 40;
    int rectangle2width = 20, rectangle2height = 40;

    int square1area = square1width* square1width;
    int square2area = square2width* square2width;
    int rectangle1area = rectangle1height*rectangle1width;
    int rectangle2area = rectangle2width* rectangle2height;
}
```
<details><summary>Show Answer</summary>

``` C++
#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    virtual int area() const = 0;  // Pure virtual function for area
};

class Square : public Shape {
private:
    int width;
public:
    Square(int w) : width(w) {}  // Constructor to initialize width

    int area() const override {
        return width * width;  // Area of square
    }
};

class Rectangle : public Shape {
private:
    int width;
    int height;
public:
    Rectangle(int w, int h) : width(w), height(h) {}  // Constructor to initialize width and height

    int area() const override {
        return width * height;  // Area of rectangle
    }
};

int main() {
    
    Square square1(50);
    Square square2(80);
    Rectangle rectangle1(30, 40);
    Rectangle rectangle2(20, 40);

    cout << "Square 1 area: " << square1.area() << endl;
    cout << "Square 2 area: " << square2.area() << endl;
    cout << "Rectangle 1 area: " << rectangle1.area() << endl;
    cout << "Rectangle 2 area: " << rectangle2.area() << endl;
    return 0;
}

```
</details>
</article>

<article>

Given an array of sides of triangles, return an array of strings. The strings would be either “yes” or “no”, corresponding to whether the same indexed triangle is a right triangle or not.

Input: `[[3,4,5], [5,9,12], [6,8,10]]`
Output: `["yes","no","yes"]`
<details><summary>Show Answer</summary>

```python
def areRightTriangles(triangles):
    res = []
    
    for sides in triangles:
        sides.sort()
        a,b,c = sides
        if a**2 + b**2 == c**2:
            res.append(True)
        else:
            res.append(False)
    
    return res
```

</details>
</article>

<article>

A dictionary of sorted words was like this: [a, above, bad, broke, cat,..., yes, yolk, zoo]. After a malfunction it became this: [..., yes, yolk, zoo, a, above, bad, broke, cat,....]. Write a program so that given a word, one can find the word in the dictionary, with the same time complexity as when the dictionary was sorted.

[**💻 Submit Code**](https://leetcode.com/problems/search-in-rotated-sorted-array/description/)
<details><summary>Show Answer</summary>

```python
def search(words, target):
        l, r = 0, len(words) - 1

        while l <= r:
            m = (l + r) // 2
            if words[m] == target:
                return m
            
            if words[l] <= words[m]:
                if target < words[l] or target > words[m]:
                    l = m + 1
                else :
                    r = m - 1
            
            else:
                if target > words[r] or target < words[m] :
                    r = m - 1
                else :
                    l = m + 1

        return -1
```

</details>
</article>

<article>

Given two strings s1, s2, return whether a substring of s1 is an anagram of s2

Input: `s1 = "hello", s2 = "lol"` Output: `True`\
Input: `s1 = "hello", s2 = "loa"` Output: `False`

<details><summary>Show Answer</summary>

    
```python
def containsAnagram(s1, s2):
    ara1 = [0]*26
    ara2 = [0]*26

    for i in range(len(s2)):
        ara1[ord(s1[i])-ord(('a'))] += 1
        ara2[ord(s2[i])-ord(('a'))] += 1

    l, r = 0, len(s2)
    while r < len(s1):
        if ara1 == ara2:
            return True
        ara1[ord(s1[l])-ord(('a'))] -= 1
        ara1[ord(s1[r])-ord(('a'))] += 1
        l += 1
        r += 1

    return ara1 == ara2
```
</details>
</article>

<article>

Given two large numbers as strings, num1 and num2 with num1 larger than num2, return their difference in string format, using no direct string to int conversion or libraries.
<details><summary>Show Answer</summary>

```python
def subtract(num1, num2):
    num1, num2 = num1[::-1], num2[::-1]   
    res = ""
    carry = 0

    for i in range(len(num1)):
        digit1 = int(num1[i])
        digit2 = int(num2[i]) if i < len(num2) else 0
        diff = digit1 - digit2 - carry

        if diff < 0:
            diff += 10
            carry = 1

        else:
            carry = 0

        res += str(diff)

    # Remove leading zeros
    res = res.rstrip("0")

    return res[::-1]
```
</details>
</article>

<article>

Given an array containing 0,1,2 sort it.

Input: `[2,0,1,1,0,2]` Output: `[0,0,1,1,2,2]`
<details><summary>Show Answer</summary>

```python
def bring2Front(ara,start,target):
    target_index = start
    for i in range(start,len(ara)):
        ara[i],ara[target_index] = ara[target_index],ara[i]
        if ara[target_index] == target:
            target_index += 1
    return target_index

def sortNums(ara):
    target_index = bring2Front(ara,0,0)
    bring2Front(ara,target_index,1)
    return ara
```
</details>
</article>

<article>

Using no loops, print this pattern for a given number n: 

`n, n-5, n-10,....0,....,n-10,n-5,n`.
Example: `7, 2, -3, 2, 7`

<details><summary>Show Answer</summary>

```python
def recursiveAdd(ara, n):
    ara.append(n)
    if n > 0:
        recursiveAdd(ara, n-5)
        ara.append(n)

def solution(n):
    ara = []
    recursiveAdd(ara, n)
    return ara
```

</details>
</article>

<article>

Design this legacy table for using in a relational database.

| ID 	| Name  	| Email           	| Subject 	| Courses                              	|
|----	|-------	|-----------------	|---------	|--------------------------------------	|
| 1  	| Rahim 	| rahim@gmail.com 	| CSE     	| CSE101, CSE102, EEE101, CIVIL104     	|
| 2  	| karim 	| karim@gmail.com 	| EEE     	| EEE101, EEE102, CSE102, CIVIL104     	|
| 3  	| Josim 	| josim@gmail.com 	| BME     	| EEE101, CSE101, BME101               	|
| 4  	| Belal 	| belal@gmail.com 	| CIVIL   	| CIVIL101, CIVIL102, MECHA101, EEE101 	|
| 5  	| Rakib 	| rakib@gmail.com 	| MECHA   	| CSE101, BME101, MECHA101, MECHA101   	|
</article>

## April 2026

<article>

You are given a list of orders, where each order takes a certain amount of time to process (e.g., brewing a coffee). There are `k` identical machines available to process these orders. Orders are processed on a first-come, first-served basis, and each order must be assigned to exactly one machine. Orders will be placed sequentially. Find the total time required to complete all orders.

```
Input: k = 2, orders = [3,2,5,4]
Output: 7
```

<details><summary>Show Answer</summary>

```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int getMinTime(int k, vector<int> &orders) {
    // Min-heap to keep track of the earliest available machine
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int curr : orders) {
      if (!pq.empty() || pq.size() < k) {
        // If there are still empty machines, just push the task time
        pq.push(curr);
      } else {
        // If pq.size() == k, get the earliest available machine
        int x = pq.top();
        pq.pop();
        // Add the current task time to that machine and push back
        pq.push(x + curr);
      }
    }

    // At the end, return the max element in the pq while pq is not empty
    int max_time = 0;
    while (!pq.empty()) {
      max_time =
          pq.top(); // Since it's a min-heap, the last element popped is the max
      pq.pop();
    }

    return max_time;
  }
};
```

</details>
</article>

<article>

Given an encoded string, return its decoded string.

The encoding rule is: `k[encoded_string]`, where the `encoded_string` inside the square brackets is being repeated exactly `k` times. Note that `k` is guaranteed to be a positive integer. There can be nested encoding. You may assume that the input string is always valid; digits are only used as repeat numbers.

```
Input: s = "3[a2[bc]]"
Output: "abcbcabcbcabcbc"
```

[**💻 Submit Code**](https://leetcode.com/problems/decode-string/description/?envType=problem-list-v2&envId=recursion)
<details><summary>Show Answer</summary>

```cpp
class Solution {
public:
  string decodeString(string s) {
    stack<char> st;

    for (int i = 0; i < s.size(); i++) {
      if (s[i] == ']') {
        string substr = "";
        while (st.top() != '[') {
          substr += st.top();
          st.pop();
        }
        st.pop();

        reverse(substr.begin(), substr.end());
        string num = "";

        while (!st.empty() && isdigit(st.top())) {
          num += st.top();
          st.pop();
        }
        reverse(num.begin(), num.end());
        int n = stoi(num);

        string temp = substr;
        for (int j = 1; j < n; j++) {
          substr += temp;
        }

        for (int j = 0; j < substr.size(); j++) {
          st.push(substr[j]);
        }

      } else {
        st.push(s[i]);
      }
    }

    string ans = "";
    while (!st.empty()) {
      ans += st.top();
      st.pop();
    }

    reverse(ans.begin(), ans.end());
    return ans;
  }
};
```

</details>
</article>

<article>

Given two strings `s` and `t`, return the shortest substring of `s` such that every character in `t`, including duplicates, is present in the substring. If such a substring does not exist, return an empty string `""`.

```
Input: s = "OUZODYXAZV", t = "XYZ"
Output: "YXAZ"
```

[**💻 Submit Code**](https://neetcode.io/problems/minimum-window-with-characters/question?list=neetcode150)
<details><summary>Show Answer</summary>

```cpp
class Solution {
public:
  string minWindow(string s, string t) {
    map<char, int> pattern, mp;

    for (auto &x : t)
      pattern[x]++;

    int i = 0, j = 0, cnt = 0, n = t.size();
    string ans = "";

    while (i < s.size()) {
      mp[s[i]]++;

      if (mp[s[i]] <= pattern[s[i]])
        cnt++;

      while (j <= i && mp[s[j]] > pattern[s[j]]) {
        mp[s[j]]--;
        j++;
      }

      if (cnt == n && (ans.empty() || i - j + 1 < ans.length()))
        ans = s.substr(j, i - j + 1);

      i++;
    }

    return ans;
  }
};
```

</details>
</article>

<article>

Given an integer array `nums`, return the number of triplets chosen from the array that can make triangles if we take them as side lengths of a triangle.

```
Input: nums = [2,2,3,4]
Output: 3
```

[**💻 Submit Code**](https://leetcode.com/problems/valid-triangle-number/description/)
<details><summary>Show Answer</summary>

```cpp
class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 0;
        for (int i = nums.size() - 1; i >= 2; i--) {
            int l = 0, r = i - 1;
            while (l < r) {
                if (nums[l] + nums[r] > nums[i]) {
                    count += r - l;
                    r--;
                } else {
                    l++;
                }
            }
        }
        return count;
    }
};
```

</details>
</article>

<article>

You are given a singly linked list. Traverse the list and reverse every block of 3 consecutive nodes. If the number of nodes is not a multiple of 3, the remaining nodes at the end should be left as is.

```
Input:  a > b > c > d > e > f > g > h
Output: c > b > a > f > e > d > g > h
```

[**💻 Submit Code**](https://leetcode.com/problems/reverse-nodes-in-k-group/)
<details><summary>Show Answer</summary>

```cpp
ListNode* reverseKGroup(ListNode* head, int k) {
    ListNode* curr = head;
    int count = 0;
    while (curr && count < k) {
        curr = curr->next;
        count++;
    }
    if (count < k) return head;

    curr = head;
    ListNode* prev = nullptr;
    for (int i = 0; i < k; i++) {
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head->next = reverseKGroup(curr, k);
    return prev;
}
```

</details>
</article>

<article>

Given a database table, normalize it. Show the primary key, foreign key, and the relationships among the tables.

| code | bus_name | type    | from  | to         | departure | arrival | days          |
|------|----------|---------|-------|------------|-----------|---------|---------------|
| 101  | Khanika  | express | dhaka | rajshahi   | 9 am      | 9 pm    | sat, mon, thu |
| 102  | Taranga  | local   | dhaka | khulna     | 10 pm     | 11 am   | everyday      |
| 103  | Ulka     | express | dhaka | chittagong | 10 pm     | 11 am   | sat, sun      |
</article>

<article>

Given an integer `n`, find the first `n` rows of Pascal's triangle.

```
Input: n = 4
Output: [[1], [1,1], [1,2,1], [1,3,3,1]]
```

[**💻 Submit Code**](https://leetcode.com/problems/pascals-triangle/)
<details><summary>Show Answer</summary>

```cpp
vector<vector<int>> generate(int numRows) {
    vector<vector<int>> result;
    for (int i = 0; i < numRows; i++) {
        vector<int> row(i + 1, 1);
        for (int j = 1; j < i; j++) {
            row[j] = result[i-1][j-1] + result[i-1][j];
        }
        result.push_back(row);
    }
    return result;
}
```

</details>
</article>

<article>

An alien's warship has a large amount of fuel and needs to distribute it across multiple vessels. As the amount is very large, the fuel amount is given in string format and a divisor is given. Output the quotient.

```
Input:  total amount = "44444444444666666667777777777", divisor = 2
Output: quotient = "22222222222333333333888888888"
```

[**💻 Submit Code**](https://www.geeksforgeeks.org/dsa/divide-large-number-represented-string/)
<details><summary>Show Answer</summary>

```cpp
string divideString(string dividend, int divisor) {
    string result = "";
    long long current = 0;
    for (char c : dividend) {
        current = current * 10 + (c - '0');
        result += to_string(current / divisor);
        current %= divisor;
    }
    size_t start = result.find_first_not_of('0');
    return start == string::npos ? "0" : result.substr(start);
}
```

</details>
</article>

<article>

Given a list of software versions in chronological order and a current version, output the following.

```
Input:
versions = ["1.0", "1.5", "2.0"]
current_version = "1.0"

Output:
{
  "isLatest": false,
  "latestVersion": "2.0",
  "versionBehind": 2
}
```
<details><summary>Show Answer</summary>

```cpp
tuple<bool, string, int> checkVersion(const vector<string>& versions, const string& current_version) {
    if (versions.empty()) {
        return {false, "", -1};
    }

    string latest = versions.back();
    auto it = find(versions.begin(), versions.end(), current_version);
    if (it == versions.end()) {
        return {false, latest, -1};
    }

    bool isLatest = current_version == latest;
    int idx = static_cast<int>(distance(versions.begin(), it));
    int versionBehind = static_cast<int>(versions.size()) - 1 - idx;
    return {isLatest, latest, versionBehind};
}
```

</details>
</article>

<article>

Design an object-oriented programming solution for a parking management system. The system should model `ParkingLot`, `ParkingSpace`, and `Ticket`, and support different types of vehicles using a `Vehicle` superclass with subclasses such as `Car` and `Motorbike`.
<details><summary>Show Answer</summary>

```java
abstract class Vehicle {
    protected String licensePlate;
    public Vehicle(String licensePlate) {
        this.licensePlate = licensePlate;
    }
    public String getLicensePlate() { return licensePlate; }
}

class Car extends Vehicle {
    public Car(String licensePlate) { super(licensePlate); }
}

class Motorbike extends Vehicle {
    public Motorbike(String licensePlate) { super(licensePlate); }
}

class Ticket {
    private Vehicle vehicle;
    private ParkingSpace space;
    private long entryTime;

    public Ticket(Vehicle vehicle, ParkingSpace space) {
        this.vehicle = vehicle;
        this.space = space;
        this.entryTime = System.currentTimeMillis();
    }
    public Vehicle getVehicle() { return vehicle; }
    public ParkingSpace getSpace() { return space; }
}

class ParkingSpace {
    private int id;
    private boolean isOccupied;

    public ParkingSpace(int id) {
        this.id = id;
        this.isOccupied = false;
    }
    public boolean isAvailable() { return !isOccupied; }
    public void occupy() { isOccupied = true; }
    public void vacate() { isOccupied = false; }
    public int getId() { return id; }
}

class ParkingLot {
    private List<ParkingSpace> spaces;

    public ParkingLot(int totalSpaces) {
        spaces = new ArrayList<>();
        for (int i = 1; i <= totalSpaces; i++) {
            spaces.add(new ParkingSpace(i));
        }
    }

    public Ticket park(Vehicle vehicle) {
        for (ParkingSpace space : spaces) {
            if (space.isAvailable()) {
                space.occupy();
                return new Ticket(vehicle, space);
            }
        }
        return null; // No space available
    }

    public void leave(Ticket ticket) {
        ticket.getSpace().vacate();
    }
}
```

</details>
</article>

<article>

Write about a project you have implemented. Discuss the use of AI, the challenges faced, and how you overcame those challenges.
</article>

