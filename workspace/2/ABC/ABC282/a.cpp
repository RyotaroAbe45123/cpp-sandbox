#include <iostream>
#include <string>
using namespace std;

int main() {
    int K;
    cin >> K;
    string S = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << S.substr(0, K) << endl;
}