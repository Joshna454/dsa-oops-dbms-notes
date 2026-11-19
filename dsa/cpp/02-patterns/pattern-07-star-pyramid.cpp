// Problem: Print a centered pyramid of stars
// Approach: row i (from 0) prints n - i - 1 spaces, then 2 * i + 1 stars
// Time complexity: O(n^2)

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public: 
    void pattern7(int n) {
        for (int i = 0; i < n; i++) {
            // spaces before the stars
            for (int j = 0; j < n - i - 1; j++) {
                cout << " ";
            }
            // stars
            for (int j = 0; j < 2 * i + 1; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};

int main () {
    int n; 
    cin >> n;
    Solution obj;
    obj.pattern7(n);
    return 0;
}   

'''
    *
   ***
  *****
 *******  '''