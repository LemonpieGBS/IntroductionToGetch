#include <stdio.h>

int main() {

    // Podemos usar un entero y convertirlo en un caracter
    int i_input;

    // Pedimos un número cualquiera al usuario
    printf("Digite un numero: ");
    scanf("%d",&i_input);

    // Al asignarlo, el número se convertirá en el caracter equivalente
    char eq_char = i_input;

    // La tabla de conversión esta disponible en:
    // https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html

    // Imprimimos el caracter
    printf("El caracter equivalente es: %c", eq_char);

    return 0;
}