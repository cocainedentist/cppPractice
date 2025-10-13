#include "Player.h"
#include <iostream>

using namespace std;


void Player::Move()
{

	Character::Move();
	Character::Move();
	Character::Move();

	HP = 100;

	cout << "Player ";

	Character::Move();

}

void Player::Attack()
{
}

void Player::Collect()
{
}
