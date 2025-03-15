#include <iostream>

using namespace std;

int main() {
    double n1, n2;
    //n1 = combustível - n2 = distância

    //INFORMAÇÕES
    cout << "Informe a quantidade de combustível total em LITROS existente no veículo antes de iniciar a viagem:" << endl;
    cin >> n1;
    cout << "Agora nos informe a distância total percorrida:" << endl;
    cin >> n2;

    //CALCULO E RESPOSTAS
    cout << "Logo o consumo médio do seu veículo é de: " << n2 / n1 << endl;

    system("pause");


}