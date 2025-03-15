#include <iostream>

using namespace std;

int main () {
    double HorasTrabalhadas, ValorSalario, ValorHora, ValorBruto, ValorImposto, ValorFinal;

    cout << "Digite o número de horas trabalhadas:" << endl;
    cin >> HorasTrabalhadas;
    cout << "Digite o valor do salário mínimo:" << endl;
    cin >> ValorSalario;

    //CÁLCULO
    ValorHora = ValorSalario / 5;
    ValorBruto = HorasTrabalhadas * ValorHora;
    ValorImposto = ValorBruto * 0.03;
    ValorFinal = ValorBruto - ValorImposto;

    cout << "O salário que o funcionário tem a receber é de: R$" << ValorFinal << " reais." << endl;


    system("pause");
}