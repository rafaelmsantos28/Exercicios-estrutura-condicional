#include <iostream>
using namespace std;

int main(){
	int I;
	float A, B, C;
	cout << "Escreva A: ";
	cin >> A;
	cout << "Escreva B: ";
	cin >> B;
	cout << "Escreva C: ";
	cin >> C;
	cout << "Escreva I: ";
	cin >> I;
	if(I == 1){
		if(A <B && B < C)
			cout << A << B << C;
			else if( A < C && C < B)
				cout << A << C << B;
					else if( B < A && A < C)
						cout << B << A << C;
							else if( B < C && C <A)
								cout << B << C << A;
									else if ( C < B && B < A )
										cout << C << B <<A;
											else
												cout << C << A << B;
		
	}
	else if (I == 2){
		if(A >B && B > C)
			cout << A << B << C;
			else if( A > C && C > B)
				cout << A << C << B;
					else if( B > A && A > C)
						cout << B << A << C;
							else if( B > C && C > A)
								cout << B << C << A;
									else if ( C > B && B > A )
										cout << C << B << A;
											else
												cout << C << A << B;
	}
	else if(I==3){
		if(A >B && B > C)
			cout << B << A << C;
			else if( A > C && C > B)
				cout << C << A << B;
					else if( B > A && A > C)
						cout << A << B << C;
							else if( B > C && C > A)
								cout << C << B << A;
									else if ( C > B && B > A )
										cout << B << C << A;
											else
												cout << A << C << B;
	
	}
	else
		cout << "Apenas numeros de 1 a 3";
		return 0;
		
		
}
