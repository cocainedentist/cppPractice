#include <iostream>

using namespace std;

void Swap(int* pA, int* pB)
{
    int _temp = *pA;
    *pA = *pB;
    *pB = _temp;
}

int main()
{
    int A = 10;
    int B = 20;

    Swap(&A, &B);

    cout << A << endl;
    cout << B << endl;

    cout << sizeof(int*) << endl;


    
    



    return 0;
}
