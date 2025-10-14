#include "Goblin.h"

Goblin::Goblin() : Gold(100), HP(100)
{
	Gold = 100;
	HP = 100;
}

Goblin::~Goblin()
{
}

void Goblin::SetHP(int Value)
{
	HP = Value;
}

int Goblin::GetHP()
{
	return HP;
}