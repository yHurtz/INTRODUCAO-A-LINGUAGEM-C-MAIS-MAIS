#include <iostream>

using namespace std;

int main () {
    double salario, porcentual, novosalario;

    cout << "Digite o valor do salário:" << endl;
    cin >> salario;
    cout << "Digite agora o reajuste em % porcentagem" << endl;
    cin >> porcentual;

novosalario = salario + (salario * porcentual / 100);

cout << "O valor do salário com o reajuste de " << porcentual << "% é de R$" << novosalario << endl;

system("pause");

}