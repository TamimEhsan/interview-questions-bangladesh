---
description: Complexity analysis, sorting, searching, recursion, dynamic programming, greedy and graph algorithms, and bit manipulation.
head:
  - - link
    - rel: canonical
      href: https://tamimehsan.github.io/interview-questions-bangladesh/notes/roadmap/algorithms
---
# Algorithms

*Part of the [Interview Prep Roadmap](./). Coverage ratings are explained there.*

**Work through alongside this section**
- [NeetCode 150](https://neetcode.io/practice) — its binary search, backtracking, dynamic programming, greedy, and graph sections cover most of the topics below. Worth finishing as a whole rather than cherry-picking.
- [CP Algorithms](https://cp-algorithms.com/) — reference implementations and proofs for the graph and DP algorithms here.

## Complexity Analysis
Measuring and comparing the cost of an algorithm — the vocabulary every other topic in this phase depends on.

*Coverage: moderate*

### Asymptotic Notation
- Big-O, Big-Θ, and Big-Ω
- Best, average, and worst case
- Growth rate comparison

### Analyzing Code
- Loops and nested loops
- Recursive calls
- Recurrence relations and the Master theorem

### Trade-offs
- Time vs. space
- Amortized analysis

## Sorting & Searching
How the common sorting algorithms work and their time complexity, then binary search and its less obvious applications.

*Coverage: moderate*

### Elementary Sorting
- Bubble sort
- Selection sort
- Insertion sort

### Efficient Sorting
- Merge sort
- Quick sort and pivot selection
- Heap sort
- Worst-case behavior of each

### Non-Comparison Sorting
- Counting sort
- Radix sort
- Bucket sort
- Lower bound on comparison-based sorting

### Sorting Properties
- Stability
- In-place vs. out-of-place
- Choosing a sort for a given constraint

### Searching
- Linear search
- Binary search on a sorted array
- Binary search on an answer space
- Search in rotated arrays

## Recursion & Backtracking
Breaking a problem into itself, and backtracking when a branch doesn't work out.

*Coverage: moderate*

### Recursion Fundamentals
- Base case and recursive case
- The call stack and stack depth
- Recursion vs. iteration
- Tail recursion

### Recursive Patterns
- Divide and conquer
- Tree and graph recursion
- Subsets and permutations

### Backtracking
- State-space exploration
- Pruning invalid branches
- Classic problems: N-Queens, Sudoku, word search
- Complexity of backtracking

## Dynamic Programming
What makes a problem a DP problem — overlapping subproblems and optimal substructure — then memoization vs. tabulation.

*Coverage: moderate*

### DP Fundamentals
- Overlapping subproblems
- Optimal substructure
- Recognizing a DP problem

### Implementation Approaches
- Top-down memoization
- Bottom-up tabulation
- Space optimization

### Classic DP Patterns
- 1D DP: Fibonacci, climbing stairs, house robber
- Knapsack variants
- Subsequence problems: LCS, LIS
- Grid and path-counting problems
- Partition and subset-sum problems

## Greedy Algorithms
Making the locally optimal choice at each step, and knowing when that actually yields a globally optimal answer.

*Coverage: gap*

### Greedy Fundamentals
- Greedy-choice property
- Cases where greedy fails
- Greedy vs. dynamic programming

### Classic Greedy Problems
- Activity selection and interval scheduling
- Fractional knapsack
- Huffman coding
- Coin change

## Graph Algorithms
BFS and DFS as the foundation, then Dijkstra, Bellman-Ford, and MST — which algorithm fits which constraint, and why.

*Coverage: rich*

### Traversal
- Breadth-first search
- Depth-first search
- Visited tracking and traversal order
- Finding connected components

### Shortest Path
- BFS for unweighted graphs
- Dijkstra's algorithm
- Bellman-Ford and negative weights
- Floyd-Warshall for all pairs

### Minimum Spanning Tree
- Kruskal's algorithm
- Prim's algorithm
- Union-find (disjoint set union)

### Ordering & Structure
- Topological sort
- Cycle detection in directed and undirected graphs
- Strongly connected components

## Bit Manipulation
Basic bitwise operations and shifting, then bitmasking and common XOR tricks.

*Coverage: gap*

### Bitwise Operators
- AND, OR, NOT, XOR
- Left and right shift
- Signed vs. unsigned shifts

### Bit Tricks
- Checking, setting, clearing, and toggling a bit
- Counting set bits
- Powers of two
- XOR properties for finding unique elements

### Bitmasking
- Representing subsets as bitmasks
- Iterating over subsets
- Bitmask DP
