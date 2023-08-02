#include <bits/stdc++.h>
//#include <iostream>

using namespace std;

int main(){
    int a = 65;
    double d = 1.125125;
    char c = 'a';
    // setprecision(n) : selecciona la cantidad máxima de números que
    // aparecen después de un punto decimal (n-1) en double y float
    //
    // fixed : fija la cantidad de números que aparecen después del
    // punto decimal al máximo, i.e., 1.6 imprimiria cero para los
    // digitos restantes

    cout << d << '\n';
    cout << setprecision(10);
    cout << d << '\n';
    cout << fixed;
    cout << d << '\n';

    // También se puede poner todo en una línea
    // cout << setprecision(n) << fixed;

    // Conversiones
    // Para convertir un número decimal a un entero y vice versa
    cout << (int)d << '\n'; // Notacion usual, la que usaremos por el resto del código
    cout << int(d) << '\n'; // Notacion funcional

    cout << (double)a << '\n'; 

    // Para convertir un char a entero (ascii) y viceversa
    cout << (int)c << '\n';
    cout << (char)a << '\n';

    // Entrada
    // Para leer desde la terminal, utilizamos cin
    // Syntax:
    // cin >> nombre;
    // cin >> nombre1 >> nombre2 ... ; 
    
    cout << "Introduce un número entero: ";
    cin >> a;
    cout << "a: " << a << '\n';

    cout << "Introduce un número decimal: ";
    cin >> d;
    cout << "d: " << d << '\n';

    // Char
    // Aunque pongas una palabra o un dígito de más de
    // un caracter, cuando lees un char solo lee el primer 
    // caracter y deja el resto

    string res;
    cout << "Introduce una palabra (más de un caracter): ";
    cin >> c >> res;
    cout << "c: " << c << "\nres: " << res << '\n';

    // Strings
    // Para leer una palabra completa
    string s;

    cout << "Introduce una palabra: ";
    cin >> s;
    cout << "s: " << s << '\n';

    // Para leer una linea entera
    cout << "Introduce una oración: ";
    cin >> ws;
    getline(cin,s);
    cout << "s: " << s << '\n';
    // Notemos que usamos `cin >> ws` antes de `getline`, esto 
    // es necesario cuando antes de usar `getline` usamos `cin`
    // para leer otro valor, lo cual hace que en el buffer se guarde
    // un salto de línea. Si lees lo anterior sin ésto, solo imprimiría
    // salto de línea.
    //
    // cin >> ws : Elimina todos los caracteres de espacio como
    // los espacios, tabs y saltos de línea. Otra opción es usar
    // `cin.ignore()`
}
