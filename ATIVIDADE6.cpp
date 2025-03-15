#include <iostream>

using namespace std;

int main () {
    string nome;
    double valor_mensal, valor_vendas, lucro, final, porcentagem = 0.15;

    cout << "Digite o nome do Vendedor:" << endl;
    getline(cin,nome);
    cout << "Digite o valor do Salário mensal:" << endl;
    cin >> valor_mensal;
    cout << "Digite o valor total de Vendas do mês:" << endl;
    cin >> valor_vendas;

    //CALCULO
    lucro = valor_vendas * porcentagem;
    final = valor_mensal + lucro;

    cout << "O valor da porcentagem da comissão é de R$" << lucro << ",00" << endl;
    cout << "O salário final do vendedor " << nome << " é de R$" << final << ",00" << endl;

    system("pause");

}