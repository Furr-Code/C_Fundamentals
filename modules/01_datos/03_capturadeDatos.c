/**
 * CAPTURA DE DATOS POR TECLADO
 *
 * Para capturar datos usamos el parametro scanf(), el cual requerira que espesifiquemos el
 * tipo de dato a recivir y la variable a almacenar en caso de requerirse.
 *
 * NOTA: para scanf() las variables van seguidas al caracter `&`
 */

#include <stdio.h>

int main()
{
    int edad;
    printf("Escriba su edad:    ");
    scanf("%d", &edad);                     // solicitamos un INT
    printf("Tu edad es: %d años.\n", edad); // Imprimimos lo que se guarda e la variable.

    // Ejemplo para los double

    double altura;
    printf("Escriba su altura:  ");
    scanf("%lf", &altura); // para double scanf() necesitara el parametro `%lf`
    printf("Tu altura es: %.2f metros.\n", altura);

    // Ejemplo para los Char[] (String)

    char name[20]; // se requiere utilizar un arreglo de caracteres con tamaño definido.
    printf("Escribe tu nombre:  ");
    scanf("%s", &name); // solicitamos el nombre
    printf("Tu nombre es: %s.\n", name);

    return 0;
}