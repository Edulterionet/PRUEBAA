#include <iostream>
using namespace std;

int main() {
double horas , minutos ;

cout<<"Ingrese la cantidad de horas"; cin>> horas;
cout<<"Ingrese la cantidad de minutos"; cin>> minutos;

Pago_final = horas;

    if (minutos > 0) {
        Pago_final = Pago_final + 1;
    }
    double totalAPagar = Pago_final * 5.00;

    cout << "\n--- Resumen de Cobro ---" << endl;
    cout << "Horas a cobrar: " << Pago_final << endl;
    cout << "Total a pagar: S/. " << totalAPagar << endl;

    return 0;
}
}
