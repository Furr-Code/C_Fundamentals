/**
 * ESPECIFICADORES DE TEXTO
 */

/**
 * INT: utiliza los especificadores `%d o %i`
 * FLOAT: `%f` y para 2 decimales: `%.2f`
 * DOUBLE: `%lf` y con  5 decimales: `%.51f`
 * CHAR: `%c`
 * STRING: `%s`
 * PUNTERO: `%p`
 */

#include <stdio.h>

int main()
{
    // Variables de diferentes tipos
    int edad = 25;
    float precio = 9.99;
    double pi = 3.1415926535;
    char letra = 'C';
    char nombre[] = "Yoi";
    int *ptr = &edad; // Puntero que apunta a la variable edad

    // Imprimir usando los especificadores de formato
    printf("Edad: %d\n", edad);                                  // Entero
    printf("Precio: %.2f\n", precio);                            // Float con 2 decimales
    printf("Valor de PI: %.5lf\n", pi);                          // Double con 5 decimales
    printf("Letra favorita: %c\n", letra);                       // Carácter
    printf("Nombre: %s\n", nombre);                              // Cadena de caracteres
    printf("Dirección de memoria de 'edad': %p\n", (void *)ptr); // Puntero

    return 0;
}

/*OUTPUT:
Edad: 25
Precio: 9.99
Valor de PI: 3.14159
Letra favorita: C
Nombre: Yoi
Dirección de memoria de 'edad': 0x7ffeefbff5b4
 */
