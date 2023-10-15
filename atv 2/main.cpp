#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double valor;
    cin >> valor;

    int notas[] = {100, 50, 20, 10, 5, 2};
    double moedas[] = {1.0, 0.5, 0.25, 0.1, 0.05, 0.01};
    int notasQuantidade[6] = {0};
    int moedasQuantidade[6] = {0};

    cout << "NOTAS:" << endl;
    for (int i = 0; i < 6; i++) {
        notasQuantidade[i] = valor / notas[i];
        valor -= notasQuantidade[i] * notas[i];
        cout << notasQuantidade[i] << " nota(s) de R$ " << fixed << setprecision(2) << notas[i] << endl;
    }

    cout << "MOEDAS:" << endl;
    for (int i = 0; i < 6; i++) {
        moedasQuantidade[i] = valor / moedas[i];
        valor -= moedasQuantidade[i] * moedas[i];
        cout << moedasQuantidade[i] << " moeda(s) de R$ " << fixed << setprecision(2) << moedas[i] << endl;
    }

    return 0;
}
