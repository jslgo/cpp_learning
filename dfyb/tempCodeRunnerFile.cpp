#include <iostream>
using namespace std;

int main()
{
    // 求100+97+...+4+1的值
    int x = 100, sum = 0;
    while (x >= 3) {
        sum += x;
        x -= 3;
    }
    cout << sum;
    return 0;
}