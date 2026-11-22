## Time and space complexity

### Time complexity
**Time complexity** The amount of time an algorithm takes to complete as a function of the input size. It provides a way to quantify the efficiency of an algorithm by expressing how the execution time grows as the input size increases.

As the size of the input increases, the time taken by the program to execute also increases. This relationship between input size and execution time is fundamental in understanding time complexity.


### Space complexity
**Space complexity** measures the amount of memory an algorithm requires as a function of the input size. It is a critical aspect of algorithm efficiency, especially in memory-constrained environments. Space complexity can be broken down into two main components:

**Auxiliary Space:** This refers to the extra space or temporary space used by the algorithm, apart from the input data. It includes variables, data structures, and function call stacks that the algorithm utilizes during execution.

**Input Space:** This is the memory occupied by the input data itself. In many cases, the input space is considered negligible when analyzing space complexity, as it is independent of the algorithm's operations.

## Examples of Space Complexity

**Array of Size N:** Consider an array with N elements. The space complexity in this case is O(N), as the memory required scales linearly with the number of elements in the array.

**Recursive Function:** For a recursive algorithm, the space complexity is determined by the call stack, which grows with the depth of the recursion. For a recursive function that calls itself N times, the space complexity is O(N).


### Big O notation
Big O gives an **upper bound** on growth. Two simplifying rules:

1. **Drop constants:** `O(2n)` becomes `O(n)`.
2. **Drop smaller terms:** `O(n^2 + n)` becomes `O(n^2)`.

The reason: when `n` is very large, only the fastest-growing part matters.

### Common growth rates (fastest to slowest)

| Complexity | Name | Example |
|------------|------|---------|
| O(1) | Constant | Reading `arr[i]` |
| O(log n) | Logarithmic | Halving `n` until it reaches 0 |
| O(n) | Linear | One loop over the array |
| O(n log n) | Linearithmic | Efficient sorting (merge sort) |
| O(n^2) | Quadratic | Two nested loops over `n` |
| O(2^n) | Exponential | Trying every subset |

### How to find the time complexity

| Code shape | Complexity |
|------------|------------|
| Simple statements, no loops | O(1) |
| One loop running `n` times | O(n) |
| Loop inside a loop, both running `n` times | O(n^2) |
| Loop where the variable is halved or doubled | O(log n) |
| Two separate loops, one after the other | O(n) + O(n) = O(n) |

**Rule:** nested loops **multiply**, and loops one after another **add**.

### Other notations: Big O ;Omega (Ω) and Theta (Θ)

| Notation | Bound | Usually used for |
|----------|-------|------------------|
| O(f(n)) | Upper bound: at most f(n) | Worst case |
| Θ(f(n)) | Tight bound: exactly f(n) | Average case |
| Ω(f(n)) | Lower bound: at least f(n) | Best case |

**Linear search:** best case Ω(1), average case Θ(n), worst case O(n).

> [!NOTE]
> Matching O, Θ, and Ω to worst, average, and best case is the usual shortcut. Strictly, the notations describe the kind of bound, and the cases describe the input. In interviews, state Big O of the worst case.

### Examples

**1. Sum of an array: O(n) time, O(1) space**
```cpp
int sum = 0;
for (int i = 0; i < n; i++) {
    sum += arr[i];
}
```
The loop runs `n` times. Only one extra variable (`sum`) is used, so the extra space is constant.

**2. Square pattern (pattern 1): O(n^2) time, O(1) space**
```cpp
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cout << "*";
    }
}
```
The inner loop runs `n` times for each of the `n` rows, so `n * n` prints.

**3. Counting digits: O(log n) time, O(1) space**
```cpp
while (n > 0) {
    count++;
    n /= 10;
}
```
`n` shrinks by a factor of 10 each time, so the number of steps is the number of digits, which is about `log10(n)`.

**4. Halving: O(log n) time**
```cpp
while (n > 1) {
    n /= 2;
}
```
For `n = 16`: 16, 8, 4, 2, 1 gives 4 steps, which is `log2(16)`.

### Best, average and worst case
Take a **linear search** for a value in an array:

| Case | When | Steps |
|------|------|-------|
| Best | The value is the first element | 1, so O(1) |
| Worst | The value is last or missing | `n`, so O(n) |

Big O usually reports the **worst case**, because it is the guarantee.

### Space complexity examples

| Code | Extra space |
|------|-------------|
| A few variables (`sum`, `i`) | O(1) |
| A new array or vector of size `n` | O(n) |
| A 2D grid of size `n x n` | O(n^2) |
| Recursion that goes `n` calls deep | O(n), because of the call stack |

### Rough guide from input size (about 10^8 simple operations per second)

| Input size `n` | Complexity that usually works |
|----------------|-------------------------------|
| up to 20 | O(2^n) |
| up to 1,000 to 10,000 | O(n^2) |
| up to 100,000 to 1,000,000 | O(n log n) or O(n) |
| up to 10^8 | O(n) or O(log n) |

### Common mistakes
- Counting seconds instead of how the steps grow.
- Forgetting that nested loops multiply.
- Treating `O(2n)` as different from `O(n)`.
- Ignoring the memory used by recursion or by new arrays.
- Stating the best case when the question asks for the worst.

> [!IMPORTANT]
> **Complexity describes how the work grows with the input size, not how fast one run is.**

### Key terms

| Term | Meaning |
|------|---------|
| Big O | Upper bound on how the work grows |
| Worst case | The input that makes the algorithm do the most work |
| Auxiliary space | Extra memory beyond the input |
| Call stack | Memory used by function calls that have not finished |