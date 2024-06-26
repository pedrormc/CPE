#include<iostream>
using namespace std;

int main(){
	int a;
	int b;
	
	cout<< "digite dois numeros: \n";
	cin >> a >> b;
	
	if(a == b){
		cout << "sim\n";
	}
	if(a%b == 0){
		cout << "sim\n";
	}
	if(a%b != 0){
		cout << "nao\n";
	}
	
	return 0;
}
