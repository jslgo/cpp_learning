
// Path: dfyb/1003.cpp
#include <iostream>
using namespace std;

int main()
{
    int num, res = 0;
    cin >> num;
    for (; num % 2 == 0; num /= 2){
        res++;
    }
    cout << res;
    return 0;
}