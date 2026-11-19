// Problem: Print a half diamond of stars
// Approach: 2n - 1 rows; row i prints i stars up to row n, then 2n - i stars
// Time complexity: O(n^2)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern10(int n) {
        for (int i = 1; i <= 2 * n - 1; i++) {
            int stars = i;
            if (i > n) {
                stars = 2 * n - i;
            }
            for (int j = 1; j <= stars; j++) {
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
    obj.pattern10(n);

    return 0;
}

'''
*
**
***
****
*****
****
***
**
*   '''