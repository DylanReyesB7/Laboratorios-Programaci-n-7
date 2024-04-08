#include <iostream>
#include <string>

using namespace std;

class Persona {
private:
    string nombre;
    int edad;
    string ocupacion;

public:
    void setNombre(string nom) {
        nombre = nom;
    }

    void setEdad(int ed) {
        edad = ed;
    }

    void setOcupacion(string oc) {
        ocupacion = oc;
    }

    string getNombre() {
        return nombre;
    }

    int getEdad() {
        return edad;
    }

    string getOcupacion() {
        return ocupacion;
    }
};

int main() {
    Persona persona1;
    persona1.setNombre("Juan");
    persona1.setEdad(30);
    persona1.setOcupacion("Ingeniero");

    cout << "Nombre: " << persona1.getNombre() << ", Edad: " << persona1.getEdad() << ", Ocupacion: " << persona1.getOcupacion() << endl;

    return 0;
}

