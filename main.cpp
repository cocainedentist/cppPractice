#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define MAX_SIZE 52

int main() {
    int pocket[53] = { 0, };

    for (int i = 0; i < MAX_SIZE; ++i)
    {
        pocket[i] = i + 1;
    }
    
    srand((unsigned int)time(nullptr));
    for (int i = 0; i < MAX_SIZE * 100; ++i)
    {
        int firstPick = rand() % MAX_SIZE;
        int secondPick = rand() % MAX_SIZE;
        int _temp = 0;

        _temp = pocket[firstPick];
        pocket[firstPick] = pocket[secondPick];
        pocket[secondPick] = _temp;
    }

    for (int i = 0; i < MAX_SIZE; ++i)
    {
        cout << pocket[i] << endl;
    }

    return 0;
}
