#include <iostream>
#include <string>
using namespace std;

char retornaUltimoCaract(char[]);

int main()
{
	const int tam = 12; 
	char palavra[tam];   

	cout << "Digite uma palavra: ";
	cin >> palavra;

	char letra = retornaUltimoCaract(palavra);   

	cout << "Em " <<palavra<< " a ultima letra e " << letra;

	return 0;
}

char retornaUltimoCaract(char pal[]) 
{
	          int ultima =  strlen(pal) - 1;
			  return pal[ultima];
}