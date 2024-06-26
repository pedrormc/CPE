#include<iostream>
using namespace std;

int fatorial (int n){
    return (n == 1 || n == 0) ? 1 : n * fatorial(n-1);
}

int main (){
    int num;
    
    cout << "digite um numero: " << endl;
    cin >> num;

     
    if(num < 0){
        cout << "seu numero eh negativo" << endl;
        return main();
    }

    cout << "o fatorial do seu numero eh: " << fatorial(num);
    return 0;
}