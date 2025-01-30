#include <stdio.h>

// Función para la suma de dos números
void suma(int n1, int n2, int *resultado) {
    *resultado = n1 + n2;
    printf("El resultado de la suma es: %i\n", *resultado);
}

// Función para la resta de dos números
void resta(int n1, int n2, int *resultado) {
    *resultado = n1 - n2;
    printf("El resultado de la resta es: %i\n", *resultado);
}

// Función para la multiplicación de dos números
void multiplicacion(int n1, int n2, int *resultado) {
    *resultado = n1 * n2;
    printf("El resultado de la multiplicación es: %i\n", *resultado);
}

// Función para la división de dos números
void division(int n1, int n2, float *resultado) {
    if (n2 != 0) {
        *resultado = (float)n1 / n2;
        printf("El resultado de la división es: %.2f\n", *resultado);
    } else {
        printf("Error: División por cero no es permitida.\n");
    }
}

int main() {
    // Declaración de variables
    int n1, n2, opc;
    int resultado_int;
    float resultado_float;

    // Mensaje de bienvenida
    printf("Bienvenido a mi calculadora básica, a continuación elige una opción:\n");
    printf("1. Suma\n2. Resta\n3. Multiplicación\n4. División\n");
    scanf("%i", &opc);

    // Solicitud de números al usuario
    printf("Ingrese el primer número entero:\n");
    scanf("%i", &n1);
    printf("Ingrese el segundo número entero:\n");
    scanf("%i", &n2);

    // Validación de la opción ingresada
    switch (opc) {
        case 1:
            suma(n1, n2, &resultado_int);
            break;
        case 2:
            resta(n1, n2, &resultado_int);
            break;
        case 3:
            multiplicacion(n1, n2, &resultado_int);
            break;
        case 4:
            division(n1, n2, &resultado_float);
            break;
        default:
            printf("Opción no válida.\n");
            break;
    }

    return 0;
}
