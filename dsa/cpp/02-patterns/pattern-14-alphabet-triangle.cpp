// Problem: Print a triangle of letters, A to the i-th letter in each row
// Approach: row i prints the letters at positions 0 to i, using 'A' + j
// Time complexity: O(n^2)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern14(int n) {
        for ( int i = 0;i < n; i++ ) {
            for ( int j = 0; j <= i; j++) {
                cout << char('A' + j) << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cin >> n;

    Solution obj;
    obj.pattern14(n);

    return 0;
}

'''
A 
A B 
A B C 
A B C D 
A B C D E 
    '''