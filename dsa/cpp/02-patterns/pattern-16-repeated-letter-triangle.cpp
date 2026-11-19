// Problem: Print a triangle where each row repeats its own letter
// Approach: row i prints the letter 'A' + i, repeated i + 1 times
// Time complexity: O(n^2)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern16(int n) {
        for (int i = 0; i < n; i++) {
            char ch = 'A' + i;
            for (int j = 0; j <= i; j++) {
                cout << ch;
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cin >> n;

    Solution obj;
    obj.pattern16(n);

    return 0;
}

'''
A
BB
CCC
DDDD
EEEEE '''