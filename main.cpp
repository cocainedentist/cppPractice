#include <iostream>
#include "Goblin.h"
#include "Util.h"

using namespace std;

int main()
{
	Goblin MyGoblin;

	MyGoblin.SetGold(100);
	cout << MyGoblin.GetGold() << endl;

	return 0;
}