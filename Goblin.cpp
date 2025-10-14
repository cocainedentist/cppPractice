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
	std::cout << "Goblin " << std::endl;

	Monster::Move();
}

void Goblin::Sprint()
{
	std::cout << "Sprint " << std::endl;
}