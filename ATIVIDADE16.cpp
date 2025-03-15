#include <iostream>

using namespace std;

int main () {
    double ValorDepositado, ValorRetirada1, ValorRetirada2, Juros1, calculo2, Juros2, calculo4, Impostos,SomaRetiradas, SaldoAtual;
    
    cout << "Informe o valor depositado em sua conta:" << endl;
    cin >> ValorDepositado;
    cout << "Digite o valor em Reais da 1ª retirada da conta:" << endl;
    cin >> ValorRetirada1;
    cout << "Digite o valor em Reais da 2ª retirada da conta:" << endl;
    cin >> ValorRetirada2;

    //CÁLCULOS
    Juros1 = ValorRetirada1 * 0.0038;
    calculo2 = ValorRetirada1 + Juros1;
    Juros2 = ValorRetirada2 * 0.0038;
    calculo4 = ValorRetirada2 + Juros2;
    SomaRetiradas = calculo2 + calculo4;
    SaldoAtual = ValorDepositado - SomaRetiradas;



    cout << "O valor de lançamentos é de R$" << ValorDepositado << ",00" << endl;
    cout << "O valor total de impostos descontados é de R$" << SomaRetiradas << ",00" << endl;
    cout << "O saldo atual é de R" << SaldoAtual << endl;



    system("pause");
}