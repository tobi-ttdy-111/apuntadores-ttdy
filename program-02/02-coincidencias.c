
// includes
#include <stdio.h>


// globalVariables
char * pString; // creacion del apuntador con nombre pString
char string[ 150 ]; // [ 0, 1, 2, 3, ..., 149 ]
char caracter;  // variable caracter ( la usaremos para comprobar cada caracter )
int i = 0, repeticiones = 0; // enteros i y repeticiones ( las usaremos para interar ( i ), y contar ( repeticiones ) )


// main
int main() {

    printf( "\nIngrese la cadena (maximo 150 caracteres): " );
    gets( string ); // obtenemos un string >> hola papu
    pString = string; // el apuntador pString toma la direccion de memoria y valor 0 de string
    printf( "Caracter a buscar: " ); // pide el caracter que desea buscar
    scanf( "%c", &caracter ); // el usuario ingresa el caracter >> a

    do { // bucle para recorrer cada pisicion de mi apuntador >> 0:h, 1:o, 2:l, 3:a, 4: , 5:p, 6:a, 7:p, 8:u
        if ( * ( pString + i ) == caracter ) { repeticiones ++; }; // validamos si el valor de mi apuntador + i es igual al caracter buscado, si es asi entonces mi contador ( repeticiones se incrementa )
        i ++; // incremento de i
    } while ( * ( pString + i ) ); // colocamos que este bucle se repetira mientras * ( pString + i ) exista
    printf( "El caracter %c se repitio: %i", caracter, repeticiones ); // imrpimimos el caracter buscado y el numero de veces que se repitio

    return 0;

};