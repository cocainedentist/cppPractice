#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int pocket[53] = { 0, };

    for (int i = 0; i < 52; ++i)
    {
        pocket[i] = i + 1;
    }
    
    srand((unsigned int)time(nullptr));
    for (int i = 0; i < 52 * 100; ++i)
    {
        int firstPick = rand() % 52;
        int secondPick = rand() % 52;
        int _temp = 0;

        _temp = pocket[firstPick];
        pocket[firstPick] = pocket[secondPick];
        pocket[secondPick] = _temp;
    }

    for (int i = 0; i < 52; ++i)
    {
        cout << pocket[i] << endl;
    }

    return 0;
}
