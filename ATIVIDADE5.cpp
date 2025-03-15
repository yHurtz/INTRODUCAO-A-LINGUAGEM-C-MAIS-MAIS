#include <iostream>

using namespace std;

int main() {
    double valor_prod, lucro, valor_final, porcentagem = 0.3;
    
//informações    
    cout << "Digite o valor do produto:" << endl;
    cin >> valor_prod;
//cálculo
    lucro = valor_prod * porcentagem;
    valor_final = valor_prod + lucro;
    
    cout << "O produto poderá ser vendido por R$" << valor_final << ",00" << endl;

    system("pause");
    
}