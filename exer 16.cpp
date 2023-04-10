#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int pre, vendams;
	cout << "Insira o preço atual: ";
	cin >> pre;
	cout << "Insira a venda média mensal do produto: ";
	cin >> vendams;
	if(pre<30 || vendams<500)
		cout << pre *1.10;
	else if((vendams >= 500 && vendams <1200) || (pre>=30 && pre <80))
		cout << pre *1.15;
	else
		cout << pre * 0.80;
	return 0;
}
