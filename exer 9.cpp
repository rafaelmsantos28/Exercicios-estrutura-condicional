#include <iostream>
#include <time.h>
#include <locale.h>
using namespace std;

int main(){
	time_t t = time(0);
	struct tm* now = localtime(&t);
	setlocale(LC_ALL, "Portuguese");
	
	
	int dia = now -> tm_mday;
	int mes = now -> tm_mon + 1;
	int ano = now -> tm_year + 1900;
	
	cout << dia <<"/"<<mes<<"/"<<ano<<endl;
	if(mes==1)
		cout << "Janeiro" << endl;
		else if(mes==2)
		cout <<"Fevereiro" << endl;
		else if(mes==3)
		cout <<"Março" << endl;
		else if(mes==4)
		cout <<"abril"<< endl;
		else if(mes==5)
		cout <<"Maio" << endl;
		else if(mes==6)
		cout <<"junho" << endl;
		else if(mes==7)
		cout <<"julho" << endl;
		else if(mes==8)
		cout <<"agosto" << endl;
		else if(mes==9)
		cout <<"setembro" << endl;
		else if(mes==10)
		cout <<"outubro" << endl;
		else if(mes==11)
		cout <<"novembro" << endl;
		else if(mes==12)
		cout <<"dezembro" << endl;
		else
		cout <<"Errado";
		
	int hora = now -> tm_hour;
	int min = now -> tm_min;
	
	cout << hora << ":" << min;
	return 0;
		
}
