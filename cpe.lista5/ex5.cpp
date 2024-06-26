#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));

    char jogar;

    do{
        int num = rand() % 1000 + 1;
        int chute;
        int tentativas = 0;

        cout << "\nadivinhe o numero que estou pensando entre 1 e 1000!" << endl;

        do {
            cout << "digite o seu chute: ";
            cin >> chute;
            tentativas++;

            if (chute == num) {
                cout << "\ncorreto" << endl;
            } else if (chute < num) {
                cout << "\nmais alto" << endl;
            } else {
                cout << "\nmais baixo" << endl;
            }
        } while (chute != num);

        cout << "\ntentativas: " << tentativas << endl;

        cout << "\njogar novamente?(s/n): ";
        cin >> jogar;
    } while (jogar == 's');

    cout << "\nfinalizado" << endl;
    
    return 0;
}