#include <iostream>
#include <cmath>

using namespace std;

int main () {
    const double PI = 3.14;
    const double VALOR_LATA = 50.00;
    const double CAPACIDADE_LATA = 5.00;
    const double RENDIMENTO_LITRO = 3.00;
    const double CM2_POR_M2 = 10000.00;
    
    int quantidade;
    double altura, raio, area, A_base, A_lateral;
  
    
    cout << "Informe a quantidade de tanques a ser pintados:" << endl;
    cin >> quantidade;
    cout << "Informe a altura (em cm) do tanque:" << endl;
    cin >> altura;
    cout << "Informe o raio (em cm) do tanque:" << endl;
    cin >> raio;
    
    A_base = PI * pow(raio, 2); // calcula o tamanho da base 
    A_lateral = 2 * PI * raio * altura; // calcula o tamanho lateral
    area = 2 * A_base + A_lateral; // soma das áreas
    
    //converte cm² em m²
    double AreaM2 = area / CM2_POR_M2; 
    //quantidade de tinta necessária
    double TintaNecessaria = AreaM2 / RENDIMENTO_LITRO; // EM LITROS
    //quantidade de latas de tinta necessária
    int LatasNecessarias = TintaNecessaria / CAPACIDADE_LATA;
    //CALCULAR O CUSTO TOTAL
    double CustoTotal = LatasNecessarias * VALOR_LATA;
    
    cout << "Área total a ser pintada: " << AreaM2 << " m²" << endl;
    cout << "Quantidade de tinta necessária: " << TintaNecessaria << " Litros" << endl;
    cout << "Quantidade de latas necessárias: " << LatasNecessarias << " Latas" << endl;
    cout << "Custo total : R$" << CustoTotal << endl;
    
    
    
    system("pause");
}