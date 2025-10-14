#include <iostream>
#include <vector>

#include "Goblin.h"
#include "Slime.h"

using namespace std;


#define AMOUNT 5

int main()
{
	vector<Slime> Slimes;
	vector<Goblin> Goblins;
	srand(time(0));

	int Random = rand() % AMOUNT;
	for (int i = 0; i < Random; ++i)
	{
		Slimes.push_back(Slime());
	}

	Random = rand() % AMOUNT;
	for (int i = 0; i < Random; ++i)
	{
		Goblins.push_back(Goblin());
	}

	for (auto Value : Slimes)
	{
		Value.Move();
	}

	for (auto Value : Goblins)
	{
		Value.Move();
	}

	return 0;
}