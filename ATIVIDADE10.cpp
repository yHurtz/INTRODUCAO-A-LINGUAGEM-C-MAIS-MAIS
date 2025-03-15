#include <iostream>

using namespace std;

int main () {
    double salario, novo_salario;

    //exibe as informações
    cout << "Digite o valor do salário:" << endl;
    cin >> salario;

    //cálculo
    novo_salario = salario + (salario * 0.25);


    //Resposta final
    cout << "O novo salário com aumento de 25% é: R$" << novo_salario << endl;


    system ("pause");

}