#include <iostream>

using namespace std;

int main () {
    double A, B;

    cout << "Digite o valor da unidade A:" << endl;
    cin >> A;
    cout << "Digite o valor da unidade B" << endl;
    cin >> B;

    A = A + B;
    B = A - B;
    A = A - B;

    cout << "Valores trocados" << endl;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

    system("pause");

}