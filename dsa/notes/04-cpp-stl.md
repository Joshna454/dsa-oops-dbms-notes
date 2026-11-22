## Introduction to C++ STL

### What is the STL?
The **Standard Template Library (STL)** is a collection of ready-made, tested data structures and functions that come with C++. Instead of writing a dynamic array or a sort function from scratch, you use the versions the library already provides.

It is called "template" because one definition works for any type: `vector<int>`, `vector<string>`, and `vector<double>` all come from the same code.

### The main parts

| Part | What it is | Examples |
|------|-----------|----------|
| Containers | Store collections of data | `vector`, `set`, `map`, `stack`, `queue` |
| Algorithms | Functions that work on containers | `sort`, `reverse`, `max_element`, `binary_search` |
| Iterators | Pointer-like objects that move through a container | `begin()`, `end()` |
| Functions | Objects that behave like functions (for example, a custom sort order) | `greater<int>()` |

### Types of containers

| Group | Containers | Main idea |
|-------|-----------|-----------|
| Sequence | `vector`, `list`, `deque`, `array` | Items stored in order |
| Ordered associative | `set`, `multiset`, `map`, `multimap` | Always kept sorted |
| Unordered associative | `unordered_set`, `unordered_map` | Stored by hashing, no order |
| Container adapters | `stack`, `queue`, `priority_queue` | Limited operations on top of another container |

### Iterators
- `v.begin()` points to the **first** element.
- `v.end()` points **one past the last** element, not to the last one itself.
- `*it` reads the value an iterator points to.

### Typical time complexities (to be confirmed with each container's lecture)

| Operation | Complexity |
|-----------|------------|
| `vector` access by index | O(1) |
| `vector` `push_back` | O(1) on average |
| `vector` insert or erase in the middle | O(n) |
| `sort` | O(n log n) |
| `set` / `map` insert, find, erase | O(log n) |
| `unordered_map` insert, find | O(1) on average, O(n) worst case |
| `stack` / `queue` push and pop | O(1) |
| `priority_queue` push and pop | O(log n) |

### Why use the STL?
- Saves time, because you do not rewrite common structures.
- Well tested and efficient.
- Makes code shorter and easier to read.
- Expected in interviews and coding contests, as long as you can also explain how the structures work.

### Headers
Each part lives in a header, for example `<vector>`, `<algorithm>`, `<map>`. With `g++-16`, `#include <bits/stdc++.h>` includes everything. With Apple's default compiler, include each header you use.

### First program

```cpp
// Problem: First look at vector, sort, iterators and pair
// Approach: add values, sort, print with an iterator, find the max, reverse


### Common mistakes
- Treating `end()` as the last element. It is one position after it.
- Using an iterator after the container changed size, because it may no longer be valid.
- Forgetting the complexity of an operation, such as inserting in the middle of a `vector` (O(n)).
- Including no header, or the wrong one, and getting a compile error.

> [!IMPORTANT]
> **Know the time complexity of every STL operation you use.**

### Key terms

| Term | Meaning |
|------|---------|
| Container | A structure that stores a collection of items |
| Algorithm | A ready-made function that works on a range of items |
| Iterator | An object that points to an element and moves through a container |
| Template | Code written once that works for any data type |