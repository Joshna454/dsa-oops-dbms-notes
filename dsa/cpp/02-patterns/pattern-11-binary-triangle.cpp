// Problem: Print a triangle of alternating 1s and 0s
// Approach: even rows start with 1, odd rows start with 0; flip after every digit
// Time complexity: O(n^2)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern11(int n) {
        int start = 1;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                start = 1;
            } else {
                start = 0;
            }
            for (int j = 0; j <= i; j++) {
                cout << start;
                start = 1 - start;
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cin >> n;

    Solution obj;
    obj.pattern11(n);

    return 0;
}

'''
1
01
101
0101
10101  '''