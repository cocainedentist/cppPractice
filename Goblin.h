#pragma once

#include "Util.h"
#include "Monster.h"

//C++
//Ä¸½¶È­, Encapsulation
class Goblin : public Monster
{
//Á¢±Ù Á¦ÇÑÀÚ
public:
	Goblin();
	~Goblin();

	virtual void Move() override;

};

