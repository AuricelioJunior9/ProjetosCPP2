#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	const int tam = 12;
	char data1[tam];
	char data2[tam];
	char data3[tam];
	char frase[100] = "";
	char espaco1[3] = {',',' ','\0'};   
	char espaco2[4] = { ' ','e',' ','\0'};
	char finalFrase[] = " sao belas festas.";

	cout << "Quais suas datas comemorativas preferidas \n";
	cin.getline(data1,tam);
	cin.getline(data2,tam); 
	cin.getline(data3,tam);  

	strcat(frase, data1);   
	strcat(frase, espaco1);   
	strcat(frase, data2);  
	strcat(frase, espaco2); 
	strcat(frase, data3);
	strcat(frase, finalFrase); 
	cout << endl;

	cout << frase;
	if (strcmp(data1, "Natal") == 0 || strcmp(data2, "Natal") == 0 || strcmp(data3, "Natal") == 0)
		cout << "Natal também é uma das minhas datas preferidas!";
	else
		cout << "\n";
	return 0;
}