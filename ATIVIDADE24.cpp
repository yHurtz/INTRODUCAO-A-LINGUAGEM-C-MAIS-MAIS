#include <iostream>
#include <cmath>

using namespace std;

int main () {
    double polegadas, pes, jardas, milhas;

    cout << "Informe a seguir a distãncia (em pés)" << endl;
    cin >> pes;

   polegadas = pes * 12;
   jardas = pes / 3;
   milhas = pes / (1760 * 3);

    cout << "A distância em polegadas é: " << polegadas << endl;
    cout << "A distãncia em jardas é: " << jardas << endl;
    cout << "A distância em milhas é: " << milhas << endl;




    system("pause");
}