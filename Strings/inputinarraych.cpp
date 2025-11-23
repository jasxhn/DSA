//cin ignores the strings after the first space in the string input
//to tackle this we use cin.getline(str, len, delim?) [char array, no of characters, delimiter - if user enters a spceial symbol assigned by me the function stops taking the input after that]
// cin.getline(str, 100, '^');

#include <iostream>
using namespace std;

int main() {
    char str[10];
    cout << "enter string : (without space)" << endl;
    cin.getline(str, 100); 

    int len = 0;

    //for each to print all the characters of the string
    for(char ch : str) {
        cout << ch << " " << endl;
    }

    for(int i = 0; i<str[i] != '\0'; i++) {
        len++;
    }

    cout << "output : " << str << endl;

    cout << "length of string :" << len << endl;
    return 0;
}