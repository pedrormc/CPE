#include<iostream>
using namespace std;

int main(){
	int numBin, numDec = 0, base = 1, resto;
	
	cout << "numero em binario: ";
	cin >> numBin;
	
	//conversao de binario para decimal
	while (numBin > 0) {
		resto = numBin % 10;
		numDec += resto * base;
		base *= 2;
		numBin /= 10;
	}
	
	cout << endl << "em decimal eh: " << numDec;
	
	return 0;
}
