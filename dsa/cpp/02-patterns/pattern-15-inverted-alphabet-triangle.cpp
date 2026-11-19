// Problem: Print an inverted triangle of letters, A to the k-th letter in each row
// Approach: row i prints the letters at positions 0 to n - i - 1, using 'A' + j
// Time complexity: O(n^2)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern15(int n) {
        for ( int i = 0; i < n; i++ ) {
            for ( int j= 0 ; j < n - i; j++)
                cout << char('A' + j) << " ";
            cout << endl;   
        }
    }
};

int main() {
    int n;
    cin >> n;

    Solution obj;
    obj.pattern15(n);

    return 0;
}

'''
A B C D E
A B C D
A B C
A B
A         '''