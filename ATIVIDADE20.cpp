#include <iostream>
#include <cmath>

using namespace std;

int main () {
    double DELTA, DX, DY, PX, PY, QX, QY;

    cout << "Informe o X do ponto P:" << endl;
    cin >> PX;
    cout << "informe o Y do ponto P:" << endl;
    cin >> PY;
    cout << "Informe o X do ponto Q:" << endl;
    cin >> QX;
    cout << "Informe o Y do ponto Q:" << endl;
    cin >> QY;

    //DESCOBRIR O VALOR DO DELTA X E Y
    DX = QX - PX;
    DY = QY - PY;
    
    //FAZER O CALCULO
    DELTA = sqrt((DX * DX) + (DY * DY));

    cout << "A distância entre os dois pontos é de: " << DELTA << endl;


    system("pause");
}