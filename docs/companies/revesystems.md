---
description: REVE Systems interview questions, REVE Systems interview stages, REVE Systems interview details, REVE Systems interview questions and answers
head:
  - - link
    - rel: canonical
      href: https://tamimehsan.github.io/interview-questions-bangladesh/companies/revesystems
---
# REVE Systems

|  | |
| :-| :- |
| Founding year | 2003 |
| Company Website | https://www.revesoft.com/ |
| Career Website | https://www.revesoft.com/ |
| Technologies Used| Java, Kotlin, Swift |

## Introduction
[REVE Systems](https://www.revesoft.com/) specializes in delivering VoIP (Voice over IP) software solutions, with a focus on mobile VoIP, softswitch, and billing solutions. They have different departments such as Research & Development (R&D), E-Gov, Reve Chat, etc. In this article, the recruitment process for the R&D department for the DEV roles (Junior Software Engineer) is presented. They perform campus recruitment. At first, all the CVs from the participants (final year undergrad students who were to graduate soon) were collected. Then, an online MCQ-based exam was carried out, followed by two online technical rounds. At last, an onsite CTO round was performed.

## Interview Stages
1. **Online Screening Test**: This round is conducted via Zoom. All the participants are required to keep their microphones and cameras on during the MCQ exam via Google form. Questions were      given from the following areas:<br>
       1. Basic problem solving<br>
       2. Data structure and algorithms<br>
       3. Time Complexity<br>
       4. Finding error in code snippets<br>
       5. Finding the output of code blocks<br>
       6. Object-oriented programming<br>
       7. SQL<br>
       8. Computer networking<br>
       9. Software engineering and design patterns
2. **Technical Round I**: Two interviewers conducted this round via Skype. During the whole exam, the camera and microphone have to be on. At the beginning of the exam, a Google Doc was           shared for writing the code or any answers. Candidates are not allowed to use a pen or paper. Only the shared doc has to be used. In this round, they asked about me and told me to tell       them about any of my recent projects. Questions were asked on topics such as Linked list, BFS, DF, Fibonacci Series, String manipulation, a few basic OOP concepts, and REST APIs.
3. **Technical Round II**: This round is also conducted via Skype, and to interviewers (project managers) were there. They asked in-depth questions on object-oriented programming. Other           topics included - Java socket programming, computer networking, focusing on TCP and UDP protocols, software engineering and design patterns, SOLID principles, string matching algorithms      (Naive, KMP).
4. **CTO Round**: This was an onsite round where the CTO and head of the Mobile app department were present. They gave pen and paper to write the answers to their questions and asked many        questions where I struggled in the previous rounds.

## Technical Round I Questions
<article>
	
Reverse a given singly linked list.
  
[**💻 Submit Code**](https://leetcode.com/problems/reverse-linked-list/description/)

At first, I used extra memory for storing the reversed array.

<details><summary>Show Answer</summary>

```cpp
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;
        
        int i;
        vector<int> v;
        ListNode* cur = head;
        while (cur != NULL) {
            v.push_back(cur->val);
            cur = cur->next;
        }
        
        i = v.size()-1;
        cur = head;
        while (head != NULL) {
            head->val = v[i];
            i--;
            head = head->next;
        }
        return cur;
    }
};
```
</details>

They told me not to use extra memory. So, I performed an in-place reversal of the linked list.

<details><summary>Show Answer</summary>

```cpp
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;
        
        ListNode* prev = NULL;
        while (head != NULL) {
            ListNode* tmp = head->next;
            head->next = prev;
            prev = head;
            head = tmp;
        }
        return prev;
    }
};
```
</details>

</article>

<article>
  
Given a sequence `1`, `1`, `2`, `3`, `5`, `8`, `13`, `21`..., where the indices start at `1`. For any given index, find the value of the sequence. For example, when the input is `3`, the output is `2`, and when the input is `6`, the output is `8`.
  
[**💻 Submit Code**](https://leetcode.com/problems/fibonacci-number/description/)

At first, I used an array for storing the calculated results of the intermediate steps and built the array going forward.

<details><summary>Show Answer</summary>

```cpp
int fib(int n){
  	int arr[n + 1];
  	arr[1] = 1;
  	arr[2] = 1;
  
  	int i;
  	for (i = 3; i <= n; i++) {
          arr[i] = arr[i-1] + arr[i-2];
  	}
  	return arr[n];
 }
```
</details>

As I used an array to store the intermediate results, extra memory usage was involved. They told me not to use an array. Then I used three variables and performed swapping values as needed.

<details><summary>Show Answer</summary>

```cpp
int fib(int n){
  	int a, b, c = 1;
  	a = 1;
  	b = 1;
  
  	int i;
  	for (i = 3; i <= n; i++) {
          c =  a + b; 
          a = b; 
          b = c; 
  	}
	return c;
 }
```
</details>

They asked me to solve this problem using recursion. When implementing the recursion-based one, I first implemented the unoptimized version and later used an array for storing the intermediate values. After that, they asked me about the time and space complexities of the different approaches.

<details><summary>Show Answer</summary>

```cpp
 int fib(int n){
	if (n == 1)
            return 1;
	else if (n == 2)
            return 1;
	else
	    return (fib(n-1) + fib(n-2));
 }
```
</details>

</article>

<article>
	
Given a weighted binary tree, you have to find whether a target sum can be achieved by traversing from the root to the leaf and summing the values on the intermediate nodes.
  
[**💻 Submit Code**](https://leetcode.com/problems/path-sum/description/)

I described how this problem can be solved using BFS and provided the solution.

<details><summary>Show Answer</summary>

```cpp
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == NULL)
            return false;
        else if (root->left == NULL && root->right == NULL)
            return (root->val == targetSum);

        queue<TreeNode*> q;
        bool found = false;
        q.push(root);
        
        while (!q.empty()) {
            TreeNode* cur = q.front();
            q.pop();
            
            if (cur->left == NULL && cur->right == NULL) {
                if (cur->val == targetSum) {
                    found = true;
                    break;
                }
            }
            
            if (cur->left != NULL) {
                cur->left->val = cur->val + cur->left->val;
                q.push(cur->left);
            }
            
            if (cur->right != NULL) {
                cur->right->val = cur->val + cur->right->val;
                q.push(cur->right);
            }
        }
        return found;
    }
};
```
</details>

</article>

<article>
	
Why are getters and setters used in Java?

</article>

<article>
	
Describe the Singleton design pattern and write the code in Java.

</article>

<article>
	
What are REST APIs? Tell about the HTTP verbs and the differences between PUT and POST in REST API.

</article>

<article>
	
Given a large input string without `\n` present. Output the string of sentences where we will input the max letter count in a line. output the modified string, so if line breaks occur in the middle of a word, place it after a newline.

Input: ``(“reve systems is a software company”, 11)``

Output:<br>
reve<br>
systems is<br>
a software<br>
company<br>


</article>

## Technical Round II Questions

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

