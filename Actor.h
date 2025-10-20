#pragma once
#include "Vector.h"

//2D

class AActor
{
public:
	AActor();
	virtual ~AActor();

	//vftbl
	//override
	virtual void Tick(); // it can be redefined by child.
	
	__forceinline FVector2D GetActorLocation() const
	{
		return Location;
	}

	void SetActorLocation(FVector2D Value)
	{
		//Location = Value;
		Location.X = Value.X;
		Location.Y = Value.Y;
	}

private:
	FVector2D Location;
};

