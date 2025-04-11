#include <iostream>

using namespace std;

int main (){
    int numero;

    cout << "Digite um número inteiro:" << endl;
    cin >> numero;

    if (numero % 2 == 0) {
        cout << numero << "é um número par." << endl;
    } else {
        cout << numero << "é um número impar" << endl;
    }
    system("pause");
}