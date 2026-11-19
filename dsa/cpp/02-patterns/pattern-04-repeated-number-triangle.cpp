//Problem: Print a triangle where each row repeats its row number
//Approach: row i (fron 1) prints the value i, i times
//Time complexity: O(n^2)

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void printTriangle(int n) {
        for (int i =1;i <= n; i++) {
            for (int j =1; j <= i; j++) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int n ;
    cin >> n;
    Solution obj;

    obj.printTriangle(n);

    return 0;
}

'''
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
6 6 6 6 6 6   '''