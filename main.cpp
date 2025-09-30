#include <iostream>

using namespace std;

int main()
{
	int N = 0;
	unsigned long long X = 0;
	unsigned long long Result = 0;

	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		cin >> X;
		unsigned long long NPOT = 2;
		for (int j = 1; j < 64; ++j)
		{
			if (NPOT >= X)
			{
				if (i == 0)
				{
					Result = Result ^ NPOT;
					break;
				}
				else
				{
					Result = Result ^ NPOT;
				}
				break;
			}
			NPOT = NPOT << 2; // More Faster Than	NPOT = NPOT * 2;
		}
	}
	cout << Result << endl;
}