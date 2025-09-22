#include <iostream>
#include <string>

using namespace std;

int main() {
	// char Greeting[6] = { 'H', 'E', 'L', 'L', 'O'};
	// char Greeting[6] = "Hello";
	
	string Greeting = "Hello";
	string Greeting2 = "World";

	// 'H' != "H"
	// "H" == 'H', '\0'

	cout << Greeting + " " + Greeting2 << endl;
}