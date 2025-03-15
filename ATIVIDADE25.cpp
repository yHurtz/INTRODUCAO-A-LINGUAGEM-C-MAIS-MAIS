#include <iostream>
#include <cmath>

using namespace std;

int main () {
    double GrauF, GrauC;

    cout << "Informe quantos graus em Fahrenheit:" << endl;
    cin >> GrauF;

    GrauC = (GrauF - 32) * 5 / 9;

    cout << "Logo " << GrauF << " ºF será " << GrauC << " ºC." << endl;

    system("pause");
}