#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int sl = s.size(), tl = t.size();
    for (int i = 0; i <= sl - tl; ++i) {
        string cur;
        for (int j = 0; j < tl; ++j) {
            cur.push_back(s[i+j]);
        }
        if (cur == t) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}