#include <bits/stdc++.h>

using namespace std;

int main(){
    // Arreglos

    // En C++, un arreglo se utiliza para almacenar multiples
    // valores de un tipo de dato en una sola variable.
    //
    // Para declarar un arreglo primero se especifica
    // el tipo del arreglo, después el nombre, seguido
    // de corchetes [] donde se especifica el tamaño del
    // arreglo, i.e., la cantidad de valores que va a
    // almacenar.

    int arr[3];

    // En la mayoría de lenguajes de programación, los arreglos
    // están indexados a partir de 0, así que el primer elemento
    // va a estar en el índice 0 y el último elemento estará en
    // el índice n-1 (donde n es el tamaño del arreglo).
    //
    // Para acceder a un elemento de el arreglo, solamente necesitas
    // escribir el nombre de la variable seguido por unos corchetes []
    // que va a contener el índice del elemento que quieres acceder.

    arr[0] = 1; // Primer valor
    arr[1] = 2; // Segundo valor
    arr[2] = 3; // Tercer valor

    cout << "arr[0]: " << arr[0] << '\n';
    cout << "arr[1]: " << arr[1] << '\n';
    cout << "arr[2]: " << arr[2] << '\n';

}
