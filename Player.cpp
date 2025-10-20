#include "Player.h"
#include <iostream>


APlayer::APlayer()
{
	std::cout << "APlayer Constructor" << std::endl;
}

APlayer::~APlayer()
{
	std::cout << "APlayer Destructor" << std::endl;
}

void APlayer::Tick()
{
	std::cout << "APlayer Tick" << std::endl;
}