#include <iostream>

using namespace std;

int main (){
float A, B, C, D, E;
    cout << "Digite a letra A:";
    cin >>  A;
    cout << "Digite a letra B:";
    cin >> B;
    cout << "Digite a letra C:";
    cin >> C;
    cout << "Digite a letra D:";
    cin >> D;
    cout << "Digite a letra E:";
    cin >> E;


    if (A == 2) {
    cout << "Laranja" << endl;
        if (B == 7) {
            cout << "Uva" << endl;
            cout << "Melancia" << endl;
    }
        if (D == 2) {
        cout << "Pêra" << endl;
 }  else {
        cout << "Morango"<< endl;
    }
} else {
    if ( C == 3) {
    cout << "Limão"<< endl;
 }
    if ( E == 4) {
    cout << "Abacate"<< endl;
    cout << "Abacaxi"<< endl;
 }
}

    cout << "pitanga"<< endl;

    system("pause");
}