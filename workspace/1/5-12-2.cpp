#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

vector<string> A = {"cat", "cow", "dog", "lion", "zebra", "cow"};

int main() {
    map<string, int> num;

    for (auto s: A) {
        num[s]++;
    }

    for (auto v: num) {
        cout << v.first << " " << v.second << endl;
    }
}