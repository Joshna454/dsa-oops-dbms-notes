// Problem: Print a butterfly pattern (two triangles joined in the middle row)
// Approach: first half stars grow and spaces shrink; second half stars shrink and spaces grow
// Time complexity: O(n^2)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern20(int n) {
        // upper half: stars grow, spaces shrink (ends with the solid row)
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

        // lower half: starts at i = 1 so the solid row is not printed twice
        for (int i = 1; i < n; i++) {
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
    }
};

int main() {
    int n;
    cin >> n;

    Solution obj;
    obj.pattern20(n);

    return 0;
}

'
    *         *
    **       **
    ***     ***
    ****   ****
    ***** *****
    ***** *****
    ****   ****
    ***     ***
    **       **
    *         *'