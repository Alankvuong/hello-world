// Author: Alan Vuong and Justin Chiu
// Description: Hello World in C++
//=================== main =======================

#include <iostream>
using namespace std;

int hello1Function(string name1);
int hello2SFunction(string name2);

int main()
{
	string name1 = "Alan Vuong";
	hello1Function(name1);
	string name2 = "Justin Chiu";
	hello2Function(name2);

	return 0;
}
