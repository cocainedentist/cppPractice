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
	std::cout << "���" << std::endl;

	Monster::Move();
}