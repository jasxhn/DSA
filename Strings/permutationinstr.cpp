#include <iostream>
#include <string>
using namespace std;

bool isfreqsame(int freq1[], int freq2[]) {
    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            return false;
        }
    }
    return true;
}

bool checkinclusion(string s1, string s2) {
    int freq[26] = {0};
    for (int i = 0; i < s1.length(); i++) {
        int idx = s1[i] - 'a';
        freq[idx]++;
    }

    int windowsize = s1.length();
    for (int i = 0; i <= s2.length() - windowsize; i++) {
        int windfreq[26] = {0};
        for (int j = 0; j < windowsize; j++) {
            windfreq[s2[i + j] - 'a']++;
        }
        if (isfreqsame(freq, windfreq)) {
            return true;
        }
    }
    return false;
}

int main() {
    string s1 = "ab";
    string s2 = "ediabaoooo";

    if (checkinclusion(s1, s2)) {
        cout << "Yes! A permutation of \"" << s1 << "\" exists in \"" << s2 << "\".\n";
    } else {
        cout << "Nope! No permutation of \"" << s1 << "\" found in \"" << s2 << "\".\n";
    }

    return 0;
}
