#pragma once

#include <string.h>
#include <stdio.h>

template<typename T>
class TDynamicArray
{
public:
	TDynamicArray()
	{
	}

	virtual ~TDynamicArray()
	{

	}

	T* Data = nullptr;

	int Size = 0;
	int Capacity = 0;

	int Index = 0;

	void PushBack(T Value)
	{
		if (Index < Capacity) // �ϳ� �����ص� �ȴ�. Index�� ��ĥ���� Size�� ��ĥ���� �������.
		{
			Data[Index] = Value;
			Index++;
			Size++;
		}
		else
		{
			//Time, Space
			//Data, Size = 5
			//[1][2][3][4][5]
			//NewArray, Size = 1000000001
			//[][][][][][]
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
			int* NewArray = new int[Capacity * 2];

			//memory copy
			// ���� �迭���� �� �ű��
			for (int i = 0; i < Size; ++i)
			{
				NewArray[i] = Data[i];
			}
			//memcpy(Data, NewArray, Size * sizeof(int));
			memmove(Data, NewArray, Size * sizeof(int));

			//NewArray, Size = 6
			//[1][2][3][4][5][]

			if (Data) // ������ ó�� Data�� nullptr�̱� ������ Data�� �����Ҷ��� ���� �� �ֵ��� ����ó��.
			{
				// ���� �迭 ����
				delete[] Data;
			}
			Data = NewArray;
			Capacity = Capacity * 2;
			Size++;

			//[1][2][3][4][5][6]
			Data[Index] = Value;
			Index++;
		}
	}
};