#include<iostream>

using namespace std;

int main () {
    int n, i = 1;
    cin >> n;
    while (i <= n) {
        // 二进制按位与1后等于1, 则为奇数
        if ((i & 1) == 1) {
            cout << i << '\n';
        }
        ++i;
    }
    return 0;
}