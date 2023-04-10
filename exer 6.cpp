#include <iostream>
using namespace std;

int main(){
	int a, b;
	cout << "digite um numero: ";
	cin >> a;
	b = a%2;
	if(b==0)
		cout << "Par";
	else
		cout << "Impar";
	return 0;
}
