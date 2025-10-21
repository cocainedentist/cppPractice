#include "DynamicArray.h"
#include <iostream>

TDynamicArray::TDynamicArray()
{

}

TDynamicArray::~TDynamicArray()
{
}

void TDynamicArray::PrintArray()
{
    for (int i = 0; i < Size; ++i)
    {
        std::cout << Data[i] << std::endl;
    }
}

void TDynamicArray::PushBack(int Value)
{
	if (Index < Size)
	{
		Data[Index] = Value;
		Index++;
	}
	else
	{
		// 배열 사이즈 늘린다. = 새로운 배열을 만든다
        int* NewData = new int[Size + 1];

        // 기존 배열에서 값 옮기기
        for (int i = 0; i < Size; ++i)
        {
            NewData[i] = Data[i];
        }

        // 기존 배열 삭제
        delete[] Data;

        // 포인터와 크기 갱신
        Data = NewData;
        Size = Size + 1;

        Data[Index] = Value;
        Index++;

	}

}
