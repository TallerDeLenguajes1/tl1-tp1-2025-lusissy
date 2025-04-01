#include <stdio.h> 

void cuadrado(int numero);
void Invertir(int a, int b);

int main(){

    int numero, resultado;
    printf("Ingresa un numero: ");
    scanf("%d", &numero);
    cuadrado(numero);
    
    int variable = 22;
    printf("La direccion de la variable  es: %p\n", &variable);
    printf("El contenido de la variable  es: %d\n", variable);


    int a = 5, b = 10;
    printf("Antes de invertir: a = %d, b = %d\n", a, b);
    Invertir(a, b);
    printf("Despues de intentar invertir: a = %d, b = %d\n", a, b);


return 0;
}
void cuadrado(int numero) {
    int resultado = numero * numero;
    printf("El cuadrado de %d es %d\n", numero, resultado);
    
}
void Invertir(int a, int b) {
    int temp = a;  
    a = b;         
    b = temp;      
    printf("Dentro de la funcion Invertir: a = %d, b = %d\n", a, b);
}