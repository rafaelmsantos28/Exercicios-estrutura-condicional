#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int sal; ht, nd, vdp, hx, salmes, vht, vht1, salb, sall, impos1, impos2;
	cout << "Insira seu salário: ";
	cin >> sal;
	vht1 = hx * 1.5;
	vht = (0.2 * sal) + vht1;
	salmes = ht * vht;
	vdp = nd * 32;
	impos1 = 0.1*salb;
	impos2 = 0.2 * salb;
	
	salb = salmes + vdp + vht;
	if(salb <= 200){
	
		cout << "Isento de imposto";
		cout << "Gratificação: " << 
		
	}
	else if(salb>200 && sal <=500)
		cout << "Imposto de renda de: R$" << impos1;
	else
		cout << "Imposto de renda de: R$" << impos2;
		
	sall = salb - impos1;
	
	
	
	
}
