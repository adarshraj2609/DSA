#include <iostream>
using namespace std;

int main() {
    string s = "Adarsh is the smallest boy";
    int n = s.length();

    int i = 0, j = 0, maxlen = 0;
    string ans=" ";
    while (j < n) {
        if (s[j] != ' ') {
            j++;
        }
        else {
            int len = j - i;

            if (len > maxlen)
                maxlen = len;
                ans=s.substr(i,len);

            i = j;

            while (i < n && s[i] == ' ')
                i++;

            j = i;
        }
    }

    // Check the last word
    if (i < n) {
        int len = j - i;

        if (len > maxlen)
            maxlen = len;
    }

    cout << "Longest word length = " << maxlen<<" "<<ans << endl;

    return 0;
}