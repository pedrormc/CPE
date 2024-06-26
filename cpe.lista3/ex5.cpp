#include<iostream>
#include<string>
using namespace std;

int main(){
	string caractere;
	
	cout << "digite um caractere" << endl;
	cin >> caractere;
	
	for (char& c : caractere){
		switch (c){
			case 'a':
				cout << " eh vogal";
				break;
			case 'e':
				cout << " eh vogal";
				break;
			case 'i':
				cout << " eh vogal";
				break;
			case 'o':
				cout << " eh vogal";
				break;
			case 'u':
				cout << " eh vogal";
				break;
			default:
				cout << " nao eh vogal";
		}
	}
	
	return 0;
}
