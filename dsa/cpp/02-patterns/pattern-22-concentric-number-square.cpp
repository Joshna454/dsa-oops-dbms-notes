// Problem: Print a square of concentric rings of numbers (n on the outside, 1 in the center)
// Approach: for each cell, find its distance to the nearest edge and print n - distance
// Time complexity: O(n^2)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern22(int n) {
        int size = 2 * n - 1;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                int top = i;
                int left = j;
                int bottom = size - 1 - i;
                int right = size - 1 - j;

                int distance = min(min(top, bottom), min(left, right));
                cout << n - distance;
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cin >> n;

    Solution obj;
    obj.pattern22(n);

    return 0;
}

'''
555555555
544444445
543333345
543222345
543212345
543222345
543333345
544444445
555555555  '''