#include "Goblin.h"
#include <iostream>

Goblin::Goblin()
{

}

Goblin::~Goblin()
{

}

void Goblin::Move()
{
	std::cout << "°íºí¸°" << std::endl;

	Monster::Move();
}