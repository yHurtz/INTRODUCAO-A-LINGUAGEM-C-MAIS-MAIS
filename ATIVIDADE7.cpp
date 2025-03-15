#include <iostream> 

using namespace std;

int main () {
    double Comp_pista, NumTotalVoltas, NumReabastecimentos, ConsumoKmL;
    double VoltasPorReabastecimento, Distancia_Metros, Distancia_TotalKM, Litros_Necessarios;

    //INFORMAÇÕES
    cout << "Digite o comprimento da pista em metros:" << endl;
    cin >> Comp_pista;
    cout << "Digite o total de voltas a serem percorridas:" << endl;
    cin >> NumTotalVoltas;
    cout << "Digite o número de reabastecimentos:" << endl;
    cin >> NumReabastecimentos;
    cout << "Digite o consumo em Km por Litro:" << endl;
    cin >> ConsumoKmL;

    //CÁLCULO
    VoltasPorReabastecimento = NumTotalVoltas / (NumReabastecimentos + 1);
    Distancia_Metros = VoltasPorReabastecimento * Comp_pista;
    Distancia_TotalKM = Distancia_Metros / 1000.0;
    Litros_Necessarios = Distancia_TotalKM / ConsumoKmL;


    //RESPOSTA
    cout << "O número de litros necessários até o próximo reabastecimento é: " << Litros_Necessarios << "Litros" << endl;


    system("pause");
}