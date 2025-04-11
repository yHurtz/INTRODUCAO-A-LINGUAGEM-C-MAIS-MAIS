#include <iostream>

using namespace std;

int main (){
    double n1, n2, n3, n4, media;

    cout << "Digite as 4 notas bimestrais" << endl;
    cin >> n1 >> n2 >> n3 >> n4;
    media = (n1 + n2 + n3 + n4) / 4;
    cout << "Media do aluno: " << media << endl;

    if (media >= 6.0) {
        cout << "Parabéns, você passou!" << endl;
    } else {
        cout << "Desculpe, você não passou pois não alcançou a média." << endl;
    }
    system("pause");
}