#include <iostream>
// Incluimos conio.h para poder usar getch()
#include <conio.h>

using namespace std;

int main() {

    // Vamos a crear un programa en donde el usuario pueda digitar su caracter favorito
    string MI_CHAR = "Mi caracter favorito es: ";
    char c_char;

    // Pedimos al usuario que presione un caracter
    std::cout<<"<<Presione su caracter favorito>>\n";

    // Asignamos el caracter que devuelve getch() a c_char
    c_char = getch();

    // Agregamos el caracter al string
    MI_CHAR += c_char;

    // Imprimimos el string nuevo
    std::cout<<""<<MI_CHAR;

}