#include <iostream>
using namespace std;

int main(){
	int dia1, dia2, mes1, mes2, ano1, ano2;
	cout << "Insira a primeira data: ";
	cin >> dia1 >> mes1 >> ano1;
	cout << "Insira a segunda data: ";
	cin >> dia2 >> mes2 >> ano2;
	if(ano1>ano2)
	cout << "A maior data é: " << dia1 << "/" << mes1 << "/" << ano1;
	else if(ano2>ano1)
	cout << "A maior data é: " << dia2 << "/" << mes2 << "/" << ano2;
	else if(mes1>mes2)
	cout << "A maior data é: " << dia1 << "/" << mes1 << "/" << ano1;
	else if(mes2>mes1)
	cout << "A maior data é: " << dia2 << "/" << mes2 << "/" << ano2;
	else if(dia1>dia2)
	cout << "A maior data é: " << dia1 << "/" << mes1 << "/" << ano1;
	else if (dia2>dia1)
	cout << "A maior data é: " << dia2 << "/" << mes2 << "/" << ano2;
	else
	cout << "As datas sao identicas";
	return 0;
	
}
