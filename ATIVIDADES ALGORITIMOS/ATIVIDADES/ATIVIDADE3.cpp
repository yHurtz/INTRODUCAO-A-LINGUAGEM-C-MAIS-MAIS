#include <iostream>
using namespace std;

int main (){
    double senha;
    
    cout << "Digite a senha de acesso:" << endl;
    cin >> senha;

    if (senha == 1234) {
        cout << "Acesso permitido!" << endl;
    } else {
        cout << "Acesso negado!" << endl;
    }
    system("pause");
}