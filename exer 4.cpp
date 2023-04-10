#include <iostream>
using namespace std;

int main(){
	int x, y, z;
	cin >> x >> y >> z;
	if (x < y && y < z)
		cout << x << y << z;
	else if (x < z && x < y)
		cout << x << z << y;
	else if (y < x && x < z)
		cout << y << x << z;
	else if (y < z && z <x)
		cout << y << z << x;
	else if(z < x && x < y)
		cout << z << x << y;
	else if (z < y && y < x)
		cout << z << y << x;
	else
		cout << "erro";
	return 0;
	
}
