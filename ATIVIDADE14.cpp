#include <iostream>

using namespace std;

int main () {
    double ValorCarro, calculo1, calculo2, ValorFinal;

    cout << "Digite o valor do carro:" << endl;
    cin >> ValorCarro;
    
    //CÁLCULO
    calculo1 = (ValorCarro * 0.28);
    calculo2 = (ValorCarro * 0.45);
    ValorFinal = ValorCarro + calculo1 + calculo2;

    cout << "O valor do carro com os impostos de fábrica de 28% e porcentagem do vendedor de 45% é de: " << ValorFinal << endl;

    system ("pause");
}