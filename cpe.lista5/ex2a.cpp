#include<iostream>
using namespace std;

bool primo(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) { 
        if (num % i == 0) 
            return false;
    }
    return true; 
}

int main() {
    int num;
    cout << "escreva um numero inteiro maior que 1: " << endl;
    cin >> num;

    if (primo(num))
        cout << num << " eh primo." << endl;
    else
        cout << num << " nao eh primo." << endl;

    return 0;
}