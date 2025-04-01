#include <stdio.h> 

void cuadrado(int numero);
void Invertir(int a, int b);
void Ordenar(int a,int b);

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

    int c,d;
    printf("Ingrese el primer valor:");
    scanf("%d",&c);
    printf("Ingrese el segundp valor:");
    scanf("%d",&d);
    Ordenar(c,d);

return 0;
}
void cuadrado(int numero) {
    int resultado = numero * numero;
    printf("El cuadrado de %d es %d\n", numero, resultado);
    
}
void Invertir(int a, int b){
    int temp = a;  
    a = b;         
    b = temp;      
    printf("Dentro de la funcion Invertir: a = %d, b = %d\n", a, b);
}
void Ordenar(int a,int b){
    int mayor, seg;
    if (a>b)
    {
       mayor=a;
        seg=b; 
    }else 
    {
        mayor=b;
        seg=a;
    }
    
    printf("Ordenados: a= %d, b = %d\n", seg, mayor);
    
}