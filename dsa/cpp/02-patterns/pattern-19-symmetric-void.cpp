// Problem: Print a symmetric void pattern (two triangles of stars facing each other)
// Approach: upper half has stars shrinking, spaces growing; lower half is the reverse
// Time complexity: O(n^2)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern19(int n) {
        // upper half: stars shrink, spaces grow
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i; j++) {
                cout << "*";
            }
            for (int j = 0; j < 2 * i; j++) {
                cout << " ";
            }
            for (int j = 0; j < n - i; j++) {
                cout << "*";
            }
            cout << endl;
        }

        // lower half: stars grow, spaces shrink
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                cout << "*";
            }
            for (int j = 0; j < 2 * (n - 1 - i); j++) {
                cout << " ";
            }
            for (int j = 0; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cin >> n;

    Solution obj;
    obj.pattern19(n);

    return 0;
}

    
'''
    ***** *****
    ****   ****
    ***     ***
    **       **
    *         *
    *         *
    **       **
    ***     ***
    ****   ****
    ***** ***** '''