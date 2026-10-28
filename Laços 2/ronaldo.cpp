#include <iostream>

using namespace std;

int main() {
    int n, i;
    long long fatorial = 1; // Usa long long para suportar números maiores

    cout << "Digite um numero inteiro positivo: ";
    cin >> n;
 
    if (n < 0) {
        cout << "Nao existe fatorial de numero negativo!" << endl;
    } else {
        for (i = 1; i <= n; i++) {
            fatorial *= i; // Multiplica acumulando o valor
        }
        cout << "O fatorial de " << n << " e: " << fatorial << endl;
    }

    return 0;
}