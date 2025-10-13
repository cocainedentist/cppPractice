#include <iostream>
#include "World.h"
#include "Slime.h"
#include "Player.h"
#include "Character.h"

using namespace std;


int main()
{
	Slime* MySlime;

	MySlime = new Slime();
	MySlime->Move();

	delete MySlime;

	return 0;
}
