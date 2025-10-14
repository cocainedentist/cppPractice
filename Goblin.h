#pragma once

#include "Util.h"

//ĸ��ȭ, Encapsulation
class Goblin
{
	//���� ������
public:
	Goblin();
	~Goblin();

	//accessor
	void SetHP(int Value);
	int GetHP();

	//Getter(int, Gold);
	//Setter(int, Gold);

	Property(int, Gold);

	//Property
private:
	int HP = 100;
	int Gold = 100;
};
