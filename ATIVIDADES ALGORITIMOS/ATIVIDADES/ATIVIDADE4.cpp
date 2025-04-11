#include <iostream>
using namespace std;

int main (){
    double n1, n2, media;

    cout << "Digite as suas duas médias bimestrais:" << endl;
    cin >> n1 >> n2;
    media = (n1 + n2) / 2;
    cout << "Sua nota final foi: " << media << endl;

    if (media >= 6.0) {
        cout << "Aluno APROVADO!" << endl;
    } else {
        cout << "Aluno REPROVADO!" << endl;
    }
    system("pause");
}