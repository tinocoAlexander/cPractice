#include <stdio.h>

int main() {
    int q = 12;
    float w = 12.232;
    char e = 'w';  // Uso de comillas simples para un carácter

    printf("%i %.3f %c\n", q, w, e); // Se incluye \n dentro de la cadena

    int a;

    printf("Escribe un valor entero: \n");
    scanf("%i", &a);  // Uso correcto de scanf

    printf("El valor del entero es: %i\n", a); // Uso correcto de printf

    return 0;
}
