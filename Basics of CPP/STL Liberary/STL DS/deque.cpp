//deque - double ended queue. same word dequeue means pop in cpp. FUNCTIONS SAME AS LIST. list is doubly linked list inside and deque is dynamic array.
//list, vector and deque are all sequencial containers i.e store value in a sequence
#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d = {1, 2, 3, 4};

    for(int i : d) {
        cout << i << " " << endl;
    }

    cout << d[2] << endl;

    return 0;
}