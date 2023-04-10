#include <iostream>
using namespace std;

int main(){
	float alt, peso;
	cout<< "Insira altura: ";
	cin >> alt;
	cout << "Insira peso: ";
	cin >> peso;
	if(alt<1.20){
		if(peso <=60)
			cout << "Peso A";
		else if(peso> 60 && peso <=90)
			cout << "Peso B";
		else
			cout << "Peso G";
		
	}
	else if(alt>=1.20 && alt <=1.70){
		if(peso <=60)
			cout << "Peso B";
		else if(peso> 60 && peso <=90)
			cout << "Peso E";
		else
			cout << "Peso H";
		
	}
	else
		if(peso <=60)
			cout << "Peso C";
		else if(peso> 60 && peso <=90)
			cout << "Peso F";
		else
			cout << "Peso I";
	return 0;
}
