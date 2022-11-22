
// includes
#include <stdio.h>
#include <stdlib.h>


// globalVariables
int dimension1; // aqui guardaremos el valor que ingrese el usuario para la d1
int dimension2; // aqui guardaremos el valor que ingrese el usuario para la d1
int cero = 0; // 0 es para que el apuntador tome este valor
int uno = 1; // 1 igual xd ( osea para no tener que igualarlo, mejor lo apuntamos y se ve mas cool )


// getDimensiones
void getDimensiones() { // funcion para obtener las 2 dimensiones

    do { // bucle para que muestre los mensajes... mientras que las dimensiones sean diferentes
        system( "cls" );
        if ( dimension1 != dimension2 ) { // si las dimensiones son diferentes entonces ...
            printf( "Las dimensiones deben ser de igual longitud, para que la matriz tenga una diagonal principal y secundaria\n" );
        };
        printf( "Valor de dimension 1: " );
        scanf( "%i", &dimension1 ); // el usuario ingresa el valor de d1
        printf( "Valor de dimension 2: " );
        scanf( "%i", &dimension2 ); // el usuario ingresa el valor de d2
    } while ( dimension1 != dimension2 ); // este bucle se repetira mienras d1 sea diferente a d2

};


// main
int main() {

    getDimensiones(); // usamos nuestra funcion para tomar los valores de d1 y d2
    int * pArray[ dimension1 ][ dimension2 ]; // creamos un apuntador de tipo arreglo con 2 dimensiones la d1 y d2

    for ( int i = 0; i < dimension1; i++ ) { // bucle para rellenar todos los espacioes en 0, [ 0, 0, 0, 0, 0 ..., 0 ]
        for ( int j = 0; j < dimension2; j++ ) {
            pArray[ i ][ j ] = &cero;
        };
    };

    int diagonal2 = dimension1 - 1; // toma el valor de la ultima posicion del arreglo
    for ( int i = 0; i < dimension1; i++ ) { // bucle para rellenar los 1
        pArray[ i ][ i ] = &uno;
        pArray[ i ][ diagonal2 - i ] = &uno;
    };

    /* 5 x 5
    diagonal2 = 4 - 4 = 0
    i = 4
    1   0   0   0   1
    0   1   0   1   0
    0   0   1   0   0
    0   1   0   1   0
    1   0   0   0   1
    */

    system( "cls" );
    printf( "Matriz de %i x %i", dimension1, dimension2 );
    for ( int i = 0; i < dimension1; i++ ) { // bucle para imrpimir la matriz en d1
        printf( "\n" );
        for ( int j = 0; j < dimension2; j++ ) { // bucle para imrpimir la matriz en d2
            printf( "%i   ", * pArray[ i ][ j ] );
        };
    };

    return 0;

};
