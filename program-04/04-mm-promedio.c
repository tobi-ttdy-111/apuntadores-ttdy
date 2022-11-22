// includes
#include <stdio.h>
#include <stdlib.h>


// main
int main() {

    int nDatos; // entero datos ( para guardar el numero de datos que quiera el usuario )
    printf( "Cantidad de datos: " );
    scanf( "%i", &nDatos ); // pedimos al usuario ingrese el numero de datos

    float * numeros; // apuntador de tipo flotante ( 2.15 .. )
    numeros = malloc( sizeof( float ) * nDatos ); // aumentamos el tamaño de mi apuntador de numeros

    float valor = 0; // flotante datos ( para que el usuario introduzca los datos )
    for ( int i = 0; i < nDatos; i++ ) {
        printf( "Valor numero %i : ", i );
        scanf( "%f", &valor );
        * ( numeros + i ) = valor;
    };

    float suma;
    float media;
    float valorMenor = * ( numeros ); // tomamos el valor 0 de mi apuntador de numeros
    float valorMayor = * ( numeros ); // tomamos el valor 0 de mi apuntador de numeros
    for ( int i = 0; i < nDatos; i++ ) { // bucle para recorrer mi apuntador numeros
        suma += * ( numeros + i ); // vamos sumando cada valor de * numeros
        if ( * ( numeros + i ) < valorMenor ) { valorMenor = * ( numeros + i ); }; // verificamos si es menor
        if ( * ( numeros + i ) > valorMayor ) { valorMayor = * ( numeros + i ); }; // verificamos si es mayor
    };
    media = suma / nDatos; // sacamos la media
    printf( "La media es: %.2f\n", media );
    printf( "Valor menor: %.2f\n", valorMenor );
    printf( "Valor mayor: %.2f\n", valorMayor );

    return 0;

};