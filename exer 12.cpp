#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int cod, sal1, sal2, sal3, sal4, sal5, aum1, aum2, aum3, aum4, aum5, sal1f, sal2f, sal3f, sal4f, sal5f;
	cout << "Insira um código:\n" << endl;
	cout << "1. Escrituário" <<endl;
	cout << "2. Secretário" << endl;
	cout << "3. Caixa" << endl;
	cout << "4. Gerente" << endl;
	cout << "5. Diretor \n" << endl;
	cin >> cod;
	switch(cod){
		case 1:
		cout << "Cargo: Escrituário" << endl;
		cout << "Digite o salário atual: ";
		cin >> sal1;
		aum1 = sal1 * 0.5;
		sal1f = sal1 + aum1;
		cout << "Esse é seu aumento: " <<aum1 <<endl;
		cout << "Esse é o seu salário final: " << sal1f << endl;
		break;
	
		case 2:
		cout << "Cargo: Secretário" << endl;
		cout << "Digite o salário atual: ";
		cin >> sal2;
		aum2 = sal2 * 0.35;
		sal2f = sal2 + aum2;
		cout << "Esse é seu aumento: " <<aum2 <<endl;
		cout << "Esse é o seu salário final: " << sal2f << endl;
		break;

		case 3:
		cout << "Cargo: Caixa" << endl;
		cout << "Digite o salário atual: ";
		cin >> sal3;
		aum3 = sal3 * 0.2;
		sal3f = sal3 + aum3;
		cout << "Esse é seu aumento: " <<aum3 <<endl;
		cout << "Esse é o seu salário final: " << sal3f << endl;
		break;
	
		case 4:
		cout << "Cargo: Gerente" << endl;
		cout << "Digite o salário atual: ";
		cin >> sal4;
		aum4 = sal4 * 0.1;
		sal4f = sal4 + aum4;
		cout << "Esse é seu aumento: " <<aum4 <<endl;
		cout << "Esse é o seu salário final: " << sal4f << endl;
		break;
	
		case 5:
		cout << "Cargo: Diretor" << endl;
		cout << "Digite o salário atual: ";
		cin >> sal5;
		
		cout << "Esse é seu aumento: Sem aumento" <<endl;
		cout << "Esse é o seu salário final: " << sal5 << endl;
		break;
	
		default:
		cout << "Opção inválida";
	}
	
	
	return 0;
}
