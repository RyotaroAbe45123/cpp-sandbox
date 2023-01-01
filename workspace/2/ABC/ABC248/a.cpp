#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    // cout << s << endl;
    // return 0;
    for (int i = 0; i < s.size(); i++) {
        // cout << s.at(i) << endl;
        // break;
        if (s.at(i) != to_string(i)) {
            cout << s.at(i) << endl;
            cout << (char) i << endl;
            break;
        }
    }
    return 0;
}