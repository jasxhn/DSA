/*lists are implemented internally as doubly linked list i.e
they can be popback, popfront, pushback, pushfront, emplaceback abd emplacefront
DIFFERENCE BW LIST AND ARRAY = vector is implimented as a dynamic array and list as a doubly linked list and list has front operations too
l[2] = cannot work, shows error*/

#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
    list<int>l;
    l.emplace_back(1);
    l.push_back(2);

    l.push_front(3);
    l.push_front(5); // 5 3 1 2

    for(int val : l) {
        cout << val << " ";
    }

    l.pop_back();
    l.pop_front();

    cout << endl;

    for(int val : l) {
        cout << val << " ";
    }

    list <int> list1 = {1, 2, 3, 4};

    cout << endl; 

    for(int i : list1) {
        cout << i << " ";
    }

    return 0;
}