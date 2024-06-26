#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int l1, l2, hip;
    cout << endl << "triplos de pitagoras" << endl;

    for (l1 = 1; l1 <= 20; l1++) {
          for (l2 = l1; l2 <= 20; l2++) { 
            for (hip = l2 + 1; hip <= 20; hip++) { 
                if ((l1 * l1 + l2 * l2 == hip * hip) && hip <= 20){
                    cout << "\nlado 1: " << l1 << "\nlado 2: " << l2 << "\nhipotenusa: " << hip << endl;
                }
            }
        }
    }
    return 0;
}