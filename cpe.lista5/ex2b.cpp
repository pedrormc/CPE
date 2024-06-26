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
    cout << "todosprimos entre 2 e 1000: " << endl;

    for(int num = 2; num <=1000; num++){
        if (primo(num))
            cout << num << " eh primo." << endl; 
    }
    
    return 0;
}