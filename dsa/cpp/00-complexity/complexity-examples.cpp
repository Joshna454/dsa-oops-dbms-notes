// Problem: Examples of common time and space complexities (no STL)
// Approach: plain arrays and loops; step counters show how work grows with n

#include <iostream>
using namespace std;

// O(1) time: one step, no matter how big the array is
int firstElement(int arr[]) {
    return arr[0];
}

// O(n) time, O(1) extra space: one pass, one extra variable
int sumArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

// O(n^2) time: n rows, and n steps in each row
long long stepsSquare(int n) {
    long long steps = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            steps++;
        }
    }
    return steps;
}

// O(log n) time: n is halved each step
int stepsHalving(int n) {
    int steps = 0;
    while (n > 1) {
        n /= 2;
        steps++;
    }
    return steps;
}

// O(n log n) time: a halving loop inside a loop that runs n times
long long stepsNLogN(int n) {
    long long steps = 0;
    for (int i = 0; i < n; i++) {
        for (int j = n; j > 1; j /= 2) {
            steps++;
        }
    }
    return steps;
}

// O(sqrt n) time: only check divisors up to the square root
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; (long long)i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Best case O(1), worst case O(n)
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}

// O(n) time, O(n) extra space: fills a second array of size n
void reverseCopy(int arr[], int result[], int n) {
    for (int i = 0; i < n; i++) {
        result[i] = arr[n - 1 - i];
    }
}

int main() {
    int arr[6] = {4, 8, 15, 16, 23, 42};
    int n = 6;

    cout << "firstElement: " << firstElement(arr) << endl;
    cout << "sumArray: " << sumArray(arr, n) << endl;

    int sizes[3] = {8, 16, 1024};
    for (int k = 0; k < 3; k++) {
        int s = sizes[k];
        cout << "n = " << s
             << ": square = " << stepsSquare(s)
             << ", halving = " << stepsHalving(s)
             << ", nlogn = " << stepsNLogN(s) << endl;
    }

    cout << "29 is " << (isPrime(29) ? "prime" : "not prime") << endl;
    cout << "30 is " << (isPrime(30) ? "prime" : "not prime") << endl;

    cout << "linearSearch for 4 (best case): " << linearSearch(arr, n, 4) << endl;
    cout << "linearSearch for 99 (worst case): " << linearSearch(arr, n, 99) << endl;

    int result[6];
    reverseCopy(arr, result, n);
    cout << "reversed copy: ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}