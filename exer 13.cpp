#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int cod, sal;
	cout << "Menu de opções: " << endl;
	cout << "1. Imposto" << endl;
	cout << "2. Novo salário" << endl;
	cout << "3. Classificação\n" << endl;
	cout << "Digite a opção desejada: ";
	cin >> cod;
	switch(cod){
		case 1:
			cout << "Insira seu salário: \n";
			cin >> sal;
				if(sal<500)
					cout << "Valor do imposto: " << sal * 0.05;
				else if(sal>500 && sal<850)
					cout << "Valor do imposto: " << sal * 0.1;
				else
					cout << "Valor do imposto: " << sal * 0.15;
		break;
		case 2:
			cout << "Insira seu salário: \n";
			cin >> sal;
				if(sal>1500)
					cout << "Seu novo salário é de R$" << sal + 25;
				else if(sal>750 && sal<1500)
					cout << "Seu novo salário é de R$" << sal + 50;
				else if(sal>450 && sal <750)
					cout << "Seu novo salário é de R$" << sal +75;
				else
					cout << "Seu novo salário é de R$" << sal + 100;
		break;
		case 3:
			cout << "Insira seu salário: \n";
			cin >> sal;
				if(sal<700)
					cout << "Mal remunerado";
				else
					cout << "Bem remunerado";
		break;
		default:
			cout << "Opção inválida";
			
		return 0;
	}
}
