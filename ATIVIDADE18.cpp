#include <iostream>

using namespace std;

int main () {
    double PrecoCombustivel, abastecimento, OdometroInicio, OdometroFinal, MediaKmL, ValorRecebido;
    double DistanciaPercorrida, LitrosGastos, CustoCombustivel, LucroLiquido;

    cout << "Digite o preço do combustível em (R$)" << endl;
    cin >> PrecoCombustivel;
    cout << "Digite a quilometragem do odômetro no início do dia." << endl;
    cin >> OdometroInicio;
    cout << "Digite a quilometragem do odômetro quando terminou o dia." << endl;
    cin >> OdometroFinal;
    cout << "Digite o média de consumo em Km/L:" << endl;
    cin >> MediaKmL;
    cout << "Digite agora o valor total em (R$) recebido pelos passageiros:" << endl;
    cin >> ValorRecebido;

    DistanciaPercorrida = OdometroFinal - OdometroInicio;
    LitrosGastos = DistanciaPercorrida / MediaKmL;
    CustoCombustivel = LitrosGastos * PrecoCombustivel;
    LucroLiquido = ValorRecebido - CustoCombustivel;


    cout << "O número de litros gasto foi: " << LitrosGastos << " Litros." << endl;
    cout << "O lucro líquido do dia foi de R$" << LucroLiquido << ",00." << endl;


    system ("pause");
}