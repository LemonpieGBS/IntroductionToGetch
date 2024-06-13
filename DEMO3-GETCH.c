#include <stdio.h>
#include <conio.h> // Incluimos conio.h para poder usar getch()

int main() {

    // Se pide al usuario que presiona una tecla
    printf("Presione una tecla: ");

    // Se imprimirá en pantalla el caracter de la tecla presionada usando getch()
    printf("%c",getch());

    return 0;
    
}