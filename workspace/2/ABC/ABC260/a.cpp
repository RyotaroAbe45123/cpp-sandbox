#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    if ((s.at(0) != s.at(1)) || (s.at(1) != s.at(2))) {
        if (s.at(0) != s.at(1)) cout << s.at(0) << endl;
        else if ((s.at(1) != s.at(2))) cout << s.at(2) << endl;
    }
    else cout << -1 << endl;
}