#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    cout << char('A' + ((x-1) / n)) << endl;
}