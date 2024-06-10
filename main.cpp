#include <iostream>

using namespace std;

float calcularPromedio(float nota1, float nota2, float notaFinal) {
    return (nota1 * 0.2) + (nota2 * 0.2) + (notaFinal * 0.6);
}

float obtenerNotaMaxima(float promedio, float notaFinal) {
    return (promedio > notaFinal) ? promedio : notaFinal;
}

int main() {
    float nota1, nota2, notaFinal;
    char opcion;

    do {
        cout << "Ingresa la nota del primer parcial: ";
        cin >> nota1;

        cout << "Ingresa la nota del segundo parcial: ";
        cin >> nota2;

        cout << "Ingresa la nota del examen final: ";
        cin >> notaFinal;

        float promedio = calcularPromedio(nota1, nota2, notaFinal);

        float notaMaxima = obtenerNotaMaxima(promedio, notaFinal);

        cout << "El promedio final del alumno es: " << notaMaxima << endl;

        cout << "¿Quiere colocar una nueva nota? (s/n): ";
        cin >> opcion;

    } while (opcion == 's' || opcion == 'S');

    cout << "Programa terminado. Gracias" << endl;

    return 0;
}