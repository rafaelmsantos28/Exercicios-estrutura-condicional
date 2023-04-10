#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	cout << "Digite dois numeros: ";
	cin >> a >> b;
	if (a>b)
		cout << a << " é maior que " << b;
	else if(b>a)
		cout << b << " é maior que " << a;
	else
		cout << a << " é igual a " << b;
	return 0;
}
