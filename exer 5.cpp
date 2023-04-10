#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b, c, d;
	cout << "Escreva três números na ordem crescente: ";
	cin >> a >> b >> c;
	cout << "Digite um número (fora de ordem): ";
	cin >> d;
	if (d>c)
		cout << a << b << c << d;
	else if (d> b && d < c)
		cout << a << b << d << c;
	else if (d > a && d<b)
		cout << a << d << b << c;
	else
		cout << d << a << b << c;
	return 0;
	
}
