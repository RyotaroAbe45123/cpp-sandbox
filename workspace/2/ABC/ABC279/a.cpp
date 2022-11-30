#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    int counter = 0;
    for (auto& s: S) {
        if (s == 'v') {
            counter += 1;
        }
        else if (s == 'w') {
            counter += 2;
        }
    }
    cout << counter << endl;
}