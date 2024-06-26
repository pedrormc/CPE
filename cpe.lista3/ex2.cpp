#include<iostream>
using namespace std;

int main(){
	float gasolina;
	float alcool;
	
	cout << "preco do litro da gasolina: " << endl;
	cin >> gasolina;
	
	cout << "preco do litro do alcool: " << endl;
	cin >> alcool;
	
	float calculo = alcool/gasolina;
	
	if (calculo <= 0.7){
		cout << "mmelhor alcool";
	} else {
		cout << "melhor gasolina";
	}
	
	return 0;
}
