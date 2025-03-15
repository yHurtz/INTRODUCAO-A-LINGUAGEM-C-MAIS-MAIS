#include <iostream>

using namespace std;

int main () {
    double grauC, calculo, grauF;

    cout << "Digite quantos grau ceucius ºC:" << endl;
    cin >> grauC;
    
    calculo = 9 * grauC + 160;
    grauF = calculo / 5;

    cout << "Então " << grauC << "ºC convertido para Fahrenheit fica: " << grauF << "ºF" << endl;

    system("pause");

}