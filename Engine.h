#pragma once
class FEngine
{
public:
	FEngine();
	virtual ~FEngine();

	void Init(); //�ʱ�ȭ
	void Run(); //����
	void Term(); //����

protected:
	void Input();
	void Tick();
	void Render();

	bool bIsRunning = true;

};

