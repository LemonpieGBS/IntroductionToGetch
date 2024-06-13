#include <stdio.h>

int main() {

    char a_char;

    // Podemos asignar un valor numérico a un char
    // Por ejemplo: En la tabla ASCII, 65 = 'A'

    a_char = 'A';
    // Estas dos lineas significan lo mismo
    a_char = 65;

    // Se imprimirá el caracter 'A' en la pantalla
    printf("%c",a_char);

    return 0;

}