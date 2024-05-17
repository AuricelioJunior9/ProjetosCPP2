#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

struct complexo
{
	float real;
	float img;
};

complexo operator+(complexo, complexo);  
//void exibir(complexo);
 ostream& operator<<(ostream&,complexo&); 
//complexo ler(); 
 istream& operator>>(istream&, complexo&); 



int main() 
{
	cout << "Digite os complexos\n";

	complexo c1;
	cin >> c1;
	complexo c2; 
	cin >> c2;
	//complexo c2 = ler();
	cout << "Primeiro complexo:";
	cout << c1;
	cout << endl;
	cout << "Primeiro complexo:";
	cout << c2;
	cout << endl;
	cout << "A Soma dos numeros:";
	complexo res = c1 + c2;

	cout << res;

}

complexo operator+(complexo a, complexo b)
{
	complexo c;
	c.real = a.real + b.real;; 
	c.img = a.img + b.img; 
	return c;
}

ostream& operator<<(ostream& os,complexo &d)  
{
	os << d.real;
	os << showpos;
	os << d.img;
	os << noshowpos;
	os << "i";

	return os;
}

//complexo ler()
//{
//	complexo temp;
//	cin >> temp.real;
//	cin >> temp.img;
//	cin.ignore();
//
//	return temp;
//}

istream& operator>>(istream& is , complexo& temp)
{
	cin >> temp.real;
	cin >> temp.img;
	cin.ignore();

	return is; 
} 