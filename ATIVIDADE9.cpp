#include <iostream>

using namespace std;

int main () {
    double num1, num2, num3,peso1, peso2, peso3, media, pesos;

    cout << "Digite o valor da primeira nota:" << endl;
    cin >> num1;
    cout << "Agora digite o peso deste número:" << endl;
    cin >> peso1;
    cout << "Digite o valor da segunda nota:" << endl;
    cin >> num2;
    cout << "Agora digite o peso deste número:" << endl;
    cin >> peso2;
    cout << "Digite o valor da terceira nota:" << endl;
    cin >> num3;
    cout << "Agora digite o peso deste número:" << endl;
    cin >> peso3;


    media = (num1 * peso1) + (num2 * peso2) + (num3 * peso3) / 3;

    cout << "A média ponderada dessas notas será: " << media << endl;

    system("pause");

}