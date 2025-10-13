#include "Slime.h"

#include <iostream>
using namespace std;

Slime::Slime()
{
	cout << "Slime Created" << endl;
}

Slime::~Slime()
{
	cout << "Slime Destroyed" << endl;
}

void Slime::Move()
{
	cout << "Sliped." << endl;
}