#include <iostream>

using namespace std;

int main() {
    int correctPassword = 123;
    int password;

    cout << "Ingrese la contrasena de 3 numeros: ";
    cin >> password;

    if (password == correctPassword) {
        cout << "Acceso concedido." << endl;
    } else {
        cout << "Contrase�a incorrecta. Acceso denegado." << endl;
    }

    return 0;
}

