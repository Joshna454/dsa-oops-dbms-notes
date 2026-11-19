// Problem: Print a number crown
// Approach: each row has three parts: numbers 1 to i, 2 * (n - i) spaces, numbers i down to 1
// Time complexity: O(n^2)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern12(int n) {
        for (int i = 1; i <= n; i++) {
            // left part: 1 to i
            for (int j = 1; j <= i; j++) {
                cout << j;
            }
            // middle part: spaces
            for (int j = 1; j <= 2 * (n - i); j++) {
                cout << " ";
            }
            // right part: i down to 1
            for (int j = i; j >= 1; j--) {
                cout << j;
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cin >> n;

    Solution obj;
    obj.pattern12(n);

    return 0;
}


'''
1        1
12      21
123    321
1234  4321
1234554321  '''