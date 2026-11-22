'''pair in c++ standard template library(STL) is a utility that allows 
the storage of two heterogeneous objects as a single unit.This is particularly useful when there is a need to 
associate two values together, such as when storing key-value pairs.'''

#include<bits/stdc++.h>
using namespace std;

void explainpair() {
    pair<int,int> pr1 = make_pair(2,8);
    cout<<pr1.first<< " " << pr1.second << endl;

    pair<int,char> pr2 = make_pair(5,'a');
    cout<<pr2.first<< " " << pr2.second << endl;

    pair<pair<int,char>,int> pr3 = {{4, 'h'}, 8};
    cout << pr3.first.second << endl;
}

int main() {
    explainpair();
    return 0;

}

'''
2 8
5 a
h
 '''