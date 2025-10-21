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
		if (Index < Capacity) // 하나 삭제해도 된다. Index로 퉁칠꺼야 Size로 퉁칠꺼야 상관없음.
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
			1. 크기를 * 2 만큼씩 늘려줄것이기 때문에 처음 Size가 0일 때 예외처리를 해야한다.
			2. for문에서 Size만큼 이동하라고 명령, 하지만 처음이 원래 0이라서 안움직여야하는데 1로 바꿔줘서 오류가 남(움직일 곳이 없는데 움직이라함).
			3. 그래서 공간 크기(Capacity)랑 자료 크기(Size)랑 따로 만들어준다.
			*/
			if (Capacity == 0)
			{
				Capacity = 1;
			}
			// 배열 사이즈 늘린다. = 새로운 배열을 만든다
			int* NewArray = new int[Capacity * 2];

			//memory copy
			// 기존 배열에서 값 옮기기
			for (int i = 0; i < Size; ++i)
			{
				NewArray[i] = Data[i];
			}
			//memcpy(Data, NewArray, Size * sizeof(int));
			memmove(Data, NewArray, Size * sizeof(int));

			//NewArray, Size = 6
			//[1][2][3][4][5][]

			if (Data) // 지금은 처음 Data가 nullptr이기 때문에 Data가 존재할때만 지울 수 있도록 예외처리.
			{
				// 기존 배열 삭제
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