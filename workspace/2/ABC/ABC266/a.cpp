#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int l = (s.size() + 1) / 2;
    cout << s.substr(l-1, 1) << endl;
}