#pragma once

#include "Util.h"
#include "Monster.h"

class Boar : public Monster
{
public:
	Boar()
	{

	}
	~Boar()
	{

	}

	virtual void Move() override;

	void Bump();
};