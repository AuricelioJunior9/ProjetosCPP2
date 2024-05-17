#include <iostream>
#include <string>
using namespace std;

int main()
{
	char nome[] = "C++ Primer Plus";

	cout << " contem " << strlen(nome) <<" carcteres";
	cout << " contem " << sizeof(nome) << " bytes";

	return 0;
}