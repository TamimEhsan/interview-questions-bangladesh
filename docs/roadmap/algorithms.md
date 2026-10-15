---
description: Complexity analysis, sorting, searching, recursion, dynamic programming, greedy and graph algorithms, and bit manipulation.
head:
  - - link
    - rel: canonical
      href: https://tamimehsan.github.io/interview-questions-bangladesh/roadmap/algorithms
---
# Algorithms

*Part of the [Interview Prep Roadmap](./). Coverage ratings are explained there.*

**Work through alongside this section**
- [NeetCode 150](https://neetcode.io/practice) — its binary search, backtracking, dynamic programming, greedy, and graph sections cover most of the topics below. Worth finishing as a whole rather than cherry-picking.
- [CP Algorithms](https://cp-algorithms.com/) — reference implementations and proofs for the graph and DP algorithms here.

## Complexity Analysis
Measuring and comparing the cost of an algorithm — the vocabulary every other topic in this phase depends on.

*Coverage: moderate*

**Resources** · [Big-O Cheat Sheet](https://www.bigocheatsheet.com/) — complexities of every common structure and algorithm in one table

### Asymptotic Notation
- Big-O, Big-Θ, and Big-Ω
- Best, average, and worst case
- Growth rate comparison

**Practice**
- [Why a print statement is O(1)](/companies/welldev#q-algo-print-complexity) — WellDev, with answer
- [Which sort is least efficient in the worst case](/companies/bs23#q-algo-worst-case-sort) — Brain Station 23

### Analyzing Code
- Loops and nested loops
- Recursive calls
- Recurrence relations and the Master theorem

**Practice**
- [Complexity of a recursive function](/companies/welldev#q-algo-recursive-complexity) — WellDev, with answer
- [Work out the complexity of given code](/companies/bs23#q-algo-code-complexity) — Brain Station 23
- [Solve T(n) = 2T(√n) + 1](/companies/bs23#q-algo-recurrence-relation) — Brain Station 23

### Trade-offs
- Time vs. space
- Amortized analysis

**Practice**
- [Amortized analysis in dynamic structures](/companies/wub#q-algo-amortized-analysis) — World University
- [Five elements searched a million times](/companies/srbd#q-algo-search-tradeoff) — SRBD, with answer
- [Pick a structure for a given operation mix](/companies/chaldal#q-algo-structure-tradeoff) — Chaldal

## Sorting & Searching
How the common sorting algorithms work and their time complexity, then binary search and its less obvious applications.

*Coverage: moderate*

**Resources** · [VisuAlgo — sorting](https://visualgo.net/en/sorting) — watch each algorithm run step by step · [NeetCode — Binary Search](https://neetcode.io/practice)

### Elementary Sorting
- Bubble sort
- Selection sort
- Insertion sort

**Practice**
- [How insertion sort works](/companies/welldev#q-algo-insertion-sort) — WellDev
- [Selection sort vs. insertion sort](/companies/welldev#q-algo-selection-vs-insertion) — WellDev

### Efficient Sorting
- Merge sort
- Quick sort and pivot selection
- Heap sort
- Worst-case behavior of each

**Practice**
- [Implement merge sort](/companies/rokomari#q-algo-merge-sort) — Rokomari, with answer
- [Which sort is best on average](/companies/exabyting#q-algo-best-average-sort) — Exabyting, with answer
- [Heaps, heap sort and its runtime](/companies/spectrum#q-algo-heap-sort) — Spectrum

### Non-Comparison Sorting
- Counting sort
- Radix sort
- Bucket sort
- Lower bound on comparison-based sorting

**Practice**
- [Sorting 1000 mixed-sign numbers](/companies/exabyting#q-algo-sort-choice-range) — Exabyting, with answer
- [Sort an array of 0s, 1s and 2s](/companies/therap/swe#q-algo-sort-012) — Therap, with answer

### Sorting Properties
- Stability
- In-place vs. out-of-place
- Choosing a sort for a given constraint

**Practice**
- [Which sort degrades worst in the worst case](/companies/bs23#q-algo-worst-case-sort) — Brain Station 23
- [Sort only the odd elements in place](/companies/welldev#q-algo-sort-odd-elements) — WellDev

### Searching
- Linear search
- Binary search on a sorted array
- Binary search on an answer space
- Search in rotated arrays

**Practice**
- [Explain binary search](/companies/iubat#q-algo-binary-search) — IUBAT
- [Square root by binary search](/companies/bs23#q-algo-sqrt-binary-search) — Brain Station 23
- [Search a row-sorted 2D matrix](/companies/wsd#q-algo-search-2d-matrix) — WSD
- [Search a nearly sorted array](/companies/therap/swe#q-algo-search-rotated) — Therap
- [When the search key is always at the front](/companies/srbd#q-algo-search-followup) — SRBD, with answer
- [Searching 5000 keys of 500 digits each](/companies/srbd#q-algo-search-large-keys) — SRBD, with answer

## Recursion & Backtracking
Breaking a problem into itself, and backtracking when a branch doesn't work out.

*Coverage: moderate*

**Resources** · [NeetCode — Backtracking](https://neetcode.io/practice)

### Recursion Fundamentals
- Base case and recursive case
- The call stack and stack depth
- Recursion vs. iteration
- Tail recursion

**Practice**
- [Factorial of n](/companies/bs23#q-algo-factorial) — Brain Station 23, with answer
- [Nth Fibonacci number](/companies/enosis#q-algo-fibonacci) — Enosis
- [Sum of even Fibonacci terms](/companies/chaldal#q-algo-even-fibonacci) — Chaldal, with answer
- [A basic recursive implementation](/companies/welldev#q-algo-basic-recursion) — WellDev

### Recursive Patterns
- Divide and conquer
- Tree and graph recursion
- Subsets and permutations

**Practice**
- [Preorder traversal, recursive and iterative](/companies/shanghaibdcom#q-algo-preorder-recursive-iterative) — Shanghai BD
- [Build a recursive partitioner](/companies/fringecore#q-algo-recursive-partitioner) — Fringecore, with answer

### Backtracking
- State-space exploration
- Pruning invalid branches
- Classic problems: N-Queens, Sudoku, word search
- Complexity of backtracking

**Practice**
- [Generate all permutations](/companies/chaldal#q-algo-permutations) — Chaldal, with answer
- [Generate all subsets](/companies/chaldal#q-algo-subsets) — Chaldal, with answer
- [Find every subset of a set](/companies/chaldal#q-algo-all-subsets) — Chaldal, with answer
- [Count "good" permutations](/companies/kite#q-algo-good-permutations) — Kite Games, with answer

## Dynamic Programming
What makes a problem a DP problem — overlapping subproblems and optimal substructure — then memoization vs. tabulation.

*Coverage: moderate*

**Resources** · [NeetCode — 1-D and 2-D DP](https://neetcode.io/practice) · [CP Algorithms — DP](https://cp-algorithms.com/)

### DP Fundamentals
- Overlapping subproblems
- Optimal substructure
- Recognizing a DP problem

**Practice**
- [Which statement about DP is false](/companies/bs23#q-algo-dp-false-statement) — Brain Station 23
- [A 0/1 knapsack variant](/companies/appscode#q-algo-knapsack) — AppsCode

### Implementation Approaches
- Top-down memoization
- Bottom-up tabulation
- Space optimization

**Practice**
- [Fibonacci using only two variables](/companies/welldev#q-algo-fibonacci-two-vars) — WellDev

### Classic DP Patterns
- 1D DP: Fibonacci, climbing stairs, house robber
- Knapsack variants
- Subsequence problems: LCS, LIS
- Grid and path-counting problems
- Partition and subset-sum problems

**Practice**
- [Best time to buy and sell stock](/companies/therap/swe#q-algo-stock-profit) — Therap, with answer
- [Maximum profit from a price series](/companies/therap/ml#q-algo-stock-prices) — Therap
- [Two eggs and an n-storey building](/companies/welldev#q-algo-egg-drop) — WellDev, with answer
- [Burst balloons for maximum coins](/companies/kite#q-algo-burst-balloons) — Kite Games
- [Minimum cost buying apples in lots](/companies/iqvia#q-algo-min-cost-lots) — IQVIA

## Greedy Algorithms
Making the locally optimal choice at each step, and knowing when that actually yields a globally optimal answer.

*Coverage: thin*

**Resources** · [NeetCode — Greedy](https://neetcode.io/practice)

### Greedy Fundamentals
- Greedy-choice property
- Cases where greedy fails
- Greedy vs. dynamic programming

**Practice**
- [Can every student attend every assignment](/companies/chaldal#q-algo-interval-scheduling) — Chaldal, with answer

### Classic Greedy Problems
- Activity selection and interval scheduling
- Fractional knapsack
- Huffman coding
- Coin change

**Practice**
- [Total length covered by overlapping ranges](/companies/iqvia#q-algo-merge-intervals) — IQVIA, with answer
- [Fit coloured balls into capacity-limited boxes](/companies/priyo#q-algo-balls-into-boxes) — Priyo
- [Build a priority task scheduler](/companies/fringecore#q-algo-task-scheduler) — Fringecore, with answer

## Graph Algorithms
BFS and DFS as the foundation, then Dijkstra, Bellman-Ford, and MST — which algorithm fits which constraint, and why.

*Coverage: rich*

**Resources** · [CP Algorithms — graph algorithms](https://cp-algorithms.com/) — reference implementations and proofs · [VisuAlgo — graph traversal](https://visualgo.net/en/dfsbfs)

### Traversal
- Breadth-first search
- Depth-first search
- Visited tracking and traversal order
- Finding connected components

**Practice**
- [What DFS is, and implementing it](/companies/enosis#q-algo-dfs) — Enosis
- [BFS vs. DFS — which is faster, and when](/companies/wedevs#q-algo-bfs-vs-dfs) — weDevs
- [Number of islands](/companies/chaldal#q-algo-number-of-islands) — Chaldal, with answer
- [Islands in 8 directions, plus the largest](/companies/relisource#q-algo-islands-max-size) — Relisource
- [Farmer-owned regions in a village grid](/companies/kite#q-algo-grid-regions) — Kite Games, with answer
- [Identify patterns in a 0/1 grid](/companies/kite#q-algo-grid-patterns) — Kite Games

### Shortest Path
- BFS for unweighted graphs
- Dijkstra's algorithm
- Bellman-Ford and negative weights
- Floyd-Warshall for all pairs

**Practice**
- [Shortest path A to F using BFS](/companies/bs23#q-algo-bfs-shortest-path) — Brain Station 23
- [Fastest algorithm on an unweighted graph](/companies/bs23#q-algo-shortest-path-choice) — Brain Station 23
- [Which claim about Dijkstra is untrue](/companies/bs23#q-algo-dijkstra-properties) — Brain Station 23
- [What holds for Bellman-Ford](/companies/bs23#q-algo-bellman-ford) — Brain Station 23
- [Shortest path in a scenario graph](/companies/shellbeehaken#q-algo-scenario-shortest-path) — ShellBeeHaken

### Minimum Spanning Tree
- Kruskal's algorithm
- Prim's algorithm
- Union-find (disjoint set union)

**Practice**
- [Which algorithm finds an MST](/companies/bs23#q-algo-mst-choice) — Brain Station 23, with answer
- [Find the minimum spanning tree](/companies/robendevs#q-algo-mst-problem) — RoBenDevs
- [Connect n cities with m roads](/companies/bs23#q-algo-cities-roads) — Brain Station 23, with answer

### Ordering & Structure
- Topological sort
- Cycle detection in directed and undirected graphs
- Strongly connected components

**Practice**
- [Topological order from letter orderings](/companies/chaldal#q-algo-topological-sort) — Chaldal
- [Detect a cycle in a directed graph](/companies/srbd#q-algo-detect-cycle) — SRBD, with answer
- [Count reachable vertices](/companies/appifylab#q-algo-reachable-vertices) — AppifyLab

## Bit Manipulation
Basic bitwise operations and shifting, then bitmasking and common XOR tricks.

*Coverage: thin*

**Resources** · [Bit Twiddling Hacks](https://graphics.stanford.edu/~seander/bithacks.html) — the canonical collection

### Bitwise Operators
- AND, OR, NOT, XOR
- Left and right shift
- Signed vs. unsigned shifts

**Practice**
- [Encode a sequence as binary by parity](/companies/appifylab#q-algo-parity-binary) — AppifyLab, with answer

### Bit Tricks
- Checking, setting, clearing, and toggling a bit
- Counting set bits
- Powers of two
- XOR properties for finding unique elements

**Practice**
- [Minimum bit flips between two strings](/companies/iqvia#q-algo-bit-flips) — IQVIA
- [Produce a bit string not in the input](/companies/dsi#q-algo-missing-bit-string) — DSI

### Bitmasking
- Representing subsets as bitmasks
- Iterating over subsets
- Bitmask DP
