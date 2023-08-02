#include <bits/stdc++.h>

using namespace std;

int main(){
    // Ciclos

    // While
    // Syntax:
    // while(condición){
    //     Código que se
    //     ejecuta mientras
    //     la condición sea
    //     verdadera
    // }
    //
    // Ejemplo:
    cout << "Ejemplo 1 While: \n";
    int a = 10;
    while(a > 0){
        cout << a << ' ';
        // Actualizamos la variable para que la condición
        // pueda ser falsa en algún momento
        a--;
    }
    cout << '\n';

    // También podemos usar el operador de decremento en la
    // condición del while
    cout << "Ejemplo 2 While: \n";
    a = 10;
    while(a-- > 0){
        cout << a << ' ';
        // Ya no necesitamos actualizar el valor dentro del while
    }
    cout << '\n';

    // En algunos casos, cuando el ciclo debe termina cuando una
    // variable se evalua como falso o cero, podemos hacer lo siguiente

    cout << "Ejemplo 3 While: \n";
    a = 10;
    while(a--){
        cout << a << ' ';
    }
    cout << '\n';

    // IMPORTANTE: Hay que tener cuidado cuando usamos lo anterior
    // ya que es no es claro y puede ser fácil confundirse, creando
    // un ciclo infinito.
    // Ejemplo:
    // a = 11;
    // cout << "Ejemplo While infinito: \n";
    // while(a){
    //     cout << a << ' ';
    //     a -= 2;
    // }
    // cout << '\n';

    // Do While
    //
    // Syntax:
    // 
    // do{
    //     Código a ejecutarse
    // } while(condición);
    //
    // El Do While es similar a While, con la única diferencia
    // de que este primero ejecuta el código dentro del ciclo
    // y después evalua la condición, haciendo que siempre se
    // ejecute al menos una iteración.
    // Ejemplo:
    cout << "Ejemplo Do While: \n";    
    a = -1;
    do{
        cout << a << '\n';
        a--;
    } while(a > 0);

    // For
    //
    // Syntax:
    // for( expr1 ; expr2 ; expr3 ){
    //     Código a ejecutarse
    // }
    // Donde,
    // - expr1 : Expresión que se ejecuta una única vez, al entrar al ciclo
    // - expr2 : Condición de ejecución del ciclo
    // - expr3 : Expresión que se ejecuta cada que termina un ciclo
    //
    // (Nota: todas éstas expresiones pueden estar vacías)

    cout << "Ejemplo 1 For: \n";
    for(int i = 0 ; i < 10 ; i++){
        cout << i << ' ';
    }
    cout << '\n';

    cout << "Ejemplo 2 For: \n";
    for(int i = 128 ; i > 0 ; i /= 2){
        cout << i << ' ';
    }
    cout << '\n';

    // Declaraciones de Salida

    // Break
    //
    // Break sirve para terminar y salir de cualquier ciclo
    // sin seguir con la ejecución del código.
    // Ejemplo:
    a = 10;
    cout << "Ejemplo Break: \n";
    while(a > 0){
        cout << a << ' ';
        if(a <= 5){
            break;
        }
        a--;
    }
    cout << '\n';

    // Continue
    //
    // Continue sirve para saltar la ejecución del final de
    // un ciclo pero no sale del ciclo, i.e., continua con su evaluación
    // Ejemplo: 
    cout << "Ejemplo Continue: \n";
    for(int i = 1 ; i <= 50 ; i++){
        if(i%2 == 0 || i%3 == 0 || i%5 == 0){
            continue;
        }else{
            cout << i << ' ';
        }
    }
    cout << '\n';

    // Ciclos Anidados
    // 
    // Dentro de cualquier ciclo, puedes usar otro ciclo

    cout << "Ejemplo Ciclos Anidados: \n";
    a = 1;
    while(a <= 7){
        for(int i = 0 ; i < a ; i++){
            cout << "*";
        }
        a++;
        cout << '\n';
    }
}
