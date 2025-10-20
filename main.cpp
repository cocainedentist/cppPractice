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

    ifstream file(FILE);

    string line;
    while (getline(file, line))
	{
        cout << line << endl;
    }

    file.close();

	return 0;
}