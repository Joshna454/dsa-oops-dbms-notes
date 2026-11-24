// Problem: List methods
// Approach: one small example per method, with the output printed

#include <bits/stdc++.h>
using namespace std;

void printList(const list<int>& l) {
    for (int x : l) cout << x << " ";
    cout << endl;
}

int main() {
    list<int> l;

    // 1. push_back and push_front
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    l.push_front(5);
    cout << "after push: ";
    printList(l);

    // 2. size
    cout << "size: " << l.size() << endl;

    // 3. front and back
    cout << "front: " << l.front() << ", back: " << l.back() << endl;

    // 4. pop_front and pop_back
    l.pop_front();
    l.pop_back();
    cout << "after pops: ";
    printList(l);

    // 5. insert before the second element
    auto it = next(l.begin());
    l.insert(it, 15);
    cout << "after insert: ";
    printList(l);

    // 6. erase the first element
    l.erase(l.begin());
    cout << "after erase: ";
    printList(l);

    // 7. swap
    list<int> w = {1, 2, 3};
    l.swap(w);
    cout << "after swap, l: ";
    printList(l);
    cout << "after swap, w: ";
    printList(w);

    // 8. clear
    l.clear();
    cout << "after clear, size: " << l.size() << endl;

    return 0;
}

'''
after push: 5 10 20 30 40 
size: 5
front: 5, back: 40
after pops: 10 20 30 
after insert: 10 15 20 30 
after erase: 15 20 30 
after swap, l: 1 2 3 
after swap, w: 15 20 30 
after clear, size: 0 '''