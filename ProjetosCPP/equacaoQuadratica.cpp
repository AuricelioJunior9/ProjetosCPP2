#include <iostream>
#include <cfloat>
#include <cmath>
using namespace std;

void funcaoQuadratica(int, int, int);

int main()
{
	cout << " Digite os elementos a,b,c da funcao ax^2 + bx + c" << endl;
	int a, b, c;
	cin >> a >> b >> c;

	funcaoQuadratica(a, b, c);

	
}

void funcaoQuadratica(int a, int b, int c)
{   
	int delta = pow(b,2) - 4*a*c;
	if (delta > 0) 
	{
		cout<<("Ha duas raizes e distintas");
	}else if(delta==0)
	{
		cout << ("Ha duas raizes iguais");
	}
	else
	{
		cout << ("Nao ha raiz real");
	}
}