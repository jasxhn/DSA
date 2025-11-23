// remove all abc from a string until no occurence is left

#include <iostream>
#include <string>
using namespace std;

string removeoccurrences(string s, string part) {
    while (s.length() > 0 && s.find(part) < s.length()) {
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main() {
    string s = "daabcbaabcbc";
    string part = "abc";

    string result = removeoccurrences(s, part);

    cout << "After removing occurrences: " << result << endl;

    return 0;
}
