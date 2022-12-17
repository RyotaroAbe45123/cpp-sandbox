#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;
    int counter = 0;
    for (int i = 0; i < S.size(); ++i) {
        if (S[i] == '"') {
            ++counter;
            cout << '"';
        }
        else if (S[i] == ',') {
            if (counter % 2 == 0) {
                cout << '.';
            }
            else {
                cout << ',';
            }
        }
        else {
            cout << S[i];
        }
    }
    cout << endl;
    return 0;
}