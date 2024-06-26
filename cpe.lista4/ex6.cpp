#include<iostream>
using namespace std;

int main (){    
    int menornum = 1, maiornum = 100, chute;
    char resp;
    cout << "pense em um numero entre 1 e 100  \nreponda com '>' ou '<' ou '='" << endl;
    
    while (true){
        chute = menornum + (maiornum - menornum) / 2;
        cout << "o seu numero eh: " << chute << "?\n";
        cin >> resp;

        if (resp == '='){
            cout << "acertei!" << endl;
            }else if (resp == '<'){
                maiornum = chute - 1;
            } else if (resp == '>'){
                menornum = chute + 1;
            }
        if (menornum > maiornum){
            cout << "seu numero nao esta contido no intervalo";
        }
    }

    return 0;
}