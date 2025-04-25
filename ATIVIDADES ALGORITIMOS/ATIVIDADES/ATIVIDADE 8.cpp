#include <iostream>

using namespace std;

int main () {
    double morangoKg, macaKg;
    double ValorMorango, ValorMaca;
    double Valor, ValorDesconto;
    
    cout << "Digite a quantidade (em Kg) de morangos:" << endl;
    cin >> morangoKg;
    cout << "Digite a quantidade (em Kg) de maçãs:" << endl;
    cin >> macaKg;
    
    if (morangoKg <= 5) {
        ValorMorango = 5;
    } else {
        ValorMorango = 4;
    }
    if (macaKg <= 5) {
        ValorMaca = 3;
    } else {
        ValorMaca = 2;
    }
    Valor = (morangoKg * ValorMorango) + (macaKg * ValorMaca);
    
    if ((morangoKg + macaKg > 8) || (Valor > 35)) {
        ValorDesconto = Valor * 0.8;
    } else {
        ValorDesconto = Valor;
    }
    cout << "O valor a pagar é de: R$" << fixed << (int)ValorDesconto << ",00." << endl;
    
    system("pause");
}