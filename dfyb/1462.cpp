
#include <iostream>
using namespace std;

int main()
{
    int startHour, startMinute, endHour, endMinute;
    cin >> startHour >> startMinute >> endHour >> endMinute;
    int time = (endHour - startHour) * 60 + (endMinute - startMinute);
    cout << time / 60 << " " << time % 60;
    return 0;
}