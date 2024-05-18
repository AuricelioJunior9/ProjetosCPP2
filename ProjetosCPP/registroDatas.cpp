#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

struct data1
{
	int dia;
	int mes;
	int ano;
};

int diasDeVida(data1, data1); 

istream& operator>>(istream&, data1&);
ostream& operator<<(ostream&, data1&);
int operator-(data1 hoje, data1 nasc); 




int main()
{
	
	data1 nascimento;
	data1 atual; 
	cout << "Digite a data de nascimento: ";
	cin >> nascimento;
	cout << "Digite a data atual: "; 
	cin >> atual;

	cout << "Nascimento :" << nascimento << endl;
	cout << "Data atual :" << atual << endl;


	cout << "Voce tem " << atual - nascimento << " dias de vida." << endl;

} 

int operator-(data1 h, data1 n)
{
	data1 res;
	int dias;
	res.ano =  h.ano - n.ano;
	res.mes = h.mes - n.mes;
	res.dia = h.dia - n.dia; 
	dias = (res.ano * 365) + (res.mes * 31) + (res.dia);
	return dias;
}

istream& operator>>(istream& is, data1& temp)  
{
	cin >> temp.dia; 
	cin.ignore();
	cin >> temp.mes;
	cin.ignore(); 
	cin >> temp.ano; 
	 
	return is;  
}

ostream& operator<<(ostream& os , data1& d)
{
	os << d.dia;
	os << "/";
	os << d.mes;
	os << "/";
	os << d.ano;

	return os;
}

