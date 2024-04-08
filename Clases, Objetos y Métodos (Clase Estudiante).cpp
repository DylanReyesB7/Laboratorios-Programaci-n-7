#include <iostream>
#include <string>

using namespace std;

class Persona {
protected:
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

class Estudiante : public Persona {
private:
    int numeroEstudiante;
    float promedioCalificaciones;

public:
    void setNumeroEstudiante(int num) {
        numeroEstudiante = num;
    }

    void setPromedioCalificaciones(float prom) {
        promedioCalificaciones = prom;
    }

    int getNumeroEstudiante() {
        return numeroEstudiante;
    }

    float getPromedioCalificaciones() {
        return promedioCalificaciones;
    }
};

int main() {
    Estudiante estudiante1;
    estudiante1.setNombre("Maria");
    estudiante1.setEdad(20);
    estudiante1.setOcupacion("Estudiante");
    estudiante1.setNumeroEstudiante(12345);
    estudiante1.setPromedioCalificaciones(8.5);

    cout << "Nombre: " << estudiante1.getNombre() << ", Edad: " << estudiante1.getEdad() << ", Ocupacion: " << estudiante1.getOcupacion() << ", Numero de Estudiante: " << estudiante1.getNumeroEstudiante() << ", Promedio de Calificaciones: " << estudiante1.getPromedioCalificaciones() << endl;

    return 0;
}

