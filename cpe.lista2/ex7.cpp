#include <iostream>
using namespace std;

int main(){
	int p, num, div=0;
	
	cout<< "insira um numero: \n";
	cin>> num;
	
	for (p=1 ; p<=num ; p++){
		if(num%p==0){
			div++;
		}}
	
	if(div==2){
		cout << "eh primo\n";
	}
	else{
		cout<<"nao eh primo\n";
	}
	
	return 0;
}
