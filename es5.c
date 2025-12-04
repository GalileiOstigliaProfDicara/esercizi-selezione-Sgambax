/*L’utente inserisce una temperatura in Celsius e il calcolatore la converte in Fahrenheit ed in Kelvin. Se la temperatura inserita è minore dello zero assoluto 
(-273,15), il calcolatore segnala un errore.
Si ricordi che:
Fahrenheit = (9/5) · Celsius + 32
Kelvin = Celsius + 273,15*/

#include <stdio.h>

int main(){

    float celsius, fahrenheit, kelvin;
    printf("Inserisci temperatura in Celsius: ");
    
    scanf("%f", &celsius);

       if (celsius >= -273.15) {

        kelvin = celsius + 273.15;
        fahrenheit = (9/5) * celsius + 32;

        printf("La tua temperatura in Kelvin è: %f invece in Fahrenheit è: %f", kelvin, fahrenheit);

       } else {

        printf("Errore");
       }

    return 0;
}