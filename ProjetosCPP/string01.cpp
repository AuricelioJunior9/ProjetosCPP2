#include <iostream>
using namespace std;

int main()
{
	const int tam = 12;
	char nome1[tam], nome2[tam];
	cout << "Primeiro nome? ";
	cin >> nome1;
	cout << "Segundo nome? ";
	cin >> nome2;
	cout << "Bom dia, " << nome1 << " " << nome2 << ". \n";
	cout << "Seja bem vindo " << nome1[0] << nome2[0] << "!";

}