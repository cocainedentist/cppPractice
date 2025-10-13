#pragma once
#include "Character.h"

class Player : public Character
{
public:
	//int HP;
	//int Gold;

	void Move();
	void Attack();
	void Collect();
};

