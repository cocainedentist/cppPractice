#include <iostream>

using namespace std;


class State
{
public:
	int ID;
	string StateName;
};

class Transition
{
public:
	int CurrentState;
	string Condition;
	int NextState;
};

class FSM
{
public:
	FSM()
	{

	}
	State States[4];
	Transition Transitions[5];

	void Transit(State InState, string Condition)
	{

	}
};

int main()
{
	State States[4];
	States[0].ID = 1;
	States[0].StateName = "Patrol";
	States[1].ID = 2;
	States[1].StateName = "Chase";
	States[2].ID = 3;
	States[2].StateName = "Attack";
	States[3].ID = 4;
	States[3].StateName = "Death";

	return 0;
}