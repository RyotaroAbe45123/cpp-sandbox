#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string a = "0123456789ABCDEF";
    if (n <= 16) {
        cout << '0' << a[n%16] << endl;
    }
    else {
        cout << a[n/16] << a[n%16] << endl;
    }
}