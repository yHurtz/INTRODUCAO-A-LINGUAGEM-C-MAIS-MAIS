#include <iostream>
using namespace std;

int main () {
    double n1, n2, n3;

    cout << "Digite 3 números inteiros diferentes:" << endl;
    cin >> n1 >> n2 >> n3;

    if (n1 > n2 && n1 > n3) {
        if (n2 > n3)
             cout << n1 << " " << n2 << " " << n3 << endl;
        else
            cout << n1 << " " << n3 << " " << n2 << endl;
    } 
    else if (n2 > n1 && n2 > n3) {
        if (n1 > n3)
             cout << n2 << " " << n1 << " " << n3 << endl;
        else
            cout << n2 << " " << n3 << " " << n1 << endl;
    }
    else {
        if (n1 > n2)
            cout << n3 << " " << n1 << " " << n2 << endl;
        else
            cout << n3 << " " << n2 << " " << n1 << endl;
    }

    system("pause");
}