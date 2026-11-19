// Problem: Print an inverted centered pyramid of stars
// Approach: row i (from 0) prints i spaces, then 2 * (n - i) - 1 stars
// Time complexity: O(n^2)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern8(int n) {
        for (int i = 0; i < n; i++) {
            // spaces before the stars
            for (int j = 0; j < i; j++) {
                cout << " ";
            }
            // stars
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
    obj.pattern8(n);

    return 0;
}

'''
 *********
  *******
   *****
    ***
     *     '''