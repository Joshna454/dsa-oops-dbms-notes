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


### vector

A resizable array. Items are stored in order, with indexes from 0.

| Method | What it does | Time |
|--------|--------------|------|
| `push_back(x)` | add at the end | O(1) on average |
| `size()` | number of elements | O(1) |
| `v[i]`, `at(i)` | element at index `i` | O(1) |
| `front()`, `back()` | first and last element | O(1) |
| `insert(pos, x)` | insert at a position | O(n) |
| `erase(pos)`, `erase(first, last)` | remove one element, or a range | O(n) |
| `swap(w)` | swap with another vector | O(1) |
| `clear()` | remove everything | O(n) |

Looping: index loop, iterator (`begin()` to `end()`), or for-each (`for (int x : v)`).

- `end()` points **one past** the last element.
- In `erase(first, last)`, `last` is not removed.

> [!IMPORTANT]
> **Inserting or erasing anywhere except the end is O(n).**

### list

Lists are sequence containers that support non-contiguous memory allocation. Unlike vectors, which offer faster traversal, lists have slower traversal times. However, they excel in insertion and deletion operations, which are performed in constant time once the desired position is identified. A list in C++ STL is a doubly-linked list, which allows elements to be efficiently inserted or deleted from both ends as well as from the middle. Unlike arrays or vectors, lists do not provide fast random access but are highly efficient in insertion and deletion operations.

| Method | What it does | Time |
|--------|--------------|------|
| `push_back(x)`, `push_front(x)` | add at the end or the front | O(1) |
| `pop_back()`, `pop_front()` | remove from the end or the front | O(1) |
| `front()`, `back()` | first and last element | O(1) |


### deque

A double-ended queue. Add and remove at both ends in O(1), and access by index like a vector.


### stack

LIFO: Last In, First Out. Only the top element can be accessed.

| Method | What it does | Time |
|--------|--------------|------|
| `push(x)`, `emplace(x)` | add on top | O(1) |
| `pop()` | remove the top element (returns nothing) | O(1) |
| `top()` | read the top element | O(1) |
| `size()`, `empty()` | count, whether it is empty | O(1) |
| `swap(w)` | swap with another stack | O(1) |

- No index access and no iterators.
- Check `empty()` before `top()` or `pop()`.
- Uses: undo operations, matching brackets, reversing, function calls.

> [!IMPORTANT]
> **Last in, first out. The most recently added item leaves first.**

### queue

FIFO: First In, First Out. Add at the back, remove from the front.

| Method | What it does | Time |
|--------|--------------|------|
| `push(x)`, `emplace(x)` | add at the back | O(1) |
| `pop()` | remove the front element (returns nothing) | O(1) |
| `front()`, `back()` | read the first and last element | O(1) |
| `size()`, `empty()` | count, whether it is empty | O(1) |
| `swap(w)` | swap with another queue | O(1) |

- No index access and no iterators.
- Check `empty()` before `front()`, `back()`, or `pop()`.
- Uses: waiting lines, scheduling tasks, level-by-level traversal of trees and graphs.

> [!IMPORTANT]
> **First in, first out. The oldest item leaves first.**