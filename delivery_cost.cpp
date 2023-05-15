#include <iostream>
using namespace std;

int main () {
    int weight;
    char isEmergency;
    int cost = 8;
    cin >> weight >> isEmergency;
    if (weight > 1000){
        int overWeight = weight - 1000;
        if (overWeight % 500 == 0) {
            cost += overWeight / 500 * 4;
        } else {
            cost += (overWeight / 500 + 1) * 4;
        }
    }
    if (isEmergency == 'y') {
        cost += 5;
    }
    cout << cost;
    return 0;
}