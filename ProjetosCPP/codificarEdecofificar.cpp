#include <iostream>
using namespace std;

char codificar(char);
char decodificar(char);

int main()
{
	cout << "Digite uma letra ";
	char letra;
	cin >> letra;

    char l_codificada = codificar(letra);

	cout << "Resultado da letra codificada : " << l_codificada << endl;  
	cout << "Resultado da letra decodificada  : " << decodificar(l_codificada) << endl; 

}

char codificar(char letra)
{
	char letraCodificada = letra + 3;
    return letraCodificada;
	
}

char decodificar(char letra)
{
	char letraDecodificada = letra - 3;
	return letraDecodificada;

}