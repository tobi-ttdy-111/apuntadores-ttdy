
// includes
#include <stdio.h>
#include <stdlib.h>


// globalVariables
int notas[ 3 ][ 10 ]; // arreglo bidimensional

// promedioMateria
int promedioMateria( int materia ) { // funcion con nombre promedioMateria ( es para sacar el promedio )

    int suma = 0;
    for ( int i = 0; i < 10; i++ ) {
        suma += notas[ materia - 1 ][ i ];
    };
    return suma;

};


// main
int main() {

    for ( int i = 0; i < 3; i++ ) { // bucle para pasar por cada dimension 0, 1 y 2
        for ( int j = 0; j < 10; j++ ) { // bucle para rellenar aleatoriamente cada posicion en mi d2
            int nAleatorio = rand() % 11; // generamos numero aleatorio
            notas[ i ][ j ] = nAleatorio; // almacenamos ese numero aleatorio
        };
    };

    int materia; // aqui almacenaremos el numero de materia que quiera el usuario 1, 2 o 3
    printf( "\n1 - Materia 1" );
    printf( "\n2 - Materia 2" );
    printf( "\n3 - Materia 3" );
    printf( "\nIngresa el numero respectivo a la materia: " );
    scanf( "%i", &materia ); // pedimos al usuario que ingrese el numero de la materia

    int sumatoria = promedioMateria( materia ); // usamos la funcion promedioMateria() para sacar el promedio de la materia n que quiso el usuario
    float promedio = sumatoria / 10.0; // sacamos chido el promedio
    printf( "Promedio de la materia %i es: %.1f", materia, promedio  ); // imrpimimos c:

    return 0;

};