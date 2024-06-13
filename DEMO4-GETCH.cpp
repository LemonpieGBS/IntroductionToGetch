#include <iostream>

using namespace std;

// Ahora empezaremos a usar C++
int main() {

    // Los strings son cadenas de caracteres, y al serlo, podemos agregarle caracters
    string HOLA_MUNDO = "Hola Mundo";
    char add_ch = '!';

    // Vamos a imprimir el string antes y despues de agregar el caracter
    cout<<"String antes del agregado: "<<HOLA_MUNDO<<"\n";

    HOLA_MUNDO += add_ch; // Asi como en los numeros, usas el operador += para agregar

    cout<<"String despues del agregado: "<<HOLA_MUNDO;

    return 0;

}