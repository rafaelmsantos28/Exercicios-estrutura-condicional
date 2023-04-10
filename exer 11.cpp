#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int hora1, min1, hora2, min2, d1, d2;
	cout << "Insira a primeira hora" << endl;
	cout << "Insira a hora: ";
	cin >> hora1;
	cout << "insira os minutos: ";
	cin >> min1;
	cout << "Insira a segunda hora" << endl;
	cout << "Insira a hora: ";
	cin >> hora2;
	cout << "Insira os minutos";
	cin >> min2;
	if(min1>min2){
	
		min2 = min2 + 60;
		hora2 = hora2 - 1;
	}	
	if (hora1 > hora2)
		hora2=hora2 + 24;
		d2 = min2 - min1;
		d1 = hora2 - hora1;
		cout << "O jogo durou: " << d1 << " horas e " << d2 << " minutos";
		return 0;
}
