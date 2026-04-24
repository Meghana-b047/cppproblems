#include <iostream>
#include <string>
using namespace std;

int compareStrings(string s1, string s2) {
    if (s1.length() < s2.length()) {
        return -1;
    } else if (s1.length() == s2.length()) {
        return 0;
    } else {
        return 1;
    }
}

int main() {

    string w1, w2;

    cin >> w1 >> w2;

    cout << compareStrings(w1, w2) << endl;

    return 0;

}
