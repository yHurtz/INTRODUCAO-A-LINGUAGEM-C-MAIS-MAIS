#include <iostream>
#include <cmath>

using namespace std;

int main () {
    double A, B, C, delta, X1, X2;

    cout << "Digite o valor de A:" << endl;
    cin >> A;
    cout << "Digite o valor de B:" << endl;
    cin >> B;
    cout << "Digite o valor de C:" << endl;
    cin >> C;

    //DESCOBRIR VALOR DO DESCRIMINANTE DELTA (Δ = b * b − 4 * a * c)
    delta = B * B - 4 * A * C;

    //VERIFICA SE DELTA É POSITIVO
    if (delta > 0) {
    
    //CALCULA AS DUAS RAIZES REAIS
    X1 = (-B + sqrt(delta)) / (2 * A);
    X2 = (-B - sqrt(delta)) / (2 * A);
    
    cout << "O valor das raízes são:" << endl;
    cout << "X1: " << X1 << endl;
    cout << "X2: " << X2 << endl;

    }
    //CASO O DELTA SEJA ZERO, EXISTE APENAS 1 RAIZ REAL.
    else if (delta == 0) {
    X1 = -B / (2 * A);
    
    cout << "A equação possuí uma raiz real X1: " << X1 << endl;
    }
    //CASO DELTA SEJA NEGATIVO NÃO HÁ RAIZES REAIS
    else {
        cout << "A equação não possuí raízes reais" << endl;
    }

    system("pause");
}