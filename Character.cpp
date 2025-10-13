#include "Character.h"

#include <iostream>

using namespace std;

Character::Character()
{
	cout << "Character Created" << endl;
	HP = 10;
	Gold = 0;
}

Character::~Character()
{
	cout << "Character Destroyed" << endl;
}

void Character::Move()
{
	cout << "Moved." << endl;
}