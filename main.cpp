#include <iostream>
#include <vector> //dynamic array, TArray

#include "Goblin.h"
#include "Slime.h"
#include "Boar.h"
#include "Monster.h"

using namespace std;

class Parent
{
public:
	Parent() {};
	virtual ~Parent() {};
};

class Child : public Parent
{
public:
	Child() {};
	virtual ~Child() {};
};


int main()
{
	Parent* P = new Child();

	Monster* MyMonster = new Goblin();

	delete MyMonster;

	return 0;
}