// Problem: Print a triangle of letters where every row ends at the n-th letter
// Approach: row i starts at the letter 'A' + (n - 1 - i) and goes up to the n-th letter
// Time complexity: O(n^2)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern18(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                cout << char('A' + (n - 1 - i) + j) << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cin >> n;

    Solution obj;
    obj.pattern18(n);

    return 0;
}


'''
    
    E
    D E
    C D E
    B C D E
    A B C D E '''