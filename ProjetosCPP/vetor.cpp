#include <iostream>
using namespace std;

int main()
{
	int vet[5] = { 10,80,30,45,15 };
	int posicao,novoValor;
	cout << "Vetor: " << vet[0] << " " << vet[1] << " "  << vet[2] << " " << vet[3] << " " << vet[4] << endl;
	cout << "---------------------" << endl;
	cout << "Alterar posição: ";
	cin >> posicao;
	cout << "Novo Valor: ";
	cin >> novoValor; 
	cout << "---------------------"<< endl;;
	vet[posicao] = novoValor; 
	cout << "Vetor: " << vet[0] << " " << vet[1] << " " << vet[2] << " " << vet[3] << " " << vet[4] << endl;
	




}