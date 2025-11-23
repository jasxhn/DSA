#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

string reverseWords(string s) {
    stringstream ss(s);
    string word;
    vector<string> words;

    // Split string into words
    while (ss >> word) {
        words.push_back(word);
    }

    // Reverse the vector of words
    reverse(words.begin(), words.end());

    // Join words back into a single string
    string result = "";
    for (int i = 0; i < words.size(); i++) {
        result += words[i];
        if (i != words.size() - 1) {
            result += " ";
        }
    }

    return result;
}

int main() {
    string str = "I am grinding DSA";
    string reversed = reverseWords(str);
    
    cout << "Original: " << str << endl;
    cout << "Reversed: " << reversed << endl;

    return 0;
}
