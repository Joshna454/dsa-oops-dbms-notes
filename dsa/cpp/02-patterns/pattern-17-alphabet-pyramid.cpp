// Problem: Print a centered pyramid of letters that rises and falls (ABCBA)
// Approach: each row has three parts: spaces, letters A up to the row's letter, letters back down to A
// Time complexity: O(n^2)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern17(int n) {
        for (int i = 0; i < n; i++) {
            // spaces before the letters
            for (int j = 0; j < n - i - 1; j++) {
                cout << " ";
            }
            // going up: A to the i-th letter
            for (int j = 0; j <= i; j++) {
                cout << char('A' + j);
            }
            // coming down: the letter before the peak, back to A
            for (int j = i - 1; j >= 0; j--) {
                cout << char('A' + j);
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cin >> n;

    Solution obj;
    obj.pattern17(n);

    return 0;
}

'''
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA '''