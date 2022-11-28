#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> s(N);
    for (int i = 0; i < N; ++i) {
        cin >> s[i];
    }
    bool answer = true;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < i; ++j) {
            if (s[i] == s[j]) {
                answer = false;
            }
        }
    }
    string s1 = "HDCS";
    string s2 = "A23456789TJQK";
    for (int i = 0; i < N; ++i) {
        if (!count(s1.begin(), s1.end(), s[i][0]) || !count(s2.begin(), s2.end(), s[i][1])) {
            answer = false;
        }
    }
    cout << (answer ? "Yes" : "No") << endl;
}