#include <stdio.h>

// Introducimos distintas variables.
// Dependiendo del tipo de variable que queramos meter.. tenemos que darle "%" distinto.

// Para números enteros, usamos "int" & "%d". (recuerdo que era desde -2.... hasta +256.000, o algo así)
// Para números con decimales usamos "float" & "%f"
// Si quieres un numero con decimales, sin los 6 decimales detrás, usa "%.1f" o "%.2f", lo adaptas.
// Para añadir un grado, lo hacemos así: "%fº\n"

// Si necesitas almacenar un valor con más de 6 cifras, usamos "double" & "lf", significa long floating point number.
// Puedes almacenar entre 15 y 16 digitos.

int main (){
    int age = 25;
    float counter = 1.5;
    float temperature = -5.55;
    double prueba = 3.14159265358979;

    printf ("You are %d years old\n", age);
    printf ("The result of the counter is %.1f\n", counter);
    printf ("The temperature outside is %.2fº\n", temperature);
    printf ("El resultado de la prueba es %\n", prueba);


    return 0;
}