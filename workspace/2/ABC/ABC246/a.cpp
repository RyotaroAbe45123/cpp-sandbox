#include <iostream>
using namespace std;

int main() {
    int x_1, x_2, x_3, y_1, y_2, y_3, x_ans, y_ans;
    cin >> x_1 >> y_1;
    cin >> x_2 >> y_2;
    cin >> x_3 >> y_3;
    if (x_1 == x_2) x_ans = x_3;
    else if (x_1 == x_3) x_ans = x_2;
    else if (x_2 == x_3) x_ans = x_1;
    if (y_1 == y_2) y_ans = y_3;
    else if (y_1 == y_3) y_ans = y_2;
    else if (y_2 == y_3) y_ans = y_1;
    cout << x_ans << " " << y_ans << endl;
}