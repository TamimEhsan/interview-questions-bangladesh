---
description: Kite Games Studio interview questions, Kite Games Studio interview stages, Kite Games Studio interview details, Kite Games Studio interview question and answers
head:
  - - link
    - rel: canonical
      href: https://tamimehsan.github.io/interview-questions-bangladesh/companies/kite
---
# Kite Games Studio

|  | |
| :-| :- |
| Founding year | |
| Company Website | https://www.kitegamesstudio.com/ |
| Career Website | https://www.kitegamesstudio.com/ |
| Technologies Used| Swift, React, Kotline, PyTorch |

## Introduction
[Kite Games Studio (KGS)](https://www.kitegamesstudio.com/), founded in 2014, is a leading mobile application development firm in Bangladesh. Based in Mohakhali DOHS, Dhaka, KGS specializes in developing software for both iOS and Android platforms, along with building websites. The company is known for its emphasis on competitive programming skills, making it an excellent choice for talented **competitive programmers** looking to join a dynamic and innovative team.

## Interview Stages

1. **Online Contest**: Candidates participate in an online programming contest that typically consists of 5-6 problems to be solved within 3-4 hours. The contest may be hosted on platforms like Toph, Hackerrank, or other online judges. Candidates are shortlisted for the next round based on their ranking in this contest.

2. **Technical Round**: This round primarily focuses on coding problems and some basic Java concepts. The interviewers assess the candidate's problem-solving approach and how they think through the problems.

## Technical Round Questions

<article>

A permutation `P` is good if `P[i] % i == 0` or `i % P[i] == 0` for `1 ≤ i ≤ N`. Given `N ≤ 20`, count the number of good permutations. 
<details><summary>Show Answer</summary>

The final solution uses Bitmask DP to efficiently count the number of good permutations that satisfy the given condition.

```cpp
#include <iostream>
#include <vector>

using namespace std;

int N; // Global variable for the size of the permutation
vector<int> dp; // DP array to store results of subproblems

// Recursive function to count the number of good permutations using Bitmask DP
int solve(int mask) {
    if (mask == (1 << N) - 1) return 1; // Base case: all elements are placed
    if (dp[mask] != -1) return dp[mask]; // Return already computed result

    int pos = __builtin_popcount(mask) + 1; // Position to place the next element (1-based)
    dp[mask] = 0; // Initialize current DP state

    for (int i = 0; i < N; i++) {
        // Check if the i-th element is not used and it satisfies the condition
        if (!(mask & (1 << i)) && (pos % (i + 1) == 0 || (i + 1) % pos == 0)) {
            dp[mask] += solve(mask | (1 << i)); // Recur with updated mask
        }
    }
    return dp[mask];
}

int main() {
    cout << "Enter the value of N (N <= 20): ";
    cin >> N;

    dp.assign(1 << N, -1); // Initialize DP array with -1 for all masks
    int result = solve(0); // Start with an empty mask
    cout << "Number of good permutations for N = " << N << " is: " << result << endl;

    return 0;
}
```
</details>
</article>

<article>

Design a data structure to add integers and remove the most frequent element, with ties broken by recency.
<details><summary>Show Answer</summary>

Design a data structure that supports the following two operations:

1. **add(val)**: Add an integer `val` to the data structure.
2. **remove()**: Remove the most frequent element in the data structure. If there are multiple elements with the same highest frequency, print the element that was added last.

The constraints for the operations are:

* Total number of operations ≤ 10<sup>5</sup>
* 0 ≤ val ≤ 10<sup>9</sup>

**Solution:**

```cpp
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class FreqStack {
    unordered_map<int, int> freq;                    // Map to store frequency of elements
    unordered_map<int, vector<int>> group;             // Map to store groups of elements by frequency
    int maxFreq = 0;                                 // Variable to track the maximum frequency

public:
    // Function to add an integer
    void push(int x) {
        freq[x]++;                                   // Increase the frequency of the element
        maxFreq = max(maxFreq, freq[x]);             // Update the max frequency
        group[freq[x]].push_back(x);                 // Add the element to the appropriate group
    }

    // Function to remove and return the most frequent element (with ties broken by recency)
    int pop() {
        int x = group[maxFreq].back();               // Get the most recent element with the highest frequency
        group[maxFreq].pop_back();                   // Remove it from the group
        if (group[maxFreq].empty()) {                // If no more elements in the group, reduce max frequency
            maxFreq--;
        }
        freq[x]--;                                   // Decrease the frequency of the element
        return x;                                    // Return the most frequent element
    }
};

int main() {
    FreqStack fs;
    fs.push(5);
    fs.push(7);
    fs.push(5);
    fs.push(7);
    fs.push(4);
    fs.push(5);
    
    cout << fs.pop() << endl;  // Should print 5
    cout << fs.pop() << endl;  // Should print 7
    cout << fs.pop() << endl;  // Should print 5
    cout << fs.pop() << endl;  // Should print 4
    
    return 0;
}
```
</details>
</article>

<article>
 

What are the main concepts of OOP? 
<details><summary>Show Answer</summary>
 

The main concepts of Object-Oriented Programming (OOP) are:
Abstraction, Inheritance, Encapsulation, Polymorphism.
</details>
</article>
 

<article>

Implement the Singleton pattern.
<details><summary>Show Interaction</summary>

To provide better understanding, here’s how the discussion typically goes. The questions aren't directly asked; instead, they are discussed in the context of a coding problem or a concept. (I am sharing real experience of mine):

**Interviewer:** Here's a scenario: you need to create a class for database connections, and as every developer of your team needs to use the same database connection, you should only allow one instance of this class.  How would you implement this in Java?  
**Candidate:** I would include a static variable within the class, initially set to null. I'd also create a static method called "connection." This method would first check if the static variable is null. If it is, it would create a new object, assign it to the variable, and then return it. If the variable is not null, it would simply return the existing object.  
**Interviewer:** But if someone creates an object of this class, wouldn't they get a different object?  
**Candidate:** To prevent that, I would make the constructor private.  
**Interviewer:** Is this approach feasible? Would you need to do anything else?  
**Candidate:** Yes, it's feasible, and no further changes are necessary.  
**Interviewer:** The process you described has a specific name in design patterns. Do you recall what it's called?  
**Candidate:** Sorry, I don't know the name.  
**Interviewer:** It's called the Singleton pattern.
</details>

<details><summary>Show Answer</summary>

**Solution:** Below is the implementation of the Singleton pattern in Java:

::: code-group
```java [Single Threaded]
// Singleton class to manage database connections
public class DatabaseConnection {
    // Static variable to hold the single instance of the class
    private static DatabaseConnection instance = null;

    // Private constructor to prevent instantiation
    private DatabaseConnection() {
        // Initialization code, e.g., establish database connection
    }

    // Public method to provide access to the single instance
    public static DatabaseConnection getInstance() {
        // Check if instance is null, create new one if needed
        if (instance == null) {
            instance = new DatabaseConnection();
        }
        // Return the existing instance
        return instance;
    }
}
```
```go [Thread Safe]
var lock = &sync.Mutex{}

type single struct {
}

var singleInstance *single

func getInstance() *single {
    if singleInstance == nil {
        lock.Lock()
        defer lock.Unlock()
        if singleInstance == nil {
            fmt.Println("Creating single instance now.")
            singleInstance = &single{}
        } else {
            fmt.Println("Single instance already created.")
        }
    } else {
        fmt.Println("Single instance already created.")
    }

    return singleInstance
}
```
:::

> [!WARNING] 
> The given single threaded implementation of the singleton pattern though widely popular, is not thread-safe. If a multithreaded application were to get the connection, there is a chance that the connection is initialized multiple times. Ask the interviewer to make sure if they want it to be thread-safe. You can check this [wikipedia section](https://en.wikipedia.org/wiki/Double-checked_locking#Usage_in_Java) if you want to learn more.
</details>
</article>

<article>

Given a string `s` and multiple queries. Each query consists of a string `t`. Check if `t` is a subsequence of `s`.@@2025@@

[**💻 Submit Code**](https://leetcode.com/problems/is-subsequence/description/)
</article>

<article>

You are given an integer array `nums` and two integers `indexDiff` and `valueDiff`. Find a pair of indices `(i, j)` such that: `i != j`, `abs(i - j) <= indexDiff` and `abs(nums[i] - nums[j]) <= valueDiff`.@@2025@@

[**💻 Submit Code**](https://leetcode.com/problems/contains-duplicate-iii/description/)
<details><summary>Show Answer</summary>

```cpp
bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
    set<pair<int,int>> st;
    for(int i=0;i<nums.size();i++){
        if( i>indexDiff ) st.erase({nums[i-indexDiff-1],i-indexDiff-1});
        auto it = st.lower_bound({nums[i],0});
        if ( it != st.end() ) {
            if ( abs(nums[i] - it->first) <= valueDiff ) 
                return true;
        }
        if( it != st.begin() ){
            it--;
            if ( abs(nums[i] - it->first) <= valueDiff ) 
                return true;
        }
        st.insert({nums[i],i});
    }
    return false;
}
```
</details>
</article>

## Online Round Questions

<article>

You're at a buffet with various food items. Each food item has a deliciousness factor and nutrient values. You need to maximize the total deliciousness of the foods you eat. Additionally, for health reasons, each nutrient value must occur in an odd number of food items. @@2024@@

[**💻 Submit Code**](https://toph.co/c/recruitment-contest-by-kite-games-studio)
<details><summary>Show Answer</summary>

**Solution:** 

<<< @/snippets/kite/buffet.cpp
</details>
</article>

<article>

You have a 2D grid representing a village. 'X' denotes farmer-owned land, and '.' denotes government-owned land. Connected 'X' areas belong to the same farmer. If two connected 'X' areas match under any 90° rotation, they also belong to the same farmer. Count the number of unique farmers in the village. @@2024@@

[**💻 Submit Code**](https://toph.co/c/recruitment-contest-by-kite-games-studio)
<details><summary>Show Answer</summary>

**Solution:** 

<<< @/snippets/kite/farmer.cpp
</details>
</article>

<article>

You need to write a program to simulate a Linux terminal on an old computer. You'll be given commands like "mkdir", "ls", "rm", "pwd", and "cd", and you need to simulate their behavior, printing the appropriate output or error messages. @@2024@@

[**💻 Submit Code**](https://toph.co/c/recruitment-contest-by-kite-games-studio)
<details><summary>Show Answer</summary>

**Solution:** 

<<< @/snippets/kite/linux-terminal.cpp
</details>
</article>

<article>

You have a 2D grid representing a field with crop fields and godowns. Harvesters start at godowns and collect crops from fields, bringing them back to their godown. The first harvester must collect from a specific number of fields. You need to calculate the minimum total time for all harvesters to collect all crops. @@2024@@

[**💻 Submit Code**](https://toph.co/c/recruitment-contest-by-kite-games-studio)
</article>

<article>

You have a list of unique strings and an empty list. You'll be given queries to add strings to the empty list, delete strings from it, and count the number of strings between two given strings in the list after sorting it. @@2024@@

[**💻 Submit Code**](https://toph.co/c/recruitment-contest-by-kite-games-studio)
<details><summary>Show Description</summary>

You are given a list <i>L</i> of <i>N</i> unique strings and an initially empty list <i>P</i>. You need to process <i>Q</i> queries of the following types:

* **add i f:** Add the string <i>L[i]</i> to the list <i>P</i> a total of <i>f</i> times.
* **delete i f:** Let <i>t</i> be the number of occurrences of string <i>L[i]</i> in list <i>P</i>. Delete min(<i>f</i>, <i>t</i>) occurrences of <i>L[i]</i> from list <i>P</i>.
* **count i j:** Sort the elements of list <i>P</i> in lexicographic order, then count the number of strings in <i>P</i> that are between <i>L[i]</i> and <i>L[j]</i> (inclusive).

**Constraints:**

* **1 ≤ N ≤ 10<sup>5</sup>** - Number of strings in list <i>L</i>.
* The total length of all strings in <i>L</i> is at most 2 × 10<sup>6</sup>, and each string length is between 1 and 10<sup>6</sup> characters.
* **1 ≤ Q ≤ 10<sup>5</sup>** - Number of queries.
* For **add i f** and **delete i f** queries: **1 ≤ i ≤ N** and **1 ≤ f ≤ 10<sup>5</sup>**.
* For **count i j** queries: **1 ≤ i ≤ N** and **1 ≤ j ≤ N**.

</details>
<details><summary>Show Answer</summary>

**Solution:** 

<<< @/snippets/kite/copy-string.cpp
</details>
</article>

<article>

Given a number `N`, find the number of integers between `[1,N]` that has odd number of divisors. @@Jr SWE 2025@@ 

[**💻 Submit Code**](https://www.hackerrank.com/contests/jr-software-developer-recruitment-contest-may-2025/challenges/hey-this-is-the-giveaway-problem)
<details><summary>Show Answer</summary>

```cpp
long long solve(long long n) {
    long long sq = sqrtl(n);
    if( (sq+1)*(sq+1) == n ) sq++;
    return sq;
}
```
</details>
</article>

<article>

Given an array of pairs indicating the size and reward of each item. You will be given a minimum and maximum size of the bag. You need to find the maximum reward you can get by filling the bag with items. @@Jr SWE 2025@@

[**💻 Submit Code**](https://www.hackerrank.com/contests/jr-software-developer-recruitment-contest-may-2025/challenges/ripe-range.cpp)
<details><summary>Show Answer</summary>

<<< @/snippets/kite/ripe-range.cpp
</details>
</article>

<article>

Given an array `A` of size `N` and some queries. Each query will ask for `f(l,r)` where the function computes the sum of the greatest common divisors over all prefixes of some range `[l,r]`.  @@Jr SWE 2025@@

[**💻 Submit Code**](https://www.hackerrank.com/contests/jr-software-developer-recruitment-contest-may-2025/challenges/cumulative-gcd)
</article>

<article>

Given a permutation of size `N`. You will change the permutation repeatedly. In each operation, you will create a new permutation b such that `b[i] = a[a[i]]` for all `1 ≤ i ≤ n`. Then replace `a` with `b`. You need to find the number of operations required to make the permutation sorted or report that it is impossible. @@Jr SWE 2025@@

[**💻 Submit Code**](https://www.hackerrank.com/contests/jr-software-developer-recruitment-contest-may-2025/challenges/permutation-sorting-1)
</article>

<article>

Given a tree with `N` nodes. You will need to chose an optimal start node `s` such that the round trip distance from `s` to some given target nodes is minimized. @@Jr SWE 2025@@

[**💻 Submit Code**](https://www.hackerrank.com/contests/jr-software-developer-recruitment-contest-may-2025/challenges/kawchars-new-home)
<details><summary>Show Answer</summary>

<<< @/snippets/kite/new-home.cpp#snippet
</details>
</article>

<article>

Given a grid of size `N` and `M` with digit `0` and `1`. The grid indicates some patterns which are not connected. The patterns can be rotated or stretched too. You will need to find the patterns present in the grid. @@Jr SWE 2025@@

[**💻 Submit Code**](https://www.hackerrank.com/contests/jr-software-developer-recruitment-contest-may-2025/challenges/simple-digit-recognition)
</article>

