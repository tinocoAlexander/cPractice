//Directivas de Preprocesador y Variables
#include <stdio.h>
#define PI 3.1416 // Macro 

int y = 5;//Aqui es donde se guarda el data segment

int main(){
    int x = 10; //variable local
    int suma = 0;

    suma = PI + x;

    printf("La suma es: %i",suma,"\n");
    return 0;
}