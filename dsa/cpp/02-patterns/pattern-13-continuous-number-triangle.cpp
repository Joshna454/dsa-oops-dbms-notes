// Problem: Print a triangle of consecutive numbers
// Approach: keep one counter outside the loops and increase it after every print
// Time complexity: O(n^2)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern13(int n) {
        int num =1;
        for (int i =1; i <= n; i++) {
            for ( int j =1; j <= i;j++) {
                cout << num << " ";
                num++;
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cin >> n;

    Solution obj;
    obj.pattern13(n);

    return 0;
}

'''
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
'''