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
	if (Index < Capacity) // �ϳ� �����ص� �ȴ�. Index�� ��ĥ���� Size�� ��ĥ���� �������.
	{
		Data[Index] = Value;
		Index++;
        Size++
	}
	else
	{
        /*
        1. ũ�⸦ * 2 ��ŭ�� �÷��ٰ��̱� ������ ó�� Size�� 0�� �� ����ó���� �ؾ��Ѵ�.
        2. for������ Size��ŭ �̵��϶�� ���, ������ ó���� ���� 0�̶� �ȿ��������ϴµ� 1�� �ٲ��༭ ������ ��(������ ���� ���µ� �����̶���).
        3. �׷��� ���� ũ��(Capacity)�� �ڷ� ũ��(Size)�� ���� ������ش�.
        */
        if (Capacity == 0)
        {
            Capacity = 1;
        }
        // �迭 ������ �ø���. = ���ο� �迭�� �����
        int* NewData = new int[Capacity * 2];

        // ���� �迭���� �� �ű��
        for (int i = 0; i < Size; ++i)
        {
            NewData[i] = Data[i];
        }

        if (Data) // ������ ó�� Data�� nullptr�̱� ������ Data�� �����Ҷ��� ���� �� �ֵ��� ����ó��.
        {
            // ���� �迭 ����
            delete[] Data;
        }

        // �����Ϳ� ũ�� ����
        Data = NewData;
        Capacity = Capacity * 2;
        Size++;

        Data[Index] = Value;
        Index++;

	}

}
