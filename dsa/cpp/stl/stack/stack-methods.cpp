// Problem: Stack methods
// Approach: one small example per method, with the output printed

#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;

    // 1. push: add on top
    st.push(10);
    st.push(20);
    st.push(30);

    // 2. top: read the top element
    cout << "top: " << st.top() << endl;

    // 3. size
    cout << "size: " << st.size() << endl;

    // 4. pop: remove the top element (it returns nothing)
    st.pop();
    cout << "top after pop: " << st.top() << endl;

    // 5. emplace: like push, builds the item in place
    st.emplace(40);
    cout << "top after emplace: " << st.top() << endl;

    // 6. empty
    cout << "empty: " << st.empty() << endl;

    // 7. swap
    stack<int> w;
    w.push(1);
    w.push(2);
    st.swap(w);
    cout << "after swap, st top: " << st.top() << ", size: " << st.size() << endl;
    cout << "after swap, w top: " << w.top() << ", size: " << w.size() << endl;

    // 8. print everything by popping
    cout << "popping w: ";
    while (!w.empty()) {
        cout << w.top() << " ";
        w.pop();
    }
    cout << endl;
    cout << "empty now: " << w.empty() << endl;

    return 0;
}

'''top: 30
size: 3
top after pop: 20
top after emplace: 40
empty: 0
after swap, st top: 2, size: 2
after swap, w top: 40, size: 3
popping w: 40 20 10 
empty now: 1  '''