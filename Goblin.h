#pragma once

#include "Util.h"
#include "Monster.h"

//C++
//ĸ��ȭ, Encapsulation
class Goblin : public Monster
{
//���� ������
public:
	Goblin();
	~Goblin();

	virtual void Move() override;

};

