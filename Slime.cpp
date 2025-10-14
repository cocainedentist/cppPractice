#include "Slime.h"
#include <iostream>

void Slime::Move()
{
	std::cout << "Slime ";
	Monster::Move();
}

void Slime::Slide()
{
	std::cout << "Slide " << std::endl;
}