#include <iostream>
#include <vector>
using namespace std;
//standard template library

int main() {
    vector<int>vec = {2, 3, 4, 5};
    vector<int>tex(vec); // inittalizing the vector tex with the values of vec.
    
    for(int val : tex) {
        cout << val << " " << endl;
    }

    vec.emplace_back(6); //similar to push back and stores data in end but for incase objects. 
    for(int i : vec) {
        cout << i << endl;
    }

    cout << "value of vector at idx 2 : " << vec[2] << " or " << vec.at(2) << endl;
    cout << "value of vector at front : " << vec.front() << " and at back is : " << vec.back() << endl;

    vector <int> rex(30, -4);
    for(int i : rex) {
        cout << i << " ";
    }
//all functions till here were o(1) complexity fx
//now from down are costly once i.e they work in o(n)

    vector <int> trex = {5, 9, 6, 7};

    //vec.erase() or vec.erase(start, end); range = to erase any index value using vec.begin() = gives us pointer pose of beine vector.
    trex.erase(trex.begin()+2);//one element erase
    // Remove elements from index 1 to 2 (inclusive of start, exclusive of end)
    trex.erase(trex.begin() + 1, trex.begin() + 3); // Removes 9 and 7, now trex = {5}

    //vec.insert(pose, val); insert any value
    
    return 0;
}