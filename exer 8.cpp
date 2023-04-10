#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b, soma, raiz, op;
	cout<< "Menu" << endl;
	cout <<"1 - Somar dois números." << endl;
	cout << "2 - Raiz quadrada de um número." << endl;
	cout << "Digite sua opção: ";
	cin >> op;
	if (op ==1){
		cout << "Opção 1 escolhida: Somar dois números." << endl;
		cout << "Escreva dois números: ";
		cin >> a >> b;
		soma = a + b;
		cout << "Essa é a soma: " << soma;
	}
	else if(op == 2){
		cout << "Opção 2 escolhida: Raiz quadrada de um número." << endl;
		cout << "Insira um número para fazer a raiz quadrada: ";
		cin >> raiz;
		cout << "A raiz de " << raiz << " é: " << sqrt(raiz);
		
	}
	else
		cout << "Opção inválida.";
		return 0;
	
		
	
}
