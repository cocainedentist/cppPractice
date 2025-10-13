#pragma once

#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "Boar.h"

//한번 만들면 고정 됨
//정적 생성
//메모리 공간 잡을 계획을 설계
class World
{
public:
	Character Characters[25];
	//Player Players[10];
	//
	//Goblin Goblins[5];
	//Slime Slimes[5];
	//Boar Boars[5];
};

