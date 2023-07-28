#include <bits/stdc++.h>

using namespace std;

int main() {
    // En C++ hay varios tipos de datos que vienen
    // incluidos por defecto, los principales y más
    // usados son los siguientes:

    // Enteros:

    // Un `int` es un entero de 32 bits, por lo que puede 
    // representar enteros en el rango: [-(2^31), 2^31-1]
    // En la librería estándar de C++ existen las constantes
    // que definen éstos límites.
    int minint = INT_MIN, maxint = INT_MAX; 

    cout << "int ->\t\tMínimo: " << minint << " , Máximo: " << maxint << '\n';

    // Un `long long int`, o solamente `long long` es un
    // entero de 64 bits, por lo que puede representar 
    // enteros en el rango: [-(2^63), 2^63-1]
    // También existen las constantes que definen éstos límites
    long long minll = LONG_LONG_MIN, maxll = LONG_LONG_MAX;

    cout << "long long ->\tMínimo: " << minll << " , Máximo: " << maxll << '\n';

    // IMPORTANTE: Algo que tenemos que tener en cuenta es que
    // un `long long` puede tener el valor de un `int` pero no
    // siempre se cumple lo contrario

    int i = INT_MAX;
    long long ll = i;

    cout << i << " == " << ll << '\n';

    ll =  LONG_LONG_MAX;
    i = ll;
    
    cout << i << " != " << ll << '\n';

    cout << '\n';

    // Números decimales:

    // Un `float` es un número con decimales con poca precisión
    // representado con 32 bits, por la poca precisión su uso no
    // es muy común en la programación competitiva.
    //
    // Al escribir un float se pone al final del número una `f`
    // para diferenciarlo de un `double`.
    float f = 1.5f;

    cout << "float ->\tf: " << f << '\n';

    // Un `double` es un número decimal de 64 bits, lo cuál 
    // lo hace uno de los tipos de datos más usados al
    // representar decimales.
    // Por otra parte tenemos el `long double`, que está
    // representado por 128 bits, lo que lo hace aún más
    // preciso.
    double d = 1.5;
    long double ld = 1234.123;

    cout << "double ->\td: " << d << '\n';
    cout << "long double ->\tld: " << ld << '\n';

    cout << '\n';

    // Caracteres y Strings

    // Un `char` en C++ es un tipo de dato que representa un caracter
    // del código ascii, así que una variable del tipo `char` no
    // puede contener más de un símbolo. 
    char c1 = 'x', c2 = '?';

    cout << "char ->\t\tc1: " << c1 << " , c2: " << c2 << '\n';
    // Para poder almacenar una cadena de caracteres (string), en
    // C++ existe el tipo de dato `string` que forma parte del
    // header "string" (#include <string>), que es parte de la
    // librería estándar de C++.
    string s = "Hola Mundo";

    cout << "string ->\ts: " << s << '\n';

    // IMPORTANTE: Notemos que hay diferencia entre escribir un
    // simple caracter y una cadena de caracteres: el tipo de comillas.
    // Cuando escribimos un caracter lo hacemos con comillas simples ('')
    // y cuando escribimos una cadena, lo hacemos con comillas dobles ("")
    // por lo que 'a' no es lo mismo que "a"
    
    // Las siguientes dos líneas de código generan un error:
    // char c3 = "a";
    // string s2 = 'a';

    cout << '\n';

    // Booleanos

    // Un `bool` es un tipo de datos que representa únicamente dos valores:
    // verdadero y falso.
    // Este sirve para representar condiciones, si es que se cumplen
    // es verdadero y falso en cualquier otro caso.
    // También existen dos palabras reservadas para estos valores:
    // `true` y `false`.
    bool b1 = true, b2 = false;

    cout << "bool ->\t\tb1: " << b1 << " , b2: " << b2 << '\n';

    // Notemos que en consola éstos se representan con 1 (verdadero)
    // y 0 (falso). Por otra parte, cualquier número distinto de cero 
    // se evalua como verdadero y el cero como falso.

    bool b3 = 16, b4 = 0;

    cout << "bool ->\t\tb1: " << b3 << " , b2: " << b4 << '\n';
    
}

