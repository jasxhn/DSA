#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "paraya collage"; //resize at run time
    cout << str << endl;

    str = "hello";
    cout << str << endl; //dynamic in nature now str will become hello

    string str1 = "nigga";
    string str2 = "mon";
    cout << str1 + str2 << endl;

    cout << (str1 == str2) << endl;
    cout << (str1 < str2) << endl;

    cout << str.length() << " " << str1.length() << " " << str2.length() << endl;

    string str3;
    cin >> str3;
    cout << "str3 : " << str3 << endl;

    //each character
    for(int i = 0; i < str3.length(); i++) {
        cout << str3[i] << " ";
    }
    cout << endl;
    return 0;
}