#include <iostream>

using namespace std;

int main () {
    double Kilos, Gramas, kiloemgrama, calculo_grama, resultado, resultado2;

    cout << "Digite a quantidade em Kilos do saco de ração:"<< endl;
    cin >> Kilos;
    cout << "Digite a quantidade em Gramas que é dado para os dois cachorros:" << endl;
    cin >> Gramas;

    //Cálculo
    kiloemgrama = Kilos * 1000;
    calculo_grama = Gramas * 5;
    resultado = kiloemgrama - calculo_grama;
    resultado2 = resultado / 1000;


    cout << "Restará no saco " << resultado2 << "Kg de ração." << endl;



    system("pause");

}