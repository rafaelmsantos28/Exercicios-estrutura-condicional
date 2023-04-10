#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int lab, av, ex, mp;
	cout << "Insira a nota de laboratório: ";
	cin >> lab;
	cout << "Insira a nota da avaliação semestral: ";
	cin >> av;
	cout << "Insira a nota do exame final: ";
	cin >> ex;
	mp = (lab*2 + av*3 + ex*5)/(2+3+5);
		if(8 <= mp && mp<= 10)
			cout << "Conceito A";
		else if(7 <= mp && mp <8)
			cout << "Conceito B";
		else if (6 <= mp && mp <7)
			cout << "Conceito C";
		else if(5 <= mp && mp <6)
			cout << "Conceito D";
		else if (0 <= mp && mp < 5)
			cout << "Conceito E";
		else
			cout << "MUITO RUIM";
	
	
	
	return 0;
}
