#include <iostream>
#include <vector> //dynamic array, TArray

#include "Goblin.h"
#include "Slime.h"
#include "Boar.h"

using namespace std;

int main()
{
	srand((unsigned int)(time(nullptr)));

	vector<Monster*> Monsters;

	int GoblinCount = rand() % 10 + 1; // 1-10
	int SlimeCount = 0;
	int BoarCount = 0;
	if (GoblinCount < 10)
	{
		SlimeCount = rand() % (10 - GoblinCount) + 1; // 
	}
	else
	{
		SlimeCount = 0;
	}
	if (GoblinCount + SlimeCount < 10)
	{
		BoarCount = rand() % (10 - SlimeCount - GoblinCount) + 1;
	}
	else
	{
		BoarCount = 0;
	}

	for (int i = 0; i < GoblinCount; ++i)
	{
		Monsters.push_back(new Goblin);
	}
	
	if (SlimeCount > 0)
	{
		for (int i = 0; i < SlimeCount; ++i)
		{
			Monsters.push_back(new Slime);
		}
	}
	
	if (BoarCount > 0)
	{
		for (int i = 0; i < BoarCount; ++i)
		{
			Monsters.push_back(new Boar);
		}
	}

	for (auto M : Monsters)
	{
		M->Move();
	}

	for (auto M : Monsters)
	{
		delete M;
		M = nullptr;
	}

	Monsters.clear();
	



	return 0;
}
