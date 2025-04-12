#include <iostream>

using namespace std;

int main () {
    double altura, peso;

    cout << "Digite sua altura:" << endl;
    cin >> altura;
    cout << "Digite seu peso:" << endl;
    cin >> peso;

    double alturaPerm = altura >= 1.70 && altura <= 1.90;
    double pesoPerm = peso >= 70 && peso <= 80;

    if (alturaPerm && pesoPerm) {
        cout << "Aceito." << endl;
    } else if (!alturaPerm && !pesoPerm) {
        cout << "Recusado por peso e altura." << endl;
    } else if (!pesoPerm) {
        cout << "Recusado por peso." << endl;
    } else if (!alturaPerm) {
        cout << "Recusado por altura." << endl;
    }
    

    system("pause");
}