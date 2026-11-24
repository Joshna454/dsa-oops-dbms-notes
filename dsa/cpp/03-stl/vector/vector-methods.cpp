#include<bits/stdc++.h>
using namespace std;

void explainvector() {
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.emplace_back(0);



    //[1, 2, 0 ]
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // iterator

    vector<int>::iterator beginItr = vec.begin();
    vector<int>::iterator endItr = vec.end();
    for (vector<int>::iterator i = beginItr; i < endItr; i++) {
        cout << (*i) << " ";
    }
    cout << endl;

    //reverse iterator
    auto reverseBeginItr = vec.rbegin();
    auto reverseEndItr = vec.rend();
    for (auto i = reverseBeginItr; i < reverseEndItr; i++) {
        cout << (*i) << " ";
    }
    cout << endl;
    
}
int main() {
    explainvector();
    return 0;
}