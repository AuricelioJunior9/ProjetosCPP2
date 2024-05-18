#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <random>
#include <ctime>
using namespace std;

int gerarNumeroAleatorio();

struct contaBancaria
{
	int indentificador = gerarNumeroAleatorio();
	char cliente[10];
	float saldo = 0;
};

void exibirConta(contaBancaria);

int main()
{
    contaBancaria nubank; 
    cout << "Digite seu nome: ";
    cin >> nubank.cliente;
    cout << endl;

    cout << " Na conta Nubank seu nome e " << nubank.cliente << endl;
    cout << " Na conta Nubank seu saldo e " << nubank.saldo << endl;
    cout << " Na conta Nubank seu indentificador e " << nubank.indentificador << endl; 

    cout << "Digite o valor do deposito para conta: ";
    cin >> nubank.saldo;
    cout << endl;

    cout << " Na conta Nubank seu nome e " << nubank.cliente << endl;
    cout << " Na conta Nubank seu saldo e " << nubank.saldo << endl;
    cout << " Na conta Nubank seu indentificador e " << nubank.indentificador << endl;



}





int gerarNumeroAleatorio() {
    // Definindo o intervalo de 10.000.000 a 99.999.999
    int min = 10000000;
    int max = 99999999;

    // Inicializa o gerador Mersenne Twister com uma seed baseada no tempo atual
    static mt19937 gerador(static_cast<unsigned int>(time(nullptr)));

    // Define a distribuição dos números aleatórios no intervalo [min, max]
    uniform_int_distribution<int> distribuicao(min, max);

    // Gera e retorna o número aleatório
    return distribuicao(gerador);
}