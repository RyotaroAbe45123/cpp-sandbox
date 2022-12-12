#include <iostream>
#include <string>
using namespace std;

bool is_uppercase(const char c) {
    return 'A' <= c and c <= 'Z';
}

bool is_digit(const char c) {
    return '0' <= c and c <= '9';
}

int main() {
    string s;
    cin >> s;
    bool Yes = true;
    if (!is_uppercase(s.front())) {
        Yes = false;
    }
    if (!is_uppercase(s.back())) {
        Yes = false;
    }
    if (s.size() != 8) {
        Yes = false;
    }
    for (int i = 1; i < 7; ++i) {
        if (!is_digit(s[i])) {
            Yes = false;
        }
    }
    if (s[1] == '0') {
        Yes = false;
    }
    cout << (Yes ? "Yes" : "No") << endl;
    return 0;
}