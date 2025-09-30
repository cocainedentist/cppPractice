#include <iostream>

using namespace std;

class Character
{
	
	void BumpWall()
	{

	}
	
	void CharacterMove(char KeyInput)
	{

	}

	void IsArrive()
	{

	}
};

class World
{
public:
	int Wall[10];
	int Floor[10];

	Character Player;
	Character Monster;
	int Destination;
};

int main()
{
	World world[10][10];

	return 0;
}