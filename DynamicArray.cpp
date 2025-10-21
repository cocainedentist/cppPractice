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
		// �迭 ������ �ø���. = ���ο� �迭�� �����
        int* NewData = new int[Size + 1];

        // ���� �迭���� �� �ű��
        for (int i = 0; i < Size; ++i)
        {
            NewData[i] = Data[i];
        }

        // ���� �迭 ����
        delete[] Data;

        // �����Ϳ� ũ�� ����
        Data = NewData;
        Size = Size + 1;

        Data[Index] = Value;
        Index++;

	}

}
