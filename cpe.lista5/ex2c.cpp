#include<iostream>
#include<cmath>
using namespace std;

bool primoa(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) { 
        if (num % i == 0) 
            return false;
    }
    return true; 
}

bool primob(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i  <= sqrt(num); i++) { 
        if (num % i == 0) 
            return false;
    }
    return true; 
}

int main() {
    int num;
    cout << "numero inteiro maior que 1: " << endl;
    cin >> num;

    if (primoa(num)){
        cout << num << " eh primo, usando n/2." << endl;
    } else {
        cout << num << " nao eh primo, usando n/2." << endl;
    }

    if(primob(num)) {
        cout << num << " eh primo, usando a raiz de n." << endl;
    } else {
        cout << num << " nao eh primo, usando a raiz de n." << endl;
    }
        
    return 0;
}