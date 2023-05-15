
// Path: dfyb/1003.cpp
#include<iostream>
using namespace std;

int main () {
    // 用高斯公式计算从1累加到n的和
    int x, y = 1;
    cin >> x;
    while (y <= x) {
        x = x + y;
        y = y + 1;
        cout << "x: " << x << "\n";
        cout << "y: " << y << "\n";
    }
    cout << x;
    return 0;
}