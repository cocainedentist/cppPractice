#pragma once
#include "Actor.h"

class APlayer : public AActor
{
public:
	APlayer();
	virtual ~APlayer();

	virtual void Tick() override;

	void Jump(void)
	{

	}
	void Jump(int a)
	{

	}
	void Jump(float b)
	{

	}

};

