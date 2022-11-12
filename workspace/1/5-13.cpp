#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    map<string, long long> num;
    for (int i = 0; i < N; ++i) {
        string s;
        cin >> s;

        sort(s.begin(), s.end());
        ++num[s];
    }

    long long result = 0;
    for (auto v: num) {
        long long n = v.second;

        result += n * (n - 1) / 2;
    }

    cout << result << endl;
}