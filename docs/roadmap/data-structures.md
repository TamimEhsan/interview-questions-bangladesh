---
description: Arrays, linked lists, stacks, queues, trees, graphs, and hashing — the data structures section of the interview prep roadmap.
head:
  - - link
    - rel: canonical
      href: https://tamimehsan.github.io/interview-questions-bangladesh/roadmap/data-structures
---
# Data Structures

*Part of the [Interview Prep Roadmap](./). Coverage ratings are explained there.*

**Work through alongside this section**
- [NeetCode 150](https://neetcode.io/practice) — the single best-known curated list for coding interviews; its array, string, linked list, stack, tree, heap, and graph sections map onto the topics below. Worth finishing as a whole rather than cherry-picking.
- [Blind 75](https://www.teamblind.com/post/New-Year-Gift---Curated-List-of-Top-75-LeetCode-Questions-to-Save-Your-Time-OaM1orEU) — the shorter list NeetCode 150 grew out of, if time is tight.

## Arrays & Strings
Indexing, traversal, and in-place manipulation, building up to two-pointer and sliding-window techniques.

*Coverage: rich*

**Resources** · [NeetCode — Arrays & Hashing](https://neetcode.io/practice) · [NeetCode — Two Pointers / Sliding Window](https://neetcode.io/practice)

### Array Fundamentals
- Indexing and memory layout
- Fixed-size vs. dynamic arrays
- Complexity of access, insertion, and deletion

**Practice**
- [Arrays vs. linked lists on memory, access, insert, delete](/companies/shanghaibdcom#q-ds-array-vs-list-tradeoffs) — Shanghai BD
- [Second maximum of an array](/companies/bevycommerce#q-ds-array-second-max) — Bevy Commerce

### Traversal & In-Place Manipulation
- Iteration patterns
- Reversal and rotation
- Insertion and deletion within a fixed array

**Practice**
- [Rotate an array right by k](/companies/bs23#q-ds-rotate-array) — Brain Station 23, with answer
- [Reverse a string without library functions](/companies/chaldal#q-ds-reverse-string) — Chaldal, with answer
- [Sort by a given asc/desc criterion](/companies/bevycommerce#q-ds-sort-array-criteria) — Bevy Commerce

### String Fundamentals
- Character encoding and representation
- Immutability and the cost of concatenation
- Common string operations

**Practice**
- [Convert a numeric string to an integer](/companies/chaldal#q-ds-string-to-int) — Chaldal, with answer
- [Check whether a string is a palindrome](/companies/chaldal#q-ds-palindrome) — Chaldal, with answer
- [Extract digits from a string](/companies/chaldal#q-ds-digits-from-string) — Chaldal, with answer
- [Trim and collapse whitespace](/companies/bs23#q-ds-normalize-spaces) — Brain Station 23, with answer

### Two-Pointer Technique
- Opposite-end pointers
- Fast and slow pointers
- Pair and triplet problems

**Practice**
- [Two sum](/companies/bkash#q-ds-two-sum) — bKash, with answer
- [Pairs with a target sum in a doubly linked list](/companies/therap/swe#q-ds-pairs-target-sum-list) — Therap, with answer

### Sliding Window
- Fixed-size windows
- Variable-size windows
- Substring and subarray problems

**Practice**
- [Find all anagram substrings](/companies/chaldal#q-ds-anagram-substrings) — Chaldal, with answer
- [Minimum window substring](/companies/therap/swe#q-ds-min-window-substring) — Therap, with answer
- [Nearby almost-duplicate pair](/companies/kite#q-ds-nearby-almost-duplicate) — Kite Games, with answer

### Prefix Sums
- Prefix sum arrays
- Range sum queries
- Difference arrays

**Practice**
- [Range queries over an array](/companies/appscode#q-ds-range-query) — AppsCode
- [Count values in range per query](/companies/enosis#q-ds-range-count-queries) — Enosis
- [Difference of odd- and even-indexed sums](/companies/enosis#q-ds-odd-even-sum-diff) — Enosis
- [Evaluate f(l, r) for many queries](/companies/kite#q-ds-range-function-queries) — Kite Games

### Multidimensional Arrays
- 2D array traversal
- Matrix rotation and transposition
- Grid-based problems

**Practice**
- [Rotate an n×n matrix 90°](/companies/enosis#q-ds-rotate-matrix) — Enosis, with answer
- [Spiral matrix lookup](/companies/chaldal#q-ds-spiral-matrix) — Chaldal, with answer

## Linked Lists
Node structure, traversal, and basic insert/delete operations, then reversal, cycle detection, and building tree-like structures out of nodes.

*Coverage: moderate*

**Resources** · [NeetCode — Linked List](https://neetcode.io/practice)

### Linked List Fundamentals
- Node structure and pointers
- Singly, doubly, and circular linked lists
- Comparison with arrays

**Practice**
- [Array vs. linked list](/companies/exabyting#q-ds-array-vs-linkedlist) — Exabyting, with answer
- [Advantages and disadvantages of linked lists](/companies/welldev#q-ds-linkedlist-pros-cons) — WellDev
- [Which statement about a singly linked list is false](/companies/bs23#q-ds-singly-linkedlist-false) — Brain Station 23
- [Can binary search run on a sorted linked list](/companies/welldev#q-ds-binary-search-on-list) — WellDev, with answer

### Core Operations
- Traversal
- Insertion at head, tail, and middle
- Deletion
- Search

**Practice**
- [Insert and delete in a doubly linked list](/companies/shanghaibdcom#q-ds-doubly-list-insert-delete) — Shanghai BD
- [Insertion and deletion in a circular list](/companies/welldev#q-ds-circular-list-ops) — WellDev
- [Remove duplicates from a sorted list](/companies/bkash#q-ds-remove-duplicates-list) — bKash

### Pointer Techniques
- Iterative and recursive reversal
- Fast and slow pointers
- Cycle detection
- Finding the middle node
- Nth node from the end

**Practice**
- [Reverse a singly linked list](/companies/bkash#q-ds-reverse-linked-list) — bKash, with answer
- [Reverse every block of three nodes](/companies/therap/swe#q-ds-reverse-k-group) — Therap, with answer
- [Remove the nth node from the end](/companies/therap/swe#q-ds-remove-nth-from-end) — Therap, with answer
- [Nth from the end of a circular list](/companies/bs23#q-ds-circular-nth-from-end) — Brain Station 23, with answer
- [Clone a list with random pointers](/companies/srbd#q-ds-clone-random-list) — SRBD, with answer

### Multi-List Problems
- Merging sorted lists
- Intersection of two lists
- Partitioning

**Practice**
- [Merge two sorted linked lists](/companies/therap/swe#q-ds-merge-sorted-lists) — Therap, with answer

## Stacks & Queues
What LIFO and FIFO mean, and the problems each is the right tool for — browser history, CPU scheduling, expression evaluation.

*Coverage: moderate*

**Resources** · [NeetCode — Stack](https://neetcode.io/practice)

### Stack Fundamentals
- LIFO ordering
- Push, pop, and peek
- Array-based vs. linked-list-based implementation

**Practice**
- [Stack, queue and priority queue](/companies/exabyting#q-ds-stack-queue-pq) — Exabyting, with answer
- [Describe stacks and queues](/companies/welldev#q-ds-describe-stack-queue) — WellDev
- [Delete the middle element of a stack](/companies/welldev#q-ds-delete-middle-stack) — WellDev

### Stack Applications
- Expression notation (infix, prefix, postfix) and evaluation
- Balanced parentheses
- Undo history and browser navigation
- The function call stack

**Practice**
- [Valid parentheses](/companies/bkash#q-ds-valid-parentheses) — bKash, with answer
- [Convert infix to postfix](/companies/bs23#q-ds-infix-to-postfix) — Brain Station 23
- [Evaluate a postfix expression](/companies/nu#q-ds-evaluate-postfix) — National University
- [Evaluate infix or postfix notation](/companies/shanghaibdcom#q-ds-expression-evaluation) — Shanghai BD
- [When is a stack the right choice](/companies/bs23#q-ds-when-stack) — Brain Station 23

### Queue Fundamentals
- FIFO ordering
- Enqueue and dequeue
- Circular queues
- Array-based vs. linked-list-based implementation

**Practice**
- [Remaining capacity of a circular queue](/companies/bs23#q-ds-circular-queue-capacity) — Brain Station 23, with answer
- [Deque operations](/companies/nu#q-ds-deque-operations) — National University

### Queue Variants & Applications
- Deque
- Priority queue
- CPU scheduling and buffering
- Monotonic stack and queue

**Practice**
- [Build a stack out of a queue](/companies/welldev#q-ds-stack-from-queue) — WellDev, with answer
- [A queue exposing its kth-last element](/companies/shellbeehaken#q-ds-unique-queue) — ShellBeeHaken

## Trees & Binary Search Trees
Tree terminology and traversal order, binary search tree operations, tree properties (full/complete), and heaps as priority queues.

*Coverage: rich*

**Resources** · [NeetCode — Trees & Heap/Priority Queue](https://neetcode.io/practice) · [VisuAlgo — tree visualisations](https://visualgo.net/en/bst)

### Tree Fundamentals
- Terminology: root, node, leaf, height, depth, degree
- Binary vs. n-ary trees
- Tree properties: full, complete, perfect, balanced
- Array and linked representations

**Practice**
- [Full vs. complete binary tree](/companies/bs23#q-ds-tree-properties) — Brain Station 23
- [Tree, binary tree and BST compared](/companies/exabyting#q-ds-tree-types) — Exabyting, with answer
- [Build a tree from a list of nodes](/companies/enosis#q-ds-build-tree-from-nodes) — Enosis
- [Build a linked-node tree with left/right children](/companies/enosis#q-ds-linked-tree-structure) — Enosis

### Tree Traversal
- Inorder, preorder, and postorder
- Level-order traversal
- Recursive vs. iterative traversal

**Practice**
- [Maximum depth of a binary tree](/companies/chaldal#q-ds-max-depth) — Chaldal, with answer
- [Traverse a tree with a moving robot](/companies/inverseai#q-ds-tree-robot) — Inverse AI
- [Classify nodes from a parent/child table](/companies/therap/ml#q-ds-tree-node-table) — Therap

### Binary Search Trees
- BST ordering property
- Search, insertion, and deletion
- Degenerate trees and worst-case complexity
- Inorder successor and predecessor
- Lowest common ancestor

**Practice**
- [Explain the BST property](/companies/exabyting#q-ds-bst-explain) — Exabyting, with answer
- [Binary tree vs. BST](/companies/exabyting#q-ds-binary-tree-vs-bst) — Exabyting, with answer
- [Insert a sorted array into a BST](/companies/exabyting#q-ds-bst-insert-sorted) — Exabyting, with answer
- [Search complexity in a balanced BST](/companies/bs23#q-ds-bst-search-complexity) — Brain Station 23, with answer
- [Lowest common ancestor in a BST](/companies/bs23#q-ds-bst-lca) — Brain Station 23, with answer

### Balanced Trees
- Purpose of balancing
- Rotations
- AVL trees
- Red-black trees

**Practice**
- [Operation complexity in a red-black tree](/companies/enosis#q-ds-red-black-complexity) — Enosis

### Heaps & Priority Queues
- Min-heap and max-heap properties
- Array representation of a heap
- Heapify, insertion, and extraction
- Priority queue applications

**Practice**
- [How a priority queue works internally](/companies/enosis#q-ds-priority-queue-internals) — Enosis
- [Ten smallest of a thousand unsorted numbers](/companies/shanghaibdcom#q-ds-k-smallest) — Shanghai BD

### Specialized Trees
- Trie (prefix tree)
- Segment tree
- Binary indexed tree (Fenwick tree)

**Practice**
- [How a trie works, and implementing one](/companies/appscode#q-ds-trie) — AppsCode
- [Which structure suits a dictionary app](/companies/bs23#q-ds-dictionary-structure) — Brain Station 23
- [Look-ups over a sorted word list](/companies/therap/swe#q-ds-sorted-dictionary) — Therap, with answer

## Graphs
Representation (adjacency list vs. matrix) and structural properties like bipartiteness. Traversal and shortest-path algorithms live under **Graph Algorithms** below.

*Coverage: moderate*

**Resources** · [NeetCode — Graphs](https://neetcode.io/practice) · [VisuAlgo — graph structures](https://visualgo.net/en/graphds)

### Graph Fundamentals
- Vertices and edges
- Directed vs. undirected graphs
- Weighted vs. unweighted graphs
- Degree, path, and cycle

**Practice**
- [Key differences between a tree and a graph](/companies/enosis#q-ds-tree-vs-graph) — Enosis

### Graph Representation
- Adjacency matrix
- Adjacency list
- Edge list
- Space and time trade-offs between representations

**Practice**
- [Adjacency list vs. adjacency matrix](/companies/bs23#q-ds-adjacency-list-vs-matrix) — Brain Station 23
- [How to represent a graph in code](/companies/welldev#q-ds-represent-graph-code) — WellDev

### Graph Properties
- Connectivity and connected components
- Trees as a special case of graphs
- Bipartite graphs
- Dense vs. sparse graphs
- Directed acyclic graphs

**Practice**
- [Identify the non-bipartite graph](/companies/bs23#q-ds-bipartite) — Brain Station 23, with answer
- [Count connected components](/companies/robendevs#q-ds-connected-components) — RoBenDevs, with answer
- [Count disjoint clusters of cities](/companies/iqvia#q-ds-disjoint-clusters) — IQVIA

## Hashing (Hash Tables & Maps)
How hashing works (hash functions, collisions), hash tables and hash maps, and when to reach for one over a tree or array.

*Coverage: thin*

**Resources** · [NeetCode — Arrays & Hashing](https://neetcode.io/practice)

### Hashing Fundamentals
- Hash functions and their properties
- Hash tables, hash maps, and hash sets
- Average vs. worst-case complexity

**Practice**
- [What hashing is, and what a collision is](/companies/appscode#q-ds-hashing-basics) — AppsCode
- [`map` vs. `unordered_map` and their complexity](/companies/exabyting#q-ds-map-vs-unordered-map) — Exabyting, with answer

### Collision Handling
- Separate chaining
- Open addressing (linear probing, quadratic probing, double hashing)
- Load factor and rehashing

**Practice**
- [How collisions arise and are handled](/companies/appscode#q-ds-hashing-basics) — AppsCode

### Applications
- Frequency counting
- Deduplication and membership testing
- Caching and lookup tables
- Choosing a hash map over a tree or array

**Practice**
- [Highest-frequency character in a string](/companies/shopup#q-ds-char-frequency) — ShopUp
- [Sort elements by frequency, stable on ties](/companies/iqvia#q-ds-sort-by-frequency) — IQVIA
- [Sort using a frequency count](/companies/iqvia#q-ds-frequency-count-sort) — IQVIA
