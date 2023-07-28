#include <bits/stdc++.h>

using namespace std;

int main(){
    // Operadores Aritméticos

    // Los operadores aritméticos son los relacionados
    // a las operaciones entre números y en C++ están 
    // los siguientes: 
    int a = 11, b = 2;
    cout << "a: " << a << " , b: " << b << '\n';
    // Suma
    cout << "a+b == " << a+b << '\n';

    // Resta
    cout << "a-b == " << a-b << '\n';

    // Multiplicación
    cout << "a*b == " << a*b << '\n';

    // División (entera)
    cout << "a/b == " << a/b << '\n';

    // Módulo
    cout << "a (mod b) == " << a%b << '\n';

    cout << '\n';

    // IMPORTANTE: Notemos que las operaciones son dentro
    // de los rangos del tipo de dato y exceder éstos puede
    // llevar a comportamiento indefinido, e.g:
    a = INT_MAX;
    b = 2;

    cout << "a: " << a << " , b: " << b << '\n';

    cout << "a+b != " << a+b << '\n';

    cout << "a*b == " << a*b << '\n';

    cout << '\n';
    a = INT_MIN;
    b = -2;

    cout << "a: " << a << " , b: " << b << '\n';

    cout << "a+b != " << a+b << '\n';

    cout << "a*b == " << a*b << '\n';

    // Otra detalle que debemos recordar es que
    // la división (y módulo) entre cero no está permitida.
    //
    // Las siguiente líneas generan un error
    // a = 1;
    // b = 0;
    // cout << a/b << '\n';

    cout << '\n';

    // Los mismos operadores existen para números decimales
    // a excepción de módulo.

    double x = 2.5, y = 0.2;

    cout << "x: " << x << " , y: " << y << '\n';

    // Suma
    cout << "x+y == " << x+y << '\n';

    // Resta
    cout << "x-y == " << x-y << '\n';

    // Multiplicación
    cout << "x*y == " << x*y << '\n';

    // División (con decimales)
    cout << "x/y == " << x/y << '\n';

    // Con decimales se permite la división entre cero
    // esta tiene distintos resultados con 0 y -0

    cout << "0:" << 1.0/0.0 << " , -0: " << 1.0/(-0.0) << '\n';

    cout << '\n';

    // También existe una forma rápida de incrementar y
    // decrementar el valor de una variable por 1, que es
    // con el operador `++` y `--` respectivamente.
    a = 10;
    cout << "a: " << a << '\n';
    a++; // También es válido usar `++a`
    cout << "a: " << a << '\n';
    a--; // `--a`
    cout << "a: " << a << '\n';

    // IMPORTANTE: Aunque usar `a++` y `++a` tengan el mismo
    // significado, cambian en la forma en la que son 
    // evaluados, e.g.:
    // si a = 10
    // cout << a++ << '\n' regresaría 10, primero imprime y
    // después evalua y cout << ++a << '\n' regresaría 11,
    // primero evalua y después imprime.

    cout << '\n';

    // Operadores lógicos

    // En C++ existen los siguientes operadores lógicos
    bool f1 = true, f2 = false;

    cout << "f1: " << f1 << " , f2: " << f2 << '\n';

    // NOT (Negación)
    cout << "not f1: " << !f1 << " , not f2: " << !f2 << '\n';

    // OR
    cout << "f1 or f2: " << (f1 || f2) << '\n';

    // AND
    cout << "f1 and f2: " << (f1 && f2) << '\n';

    // También existe el operador XOR que regresa verdadero
    // si y solo si ambas expresiones son distintas.
    // Equivalente a ((f1 || f2) && !(f1 && f2))
    cout << "f1 xor f2: " << (f1 ^ f2) << '\n';

    return 0;
}
