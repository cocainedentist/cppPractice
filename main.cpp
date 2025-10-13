#include <iostream>

using namespace std;

class Character
{
public:
	Player Player;
	Monster Slime;
	Monster Wildboar;
	Monster Goblin;
	int HP = 10;

	void Move()
	{

	}
};

class Player
{
public:
	Monster M;
	int Damage = 0;
	int CurrentGold = 0;

	void Attack()
	{
		if (M.HP <= 0)
		{
			GetGold();
		}
	}
	void Move()
	{

	}
	int GetGold()
	{

	}
};

class Monster
{
public:
	int HP = 10;
	int Gold;

	int Death()
	{
		return Gold;
	}
};

int main()
{
	return 0;
}