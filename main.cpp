#include <iostream>
#include "World.h"
#include "Slime.h"
#include "Player.h"
#include "Character.h"

using namespace std;


//1. ������, �Ҹ��� ������ ����
class Ŭ������
{
public:
	Ŭ������(); //������
	~Ŭ������(); //�Ҹ���
};

Ŭ������::Ŭ������()
{
}

Ŭ������::~Ŭ������()
{
}


class B
{
public:
	B();
	~B();
};

B::B()
{
	cout << "B 생성자" << endl;
}

B::~B()
{
	cout << "B 소멸자" << endl;
}


class A : public B
{
public:
	A();
	~A();

};

A::A()
{
	cout << "A 생성자" << endl;
}

A::~A()
{
	cout << "A 소멸자" << endl;
}



//2. ������ �Ҹ� ȣ�� ����

int main()
{
	A* a = new A();

	delete a;

	return 0;
}
