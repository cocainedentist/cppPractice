#include <iostream>
#include <vector> //dynamic array, TArray

#include "Goblin.h"
#include "Slime.h"
#include "Boar.h"
#include "Monster.h"

using namespace std;


int main()
{
	vector<Monster*> Monsters;
	srand(time(nullptr));

	for (int i = 0; i < 10; ++i)
	{
		if (rand() % 3 == 0)
		{
			Monsters.push_back(new Slime);
		}
		else if (rand() % 3 == 1)
		{
			Monsters.push_back(new Boar);
		}
		else
		{
			Monsters.push_back(new Goblin);
		}

	}

	for (auto M : Monsters)
	{
		Slime* S = dynamic_cast<Slime*>(M);
		Goblin* G = dynamic_cast<Goblin*>(M);
		Boar* B = dynamic_cast<Boar*>(M);
		if (S)
		{
			S->Slide();
		}
		if (G)
		{
			G->Sprint();
		}
		if (B)
		{
			B->Bump();
		}
	}

	for (auto M : Monsters)
	{
		delete M;
		M = nullptr;
	}
	
	Monsters.clear();
	return 0;
}