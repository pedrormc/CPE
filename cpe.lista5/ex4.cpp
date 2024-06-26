#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

void pergunta () {
    int num1 = rand() % 9 + 1;
    int num2 = rand() % 9 + 1;
    int resp;

    cout << "quanto eh " << num1 << " vezes " << num2 << "?" << endl;
    cin >> resp;

    while ( resp != num1 * num2){
        cout << "tente novamente" << endl;
        cin >> resp;
    }

    cout << "coreeto" << endl;

}

int main () {
    srand(time(0));

    cout << "tentar multiplicar? digite 's' para prosseguir ou 'n' para finalizar o programa" << endl;
    cout << "pressione enter dps" << endl;
   
    char continuar;

    do {
        pergunta();

        cin.ignore();
        continuar = cin.get();

        cout << "continuar?(s/n): ";
        cin >> continuar;
    } while (continuar == 's');

    cout << "finalzado" << endl;

    return 0;
}