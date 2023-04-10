#include <iostream>
using namespace std;

int main(){
	int a, b, c, m, ex;
	cout << "Nota da prova A: ";
	cin >> a;
	cout << "Nota da prova b: ";
	cin >> b;
	cout << "Nota da prova c: ";
	cin >> c;
	m = (a + b + c)/3;
	if (0 <= m && m < 3){
	
		cout << "Reprovado";}
	else if (3 <= m && m <7){
	
		cout << "Exame" << endl;
		ex = 12 - m;
		cout << "Deve tirar nota: " << ex << " para ser aprovado.";
		return 1;}
	else{
	
		cout << "Aprovado";}
		return 0;
}
