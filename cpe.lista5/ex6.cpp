#include <iostream>
using namespace std;

void torresHanoi (int disco, int estacaInic, int estacaDes, int estacaTemp) {
    if (disco == 1) {
        cout << estacaInic << " --> " << estacaDes << endl;
        return;
    }

    torresHanoi (disco - 1, estacaInic, estacaTemp, estacaDes);
    cout << estacaInic << " --> " << estacaDes << endl;
    torresHanoi (disco - 1, estacaTemp, estacaDes, estacaInic);
}

int main () {
    int numDisco;
    cout << "digite o numero de discos: ";
    cin >> numDisco;

    cout << endl << "instrucoes para resolver as torres de hanoi: " << endl;
    torresHanoi (numDisco, 1, 3, 2);

    return 0;
}