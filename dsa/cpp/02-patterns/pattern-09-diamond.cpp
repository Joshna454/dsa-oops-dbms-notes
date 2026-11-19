// Problem: Print a diamond of stars
// Approach: upper half is the star pyramid, lower half is the inverted pyramid
// Time complexity: O(n^2)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern9(int n) {
        // upper half: spaces shrink, stars grow
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                cout << " ";
            }
            for (int j = 0; j < 2 * i + 1; j++) {
                cout << "*";
            }
            cout << endl;
        }

        // lower half: spaces grow, stars shrink
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                cout << " ";
            }
            for (int j = 0; j < 2 * (n - i) - 1; j++) {
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
    obj.pattern9(n);

    return 0;
}

'''
    *
   ***
  *****
 *******
 *******
  *****
   ***
    *  '''