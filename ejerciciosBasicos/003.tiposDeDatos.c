#include <stdio.h>

int main() {
    int a = 2; // Tipo de dato entero
    char b = 'a'; // Tipo de dato de un caracter
    float c = 1.123123f; // Tipo de dato decimal chiquito
    double d = 1.12312312313; // Tipo de dato decimal más grande
    short e = 1; // Tipo de int pero más pequeño
    long f = 5; // Entero grande
    long double g = 1.39108349L; // Double más grande

    printf("El valor del entero es %d\n", a);
    printf("El valor del char es %c\n", b);
    printf("El valor del flotante es %f\n", c);
    printf("El valor del double es %lf\n", d);
    printf("El valor del short es %d\n", e);
    printf("El valor del long es %ld\n", f);
    printf("El valor del long double es %Lf\n", g);

    return 0;
}
