#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> vec = {1, 2, 3, 4, 5, 6};

    //if n is the last value in vec then vec.end() points to the n+1th pose, and vec.begin() to 1st pose i.e 0 but if we derefrence the vector like *(vec.begin()) then it will give 1 becuase the value stored is 1 there.

    cout << "vec.begin() : " << *(vec.begin()) << endl; // first value 1
    cout << "vec.end() : " << *(vec.end()) << endl; // 0 (or) garbage value because last ke agli pose pe point i.e 0 or garbage

    //forward loop on vector
    vector<int>::iterator it; //:: tells that it will point to vector type <int>
    for(it = vec.begin(); it!=vec.end(); it++) {
        cout << *(it) << endl; //derefrenced for getting value
    }

    //backward loop
    vector<int>::iterator itr;
    for(auto it = vec.rbegin(); it!=vec.rend(); it++) { //auto is used to tell the complier that you find datatype yourself and no nned to write vector<int>::iterator itr;
        cout << *(itr) << endl;
    }

    
    return 0;
}