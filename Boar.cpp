#include "Boar.h"
#include <iostream>

Boar::Boar()
{

}

Boar::~Boar()
{

}

void Boar::Move()
{
	std::cout << "Boar " << std::endl;
	Monster::Move();
}

void Boar::Bump()
{
	std::cout << "Bump " << std::endl;
}