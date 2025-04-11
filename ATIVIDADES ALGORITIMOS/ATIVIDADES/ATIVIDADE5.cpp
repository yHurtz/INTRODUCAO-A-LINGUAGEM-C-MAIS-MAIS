#include <iostream>
using namespace std;

int main (){
    double altura, sexo = 1 >> 2;
    double peso_M, peso_F;


    cout << "Digite sua altura:" << endl;
    cin >> altura;
    cout << "Digite 1 - Masculino e 2 - Feminino:" << endl;
    cin >> sexo;
    
    peso_M = (72.7 * altura) - 58;
    peso_F = (62.1 * altura) - 44.7;

    if (sexo == 1) {
        cout << "O ppeso ideal para você é: " << peso_M << endl;
    } if (sexo == 2){
        cout << "O peso ideal para você é: " << peso_F << endl;
    }
    system("pause");
}