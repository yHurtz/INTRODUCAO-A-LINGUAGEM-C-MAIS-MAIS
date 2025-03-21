#include <iostream>

using namespace std;

int main () {
    string nome;
    double B1, B2, B3, B4, semestre_1, semestre_2, media_anual;

    //PERGUNTAS
    cout << "Por favor, digite seu nome:" << endl;
    getline(cin, nome);
    cout << "Por favor, digite a nota do 1º Bimestre:" << endl;
    cin >> B1;
    cout << "Por favor, digite a nota do 2º Bimestre:" << endl;
    cin >> B2;
    cout << "Por favor, digite a nota do 3º Bimestre:" << endl;
    cin >> B3;
    cout << "Por favor, digite a nota do 4º Bimestre:" << endl;
    cin >> B4;

   //CÁLCULOS
    semestre_1 = (B1 + B2) /2;
    semestre_2 = (B3 + B4) /2;
    media_anual = (B1 + B2 + B3 + B4) / 4;
       
    //RESPOSTAS
    cout << "Então, " << nome;
    cout << "Média do 1º semestre: " << semestre_1 << endl;
    cout << "Média do 2º semestre: " << semestre_2 << endl;

    cout << "E sua média anual é de: " << media_anual << endl;

    system("pause");
}