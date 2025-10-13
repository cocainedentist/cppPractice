#pragma once

#include "Character.h"

class Monster : public Character
{
public:
	Monster();
	~Monster();

	void Drop();
	void Destroy();
};
