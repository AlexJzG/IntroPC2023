#include <bits/stdc++.h>

using namespace std;

int main(){
    // La forma de declarar una variable es la siguiente: 
    //
    // dtype name;
    //
    // Donde `dtype` es el tipo de dato y name es el nombre
    // de la variable.

    // Al momento de declarar un tipo de dato
    // tienes dos opciones:
    // Declaras la variable y lo inicializas con algún valor.
    int a = 1; 
    // Declaras la variable sin inicializar.
    int b; 
    // En el último caso, este valor guarda un valor aleatorio,
    // que es el valor que guardaba en memoria el espacio al
    // que se le asignó el valor

    cout << "a: " << a << ",  b: " << b << '\n';

    // Al momento de declarar distintas variables de un mismo
    // tipo, puedes hacerlo en la misma línea separando las 
    // variables por comas.
    int x = 10, y = 100, z; // z no ha sido inicializado

    // A cualquier variable, le puedes asignar otro valor
    // del mismo tipo en otra parte del programa
    z = 1000; // Ahora z guarda 1000

    cout << "x: " << x << ", y: " << y << ", z: " << z << '\n';

    return 0;
}
