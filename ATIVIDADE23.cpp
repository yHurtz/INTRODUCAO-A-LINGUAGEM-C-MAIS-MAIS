#include <iostream>

using namespace std;

int main () {
    double altura_degrau, altura_desejada, resultado;

    cout << "Insira a altura de cada degrau da escada:" << endl;
    cin >> altura_degrau;
    cout << "Insira a altura que você deseja alcançar:" << endl;
    cin >> altura_desejada;

    resultado = altura_desejada / altura_degrau;

    cout << "Você deverá subir: " << resultado << " degraus." << endl;



    system("pause");
}