---
description: Arrays, linked lists, stacks, queues, trees, graphs, and hashing — the data structures section of the interview prep roadmap.
head:
  - - link
    - rel: canonical
      href: https://tamimehsan.github.io/interview-questions-bangladesh/notes/roadmap/data-structures
---
# Data Structures

*Part of the [Interview Prep Roadmap](./). Coverage ratings are explained there.*

## Arrays & Strings
Indexing, traversal, and in-place manipulation, building up to two-pointer and sliding-window techniques.

*Coverage: rich*

### Array Fundamentals
- Indexing and memory layout
- Fixed-size vs. dynamic arrays
- Complexity of access, insertion, and deletion

### Traversal & In-Place Manipulation
- Iteration patterns
- Reversal and rotation
- Insertion and deletion within a fixed array

### String Fundamentals
- Character encoding and representation
- Immutability and the cost of concatenation
- Common string operations

### Two-Pointer Technique
- Opposite-end pointers
- Fast and slow pointers
- Pair and triplet problems

### Sliding Window
- Fixed-size windows
- Variable-size windows
- Substring and subarray problems

### Prefix Sums
- Prefix sum arrays
- Range sum queries
- Difference arrays

### Multidimensional Arrays
- 2D array traversal
- Matrix rotation and transposition
- Grid-based problems

## Linked Lists
Node structure, traversal, and basic insert/delete operations, then reversal, cycle detection, and building tree-like structures out of nodes.

*Coverage: moderate*

### Linked List Fundamentals
- Node structure and pointers
- Singly, doubly, and circular linked lists
- Comparison with arrays

### Core Operations
- Traversal
- Insertion at head, tail, and middle
- Deletion
- Search

### Pointer Techniques
- Iterative and recursive reversal
- Fast and slow pointers
- Cycle detection
- Finding the middle node
- Nth node from the end

### Multi-List Problems
- Merging sorted lists
- Intersection of two lists
- Partitioning

## Stacks & Queues
What LIFO and FIFO mean, and the problems each is the right tool for — browser history, CPU scheduling, expression evaluation.

*Coverage: moderate*

### Stack Fundamentals
- LIFO ordering
- Push, pop, and peek
- Array-based vs. linked-list-based implementation

### Stack Applications
- Expression notation (infix, prefix, postfix) and evaluation
- Balanced parentheses
- Undo history and browser navigation
- The function call stack

### Queue Fundamentals
- FIFO ordering
- Enqueue and dequeue
- Circular queues
- Array-based vs. linked-list-based implementation

### Queue Variants & Applications
- Deque
- Priority queue
- CPU scheduling and buffering
- Monotonic stack and queue

## Trees & Binary Search Trees
Tree terminology and traversal order, binary search tree operations, tree properties (full/complete), and heaps as priority queues.

*Coverage: rich*

### Tree Fundamentals
- Terminology: root, node, leaf, height, depth, degree
- Binary vs. n-ary trees
- Tree properties: full, complete, perfect, balanced
- Array and linked representations

### Tree Traversal
- Inorder, preorder, and postorder
- Level-order traversal
- Recursive vs. iterative traversal

### Binary Search Trees
- BST ordering property
- Search, insertion, and deletion
- Degenerate trees and worst-case complexity
- Inorder successor and predecessor
- Lowest common ancestor

### Balanced Trees
- Purpose of balancing
- Rotations
- AVL trees
- Red-black trees

### Heaps & Priority Queues
- Min-heap and max-heap properties
- Array representation of a heap
- Heapify, insertion, and extraction
- Priority queue applications

### Specialized Trees
- Trie (prefix tree)
- Segment tree
- Binary indexed tree (Fenwick tree)

## Graphs
Representation (adjacency list vs. matrix) and structural properties like bipartiteness. Traversal and shortest-path algorithms live under **Graph Algorithms** below.

*Coverage: moderate*

### Graph Fundamentals
- Vertices and edges
- Directed vs. undirected graphs
- Weighted vs. unweighted graphs
- Degree, path, and cycle

### Graph Representation
- Adjacency matrix
- Adjacency list
- Edge list
- Space and time trade-offs between representations

### Graph Properties
- Connectivity and connected components
- Trees as a special case of graphs
- Bipartite graphs
- Dense vs. sparse graphs
- Directed acyclic graphs

## Hashing (Hash Tables & Maps)
How hashing works (hash functions, collisions), hash tables and hash maps, and when to reach for one over a tree or array.

*Coverage: thin*

### Hashing Fundamentals
- Hash functions and their properties
- Hash tables, hash maps, and hash sets
- Average vs. worst-case complexity

### Collision Handling
- Separate chaining
- Open addressing (linear probing, quadratic probing, double hashing)
- Load factor and rehashing

### Applications
- Frequency counting
- Deduplication and membership testing
- Caching and lookup tables
- Choosing a hash map over a tree or array
