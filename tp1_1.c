#include <stdio.h>

int main(){

    printf("Hola Mundo");
    int x = 10;         
    int *ptr = &x;      

    // 1) El contenido del puntero 
    printf("\nContenido del puntero: %d\n", *ptr);

    // 2) La dirección de memoria almacenada por el puntero 
    printf("\nDireccion de memoria almacenada por el puntero: %p\n", ptr);

    // 3) La dirección de memoria de la variable 
    printf("\nDireccion de memoria de la variable x: %p\n", &x);

    // 4) La dirección de memoria del puntero 
    printf("\nDireccion de memoria del puntero ptr: %p\n", &ptr);

    // 5) El tamaño de memoria utilizado por la variable x
    printf("\nTamano de memoria de la variable x: %zu bytes\n", sizeof(x));

return 0;
}