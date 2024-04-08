#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void ordenarNombres(vector<string>& nombres) {
    int n = nombres.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (nombres[j] > nombres[j + 1]) {
                swap(nombres[j], nombres[j + 1]);
            }
        }
    }
}

int main() {
    vector<string> nombres;
    nombres.push_back("Juan");
    nombres.push_back("Maria");
    nombres.push_back("Carlos");
    nombres.push_back("Ana");
    nombres.push_back("Pedro");

    cout << "Nombres desordenados:" << endl;
    for (int i = 0; i < nombres.size(); ++i) {
        cout << nombres[i] << endl;
    }

    ordenarNombres(nombres);

    cout << "\nNombres ordenados:" << endl;
    for (int i = 0; i < nombres.size(); ++i) {
        cout << nombres[i] << endl;
    }

    return 0;
}

