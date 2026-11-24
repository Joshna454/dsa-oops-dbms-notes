// Problem: Basic maths concepts from the lecture
// Approach: one small function per concept, with the output printed

#include <bits/stdc++.h>
using namespace std;

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

int main() {
    int n;
    cin >> n;
    countdigits(n);
    return 0;
}