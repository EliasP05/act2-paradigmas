#include <iostream>
using namespace std;

class Auto {
private:
    string propietario;
    int kilometraje;

public:
    Auto(string nombre, int km) {
        propietario = nombre;
        kilometraje = km;
    }

void setKilometraje(int km) {
        kilometraje = km;
    }
    void mostrarPropietario() {
        cout << "Propietario: " << propietario << endl;
    }
    void mostrarKilometraje() {
        cout << "Kilometraje: " << kilometraje << endl;
    }
};

int main() {
    Auto fitito("Miguel Alvarez", 11000);

    fitito.mostrarKilometraje();
    fitito.mostrarPropietario();

fitito.setKilometraje(12000);
fitito.mostrarKilometraje();

    return 0;
}