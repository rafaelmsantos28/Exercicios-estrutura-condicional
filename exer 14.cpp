#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int sal;
	cout << "Insira seu salário: ";
	cin >> sal;
	if(sal <=500)
		cout << "Seu novo salário é de R$" << (sal*1.05) + 150;
	else if(sal>500 && sal<=600)
		cout << "Seu novo salário é de R$" << (sal*1.12) + 150;
	else if(sal >600 && sal <1200)
		cout << "Seu novo salário é de R$" << (sal*1.12) + 100;
	else
		cout << "Seu novo salário é de R$" << (sal + 100);
	return 0;
}
