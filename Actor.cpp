#include "Actor.h"
#include <iostream>

AActor::AActor()
{
	std::cout << "AActor Constructor" << std::endl;
}

AActor::~AActor()
{
	std::cout << "AActor Destructor" << std::endl;
}

void AActor::Tick()
{
	std::cout << "AActor Tick" << std::endl;
}
