#include <iostream>
using namespace std;

int main()
{
	const int tam = 30;
	char nome[tam], letra; 
	cout << "Qual e o nome? ";
	cin.getline(nome,tam);
	cout << "Que conceito voce merece? ";
	cin >> letra;
	char letra1 = letra + 1;
	cout << "Bom dia, " << nome << ". " << "Seu conceiro e " << letra1;
	

}