#include <iostream>

using namespace std;

int main () {
    double altura, peso;
    
    cout << "Digite sua altura:" << endl;
    cin >> altura;
    cout << "Digite seu peso:" << endl;
    cin >> peso;
    
    if (altura < 1.20 && peso <= 60) {
        cout << "Classificação A." << endl;
        } else if (altura < 1.20 && peso > 60 && peso < 90) {
            cout << "Classificação D." << endl;
            } else if (altura < 1.20 && peso > 90) {
                cout << "Classificação G." << endl;
    }
    if (altura > 1.20 && altura < 1.70 && peso <= 60) {
        cout << "Classificação B." << endl;
        } else if (altura > 1.20 && altura < 1.70 && peso > 60 && peso < 90) {
            cout << "Classificação E." << endl;
            } else if (altura > 1.20 && altura < 1.70 && peso > 90) {
                cout << "Classificação H." << endl;
    }
    if (altura > 1.70 && peso <= 60) {
        cout << "Classificação C." << endl;
        } else if (altura > 1.70 && peso > 60 && peso < 90){
            cout << "Classificação F." << endl;
            } else if (altura > 1.70 && peso > 90) {
                cout << "Classificação I." << endl;
    }
    system("pause");
}