
// includes
#include <stdio.h>
#include <stdlib.h>


// mainVariables
int longitud; // entero longitud ( nos servira para almacenar el tamaño del arrreglo que desea el usuario )


// main
int main() {

    printf( "Ingresa la longitud del vector: " );
    scanf( "%i", &longitud ); // pedimos el tamaño al usuario y lo almacenamos en longitud

    int array[ longitud ]; // creamos el arreglo con la longitud que dijo el usuario
    int * pArray = array; // el apuntador pArray toma la direccion de memoria y valor 0 de array
    printf( "Mostrado del arreglo ( con apuntadores y numeros random )\n" );
    for ( int i = 0; i < longitud; i++ ) { // bucle para recorrer cada posicion y valor de pArray
        int nAleatorio = rand() % 11; // generamos un numero aleatorio
        array[ i ] = nAleatorio; // guardamos ese valor en nuestro arreglo en la posicion de i
        printf( "* ( pArray + %i ) = %i\n", i, * ( pArray + i ) ); // imprimimos el valor de mi apuntador dependiento de i
    };
    void free( void * pArray );

    return 0;

};