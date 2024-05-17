#include <iostream>
#include <string>
using namespace std;

char retornaUltimoCaract(char[]);

int main()
{
	const int tam = 12;
	char senha[] = "junior";
	char senha1[tam];

    cout << "Digite sua senha : \n";
	cin >> senha1;

	if (strcmp(senha, senha1)==0)
		cout << "Senha correta";
	else
	   cout << "Senha incorreta";

	return 0;
}