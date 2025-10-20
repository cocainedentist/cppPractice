#include "Engine.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

#define FILE "Level01.map"

int main(int argc, char* argv[])
{
	/*FEngine* MyEngine = new FEngine();
	MyEngine->Init();
	MyEngine->Run();
	MyEngine->Term();

	delete MyEngine;
	MyEngine = nullptr;*/

    ifstream file(FILE);  // 읽기용 파일 스트림

    string line;
    while (getline(file, line)) {  // 한 줄씩 읽기
        cout << line << endl;      // 출력
    }

    file.close();

	return 0;
}