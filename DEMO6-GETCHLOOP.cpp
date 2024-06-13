#include <iostream>
#include <conio.h> 

using namespace std;

string getchString();

int main() {

    // Implementaremos un loop de getch() para escribir un string

    // Primero creamos el string que vamos a usar
    string user_input;

    cout<<"Escritor de strings con getch(): ";

    // Vamos a tomar el resultado de getchString() y asignarlo a user_input
    user_input = getchString();

    // Ponemos el string en pantalla
    cout<<"El string que ha escrito es: "<<user_input;
}

string getchString() {

    // La variable que va a guardar nuestro string en nuestra función
    string function_return = "";

    // Asignaremos variables que contengan las IDs de las teclas BACKSPACE y ENTER (Return)
    char BACKSPACE_ID = 8;
    char RETURN_ID = 13;

    // Asignamos el contenedor del caracter que el usuario va escribiendo
    char c_char = getch();

    // Vamos a continuar el ciclo hasta que el usuario presione ENTER
    while(c_char != RETURN_ID) {
        // Aqui van a haber dos partes:
        // 1. Presionamos un caracter cualquiera
        // 2. Presionamos BACKSPACE
        if(c_char != BACKSPACE_ID) {
            // Añadimos el caracter al string
            function_return += c_char;

            // Imprimimos el caracter en pantalla
            cout<<c_char;
        } else {
            // Si el string no esta vacío, sobreescribiremos el último caracter por un espacio
            if(function_return.length()) {
                // Redimensionamos el string para quitar el último caracter
                function_return.resize( function_return.length() - 1);

                // Usamos escape sequences para sobreescribir el último caracter
                cout<<"\b \b";
            }
        }

        // Cada vez que terminamos el ciclo pedimos otro caracter
        c_char = getch();
    }

    cout<<"\n";
    return function_return;
}