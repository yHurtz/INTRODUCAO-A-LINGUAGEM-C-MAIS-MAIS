#include <iostream>

using namespace std;

int main () {
    string nome;
    float num1, n2 = 5, resultado;

    //INFORMAÇÕES
    cout << "Digite o nome do produto";
    cin >> nome;
    cout << "Agora, digite o valor deste produto";
    cin >> num1;

    //CALCULO:
    cout << "Logo o produto " << nome << " pode ser vendido em até 5x de R$" << num1 / n2 << endl;

    system("pause");


}