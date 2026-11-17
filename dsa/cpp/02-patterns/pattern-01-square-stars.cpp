// Problem: Print a square pattern of stars
// Approach: n rows, each row prints n stars
// Time complexity: O(n^2)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern1(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
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
    obj.pattern1(n);

    return 0;
}

''' ****
    ****
    ****
    ****     '''