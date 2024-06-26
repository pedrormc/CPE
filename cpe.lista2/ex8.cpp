#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a;
	int b;
	
	cout<< "digite dois catetos: \n";
	cin>> a;
	cin>> b;
	int c= a*a+b*b;
	cout<< "hipotenusa: " << sqrt(c);
}
