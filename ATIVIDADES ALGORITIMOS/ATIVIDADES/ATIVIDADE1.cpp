#include <iostream>

using namespace std;

int main (){
    double n1, n2, n3, n4, media;
    double tot_faltas, max_faltas = 12;

    cout << "Digite as 4 notas bimestrais" << endl;
    cin >> n1 >> n2 >> n3 >> n4;
    cout << "Digite quantas faltas você tem" << endl;
    cin >> tot_faltas;


    media = (n1 + n2 + n3 + n4) / 4;
    cout << "Media do aluno: " << media << endl;

    if ((media >= 6.0) && (tot_faltas <= max_faltas)) {
        cout << "Parabéns, você passou!" << endl;
    } else if ((media < 6.0) && (tot_faltas <= max_faltas)) {
        cout << "Reprovato por nota." << endl;
    } else if ((media >= 6.0) && (tot_faltas > max_faltas)) {
        cout << "Reprovado por faltas." << endl;
    }
    system("pause");
}