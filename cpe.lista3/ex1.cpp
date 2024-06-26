#include<iostream>
using namespace std;

int main(){
	float km;
	float litros;
	
	cout << "km rodados com tanque cheio: " << endl;
	cin >> km;
	
	cout << "capacidade do tanque: " << endl;
	cin >> litros;
	
	cout << "a media do consumo: " << km/litros << "km/litros.";	
	
	return 0;
}
