#include <stdio.h> 

int cuadrado(int numero);

int main(){

    int numero, resultado;

    
    printf("Ingresa un numero: ");
    scanf("%d", &numero);


    resultado = cuadrado(numero);
    printf("El cuadrado de %d es %d\n", numero, resultado);

return 0;
}
int cuadrado(int numero) {
    return numero * numero;
}