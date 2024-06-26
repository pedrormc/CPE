#include<iostream>
using namespace std;

int main(){
	int num, numOriginal, numInverso = 0;
	
	cout << "insira um numero de cinco digitos: ";
	cin >> num;
	
	numOriginal = num;
	
	
	if (num >= 10000 && num <= 99999) {
		while (num > 0){
			numInverso = (numInverso * 10) + (num % 10); 
			num /= 10; 
		}
	
	if (numOriginal == numInverso) {
		cout << "eh palindromo";
	} else {
		cout << "nao eh um palindromo";
	}
	} else {
		cout << "nao possui cinco digitos";
	}
	
	return 0;
}
