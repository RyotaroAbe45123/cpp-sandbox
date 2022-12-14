#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    int answer = -1;
    for (int i = S.size()-1; i >= 0; --i) {
        if (S[i] == 'a') {
            answer = i+1;
            cout << answer << endl;
            return 0;
        }
    }
    cout << answer << endl;
    return 0;
}