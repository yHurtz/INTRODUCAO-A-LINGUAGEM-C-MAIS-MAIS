#include <iostream>

using namespace std;

int main() {

    double num1, num2;

    // Informação de números
    cout << "primeiro número:";
    cin >> num1;
    cout << "segundo número:";
    cin >> num2;
    
    // CÁLCULOS e RESPOSTAS
    cout << "Se somado estes números é = " << num1 + num2 << endl; //soma
    cout << "Se subtraído estes números é = " << num1 - num2 << endl; //subtrai
    if (num2 != 0) {
    cout << "Se multiplicado estes números é = " << num1 * num2 << endl; //multiplica
    cout << "Se dividido estes números é = " << num1 / num2 << endl; //divide
    } else {
        cout << "Não é possível realizar divisões e multiplicações por zero!";
    } 


    system("pause");
}