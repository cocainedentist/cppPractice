#include "Player.h"

#include <iostream>

using namespace std;


Player::Player()
{
	cout << "Player Created." << endl;
}

Player::~Player()
{
}

void Player::Move()
{
	cout << "Player ";

	Character::Move();
}

void Player::Attack()
{
}

void Player::Collect()
{
}