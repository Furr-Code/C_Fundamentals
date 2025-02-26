/**
 * ESTRUCTURA DE LA FUNCIÓN
 *
 * consiste en dos partes la definición y la declaración como se verá a continuación:
 */

#include <stdio.h>

// Declaración de la función
int suma(int a, int b);

int main()
{
    int num1, num2; // solicitamos los datos
    printf("Escribe el primer número:  ");
    scanf("%d", &num1);
    printf("Escribe el segundo número:  ");
    scanf("%d", &num2);

    int resultado = suma(num1, num2);
    printf("El resultado es %d\n", resultado);

    return 0;
}

// Definición de la función
int suma(int a, int b)
{
    return a + b;
}