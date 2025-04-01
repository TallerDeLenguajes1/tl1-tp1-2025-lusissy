#include <stdio.h> 

void cuadrado(int numero);

int main(){

    int numero, resultado;

    
    printf("Ingresa un numero: ");
    scanf("%d", &numero);

    cuadrado(numero);
    
    int variable = 22;

    printf("La direccion de la variable  es: %p\n", &variable);

    
    printf("El contenido de la variable  es: %d\n", variable);

return 0;
}
void cuadrado(int numero) {
    int resultado = numero * numero;
    printf("El cuadrado de %d es %d\n", numero, resultado);
    
}