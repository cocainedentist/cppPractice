#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int ball = 0;
int pickedBall[53] = { 0, };

void ballPicker()
{
    bool task = true;
    while (task)
    {
        ball = rand() % 52 + 1;
        if (pickedBall[ball] == 0)
        {
            task = false;
            pickedBall[ball] = 1;
        }
    }
    cout << "Picked Ball: " << ball << endl;
}

int main() {
    srand(time(NULL));

    for (int i = 0; i < 52; ++i)
    {
        ballPicker();
    }

    cout << "Completed!" << endl;
    return 0;
}
