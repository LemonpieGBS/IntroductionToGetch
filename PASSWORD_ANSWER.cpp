#include <iostream>
#include <conio.h> 

using namespace std;

string getchString();
string getchStringProtected();

int main() {

    // Ahora haremos una implementación de Inicio de Sesión con Contraseña

    // Primero creamos los string que vamos a usar
    string user_account, user_password;

    // Usaremos el getchString() normal para el usuario
    cout<<"Introduzca su usuario\n#: ";
    user_account = getchString();

    // Usaremos getchStringProtected() para la contraseña
    cout<<"Introduzca su contraseña\n#: ";
    user_password = getchStringProtected();

    // Resultado:
    cout<<"\nSu usuario es: "<<user_account<<", su Contraseña: "<<user_password;
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

string getchStringProtected() {

    // Funcion casi igual a getchString()
    string function_return = "";

    char BACKSPACE_ID = 8;
    char RETURN_ID = 13;

    char c_char = getch();

    while(c_char != RETURN_ID) {

        if(c_char != BACKSPACE_ID) {

            function_return += c_char;
            // Lo unico que cambia es que imprimimos el caracter '*' en lugar del caracter ingresado
            cout<<"*";

        } else {

            if(function_return.length()) {

                function_return.resize( function_return.length() - 1);
                cout<<"\b \b";
            }
        }

        c_char = getch();
    }

    cout<<"\n";
    return function_return;
}