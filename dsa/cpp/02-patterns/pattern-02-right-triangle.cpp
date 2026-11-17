// Problem: Print a right-angled triangle of stars
// Approach: row i (starting from 0) prints i + 1 stars
// Time complexity: O(n^2)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern2(int n) {
        for (int i = 0; i < n; i++) {
            // inner loop for printing stars
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
    obj.pattern2(n);

    return 0;
}

''' *
    **
    ***
    **** '''