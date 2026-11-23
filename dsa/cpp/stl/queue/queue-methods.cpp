// Problem: Queue methods
// Approach: one small example per method, with the output printed

#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;

    // 1. push: add at the back
    q.push(10);
    q.push(20);
    q.push(30);

    // 2. front and back
    cout << "front: " << q.front() << ", back: " << q.back() << endl;

    // 3. size
    cout << "size: " << q.size() << endl;

    // 4. pop: remove from the front (it returns nothing)
    q.pop();
    cout << "front after pop: " << q.front() << endl;

    // 5. emplace: like push, builds the item in place
    q.emplace(40);
    cout << "back after emplace: " << q.back() << endl;

    // 6. empty
    cout << "empty: " << q.empty() << endl;

    // 7. swap
    queue<int> w;
    w.push(1);
    w.push(2);
    q.swap(w);
    cout << "after swap, q front: " << q.front() << ", back: " << q.back()
         << ", size: " << q.size() << endl;
    cout << "after swap, w front: " << w.front() << ", back: " << w.back()
         << ", size: " << w.size() << endl;

    // 8. print everything by popping
    cout << "popping w: ";
    while (!w.empty()) {
        cout << w.front() << " ";
        w.pop();
    }
    cout << endl;
    cout << "empty now: " << w.empty() << endl;

    return 0;
}

'''
front: 10, back: 30
size: 3
front after pop: 20
back after emplace: 40
empty: 0
after swap, q front: 1, back: 2, size: 2
after swap, w front: 20, back: 40, size: 3
popping w: 20 30 40 
empty now: 1 '''