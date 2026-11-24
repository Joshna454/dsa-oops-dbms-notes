// Problem: Basic maths concepts from the lecture
// Approach: one small function per concept, with the output printed

#include <bits/stdc++.h>
using namespace std;

//coint no of digits in a number
void countdigits(int n) {
    if (n == 0) {
        cout << "Number of digits: 1" << endl;
        return;
    }
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;    
}
    cout << "Number of digits: " << count << endl;
}

// count no of odd digits in a number
void countodddigits(int n) {
    int count = 0;
    while (n != 0) {
        if (n % 2 != 0) {
            count++;
        }
        n /= 10;
    }
    cout << "Number of odd digits: " << count << endl;
}

// Reverse a number
void reverse(int n) {
    int rev = 0;
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;        

    }
    cout << "Reversed number: " << rev << endl;
}       


int main() {
    int n;
    cin >> n;
    countdigits(n);
    countodddigits(n);
    reverse(n);
    return 0;
}