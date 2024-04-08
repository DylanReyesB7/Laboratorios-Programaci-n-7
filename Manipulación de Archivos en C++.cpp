#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void escribirArchivo() {
    ofstream archivo("datos.txt", ios::app);
    if (archivo.is_open()) {
        string nombre;
        int edad;
        
        cout << "Ingrese el nombre: ";
        cin >> nombre;
        cout << "Ingrese la edad: ";
        cin >> edad;
        
        archivo << nombre << " " << edad << endl;
        
        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo." << endl;
    }
}

void leerArchivo() {
    ifstream archivo("datos.txt");
    if (archivo.is_open()) {
        string nombre;
        int edad;
        
        cout << "Datos almacenados en el archivo:" << endl;
        while (archivo >> nombre >> edad) {
            cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
        }
        
        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo." << endl;
    }
}

int main() {
    escribirArchivo();
    leerArchivo();
    
    return 0;
}

