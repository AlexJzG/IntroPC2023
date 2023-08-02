#include <bits/stdc++.h>

using namespace std;

int main(){
    // Condicionales

    // If
    // Syntax: 
    // if(condicíón){
    //     Código a ejecutarse si se cumple `condición`
    // }
    //
    // Un If ejecuta un código cuando una cierta condición
    // se cumple.
    cout << "Ejemplo 1 If: \n";
    int a = 2, b = 1;
    if(a > 0){
        cout << "Esto se imprime\n";
    }
    cout << "Ejemplo 2 If: \n";
    if(a < 0){
        cout << "Esto no se imprime\n";
    }

    // Else
    // Syntax:
    // if(condición){
    //     Código a ejecutarse si se cumple `condición`
    // }else{
    //     Código a ejecutarse si no se cumple `condición`
    // }
    cout << "Ejemplo 1 Else: \n";
    if(a%2 == 0){
        cout << "a es par\n";
    }else{
        cout << "a es impar\n";
    }

    cout << "Ejemplo 2 Else: \n";
    if(b%2 == 0){
        cout << "b es par\n";
    }else{
        cout << "b es impar\n";
    }

    // Else If
    //
    // Syntax:
    // if(condicion1){
    //     Código que se ejecuta si condicion1 == true
    // }else if(condicion2){
    //     Código que se ejecuta si condicion2 = true
    // }...
    //
    // (Nota: Es posible poner varios else if, tambíen es opcional terminar con un else)

    cout << "Ejemplo 1 Else If: \n";
    a = 0;
    if(a < 0){
        cout << "Es un número negativo\n";
    }else if(a == 0){
        cout << "Es el cero\n";
    }else{ // Equivalente en este caso a `}else if(a > 0){`
        cout << "Es un número positivo\n";
    }

    // Operador Ternario
    // Syntax:
    // condicion ? expr1 : expr2;
    // donde expr1 se evalua si la condicion es verdadera, si no
    // se evalua expr2
    a = 5;
    b = 3;
    string s = "Hello";
    ( a == s.size() ) ? ( cout << "YES\n" ) : ( cout << "NO\n"  );
    ( b == s.size() ) ? ( cout << "YES\n" ) : ( cout << "NO\n"  );
    int c = (a == b) ? a : b;
    cout << c << '\n';

    // Tambíen puedes usar el operador ternario dentro de otro

    ( a == b ) ? ( cout << a << '\n' ) : ( cout << ((b%2 == 0) ? b : b+1 ) << '\n');
}
