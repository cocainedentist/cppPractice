#include "Engine.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include "DynamicArray.h"

int main()
{
	TDynamicArray<int> MyDynamicArray;

	for (int i = 0; i < 18; i++)
	{
		MyDynamicArray.PushBack(i);
	}

	MyDynamicArray.PrintArray();

	return 0;
}