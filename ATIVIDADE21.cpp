#include<iostream>
#include <cmath>

using namespace std;

int main(){
    double escada, altura, distancia;
    
    cout << "Informe a altura da escada (em metros)" << endl;
    cin >> escada;
    cout << "Informe a altura que deseja pregar o quadro (em metros)" << endl;
    cin >> altura;
    
    if (escada <= altura) {
        cout << "Erro: o comprimento da escada deve ser maior que a altura.";
    } else {
        
        distancia = sqrt((escada * escada) - (altura * altura);
        
        cout << "A escada deverá ficar a uma distancia de: " << distancia << " metros da parede." << endl;
    }
    
    system("pause");
}
