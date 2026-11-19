// Problem: Print an inverted right-angled triangle of numbers
// Approach: row i (from 0) prints n - i numbers
// Time complexity: O(n^2)

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public: 
    void printTriangle(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i + 1; j++) {
                cout << j;
            }
            cout << endl;
        }
    }
};
int main () {
    int n; 
    cin >> n;
    Solution obj;
    obj.printTriangle(n);
    return 0;
}   


'''
12345
1234
123
12
1   '''
