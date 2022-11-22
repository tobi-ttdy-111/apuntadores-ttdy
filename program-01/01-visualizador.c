
// includes
#include <stdio.h>


// globalVariables
char * pString;  // creacion de un apuntador con nombre pString
char string[ 150 ];  // [ 0, 1, 2, 3, ..., 149 ]
int i = 0;


// main
int main() {

    printf( "\nIngrese la cadena (maximo 150 caracteres): " );
    gets( string ); // obtiene strings ( textos ) >> Hola >> arreglo = { "h", "o", "l", "a" }
    pString = string; // el apuntador pString toma la direccion de memoria y valor 0 de string

    printf( "Letras:" );
    do { // bucle para recorrer cada posicion el arreglo >> 0:h, 1:o, 2:l, 3:a
        printf( "\n%c", * ( pString + i ) ); // imprimimos el valor del puntero en la posicion de ese puntero + i, >> * ( pString + i )
        i ++; // incremento de i
    } while ( * ( pString + i ) ); // condicion, mientras exista valor de * ( pString + i )
    printf( "\nNumero de caracteres es: %i", i ); // imprimimos el valor de i

    return 0;

};