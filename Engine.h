#pragma once
class FEngine
{
public:
	FEngine();
	virtual ~FEngine();

	void Init(); //초기화
	void Run(); //실행
	void Term(); //종료

protected:
	void Input();
	void Tick();
	void Render();

	bool bIsRunning = true;

};

