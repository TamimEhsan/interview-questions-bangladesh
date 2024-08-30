# Kite Games Studio

## Introduction
[Kite Games Studio (KGS)](https://www.kitegamesstudio.com/), founded in 2014, is a leading mobile application development firm in Bangladesh. Based in Mohakhali DOHS, Dhaka, KGS specializes in developing software for both iOS and Android platforms, along with building websites. The company is known for its emphasis on competitive programming skills, making it an excellent choice for talented **competitive programmers** looking to join a dynamic and innovative team.


## Interview Stages

1. **Online Contest**: Candidates participate in an online programming contest that typically consists of 5-6 problems to be solved within 3-4 hours. The contest may be hosted on platforms like Toph, Hackerrank, or other online judges. Candidates are shortlisted for the next round based on their ranking in this contest.

2. **Technical Round**: This round primarily focuses on coding problems and some basic Java concepts. The interviewers assess the candidate's problem-solving approach and how they think through the problems.

## Questions

<details>
<summary>
(Technical round) Problem: A permutation P is good if P[i] % i == 0 or i % P[i] == 0 for 1 ≤ i ≤ N. Given N ≤ 20, count the number of good permutations.
</summary>
<hr>

**Solution:** The final solution uses Bitmask DP to efficiently count the number of good permutations that satisfy the given condition.

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


<details>
<summary>
(Technical round) Problem: Design a data structure to add integers and remove the most frequent element, with ties broken by recency.
</summary>
<hr>

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

<details> 
<summary>(Technical round) Question: What are the main concepts of OOP? </summary> 
<hr>
Answer: The main concepts of Object-Oriented Programming (OOP) are:
Abstraction, Inheritance, Encapsulation, Polymorphism.
</details> 


<details>
<summary>
(Technical round) Problem: Implement the Singleton pattern.
</summary>
<hr>

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

**Solution:** Below is the implementation of the Singleton pattern in Java:

```java
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
</details>
