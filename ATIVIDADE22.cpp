#include<iostream>
#include <cmath>

using namespace std;

int main(){
    double salario, kw_consumida;
    double valor_kw, valor_total, valor_desconto, valor_com_desconto;
    
    cout << "Informe o valor do salário mímino em R$:" << endl;
    cin >> salario;
    cout << "Informe a quantidade de Quilowatts consumida:" << endl;
    cin >> kw_consumida;
        
    valor_kw = salario * 0.001;
    valor_total = kw_consumida * valor_kw;
    valor_desconto = valor_total * 0.15;
    valor_com_desconto = valor_total - valor_desconto;
    
   
    cout << "O valor de cada Quilowatts é: R$" << valor_kw << " reais." << endl;
    cout << "O valor a ser pago é: R$" << valor_total << " reais." << endl;
    cout << "Valor com desconto de 15%: " << valor_com_desconto << endl;
    
    
   
    system("pause");
}
