// Problem: Print a number triangle pattern of n rows
// Approach: Use nested loops to print the numbers in a triangle format
// Time Complexity: O(n^2) where n is the number of rows

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void printTriangle(int n) {
        for (int i =1; i <=n; i++) {
            for (int j =1; j <= i; j++) {
                cout <<j << " ";
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


''' 1 
    1 2 
    1 2 3 
    1 2 3 4 
    1 2 3 4 5 
    1 2 3 4 5 6   '''