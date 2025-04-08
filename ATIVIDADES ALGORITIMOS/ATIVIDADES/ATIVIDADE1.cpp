#include <iostream>

using namespace std;

int main () {
    
    float nb1, nb2, media;

    cout << "Digite a sua nota do 1º Bimestre:" << endl;
    cin << nb1;
    cout << "Digite a sua nota do 2º Bimestre:" << endl;
    cin << nb2;

    media = (nb1 + nb2) / 2;

    if (media >= 6) {
        cout << "Parabéns, você passou!!" << endl;
    } else {
        cout << "Desculpe, você não passou." << endl;
    }
    system("pause");
}