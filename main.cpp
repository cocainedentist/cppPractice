#include <iostream>

using namespace std;

int main()
{
	////int Number[10] = { 0, 1, 2, 3, 4, 5 };

	////int* P = Number;

	//////cout << *(Number+1) << endl;
	//////cout << Number[1] << endl;
	//////cout << Number++ << endl;
	////cout << *(++P) << endl;
	////cout << *(P) << endl;


	//int* P = new int[10];

	//P[1] = 1;  //=>  *(P+1) = 1

	//cout << *(P + 1) << endl;

	int* P = new int;

	delete P;

	*P = 10;




	return 0;
}