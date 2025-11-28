/*L’utente inserisce la propria età e il programma dice se è maggiorenne (ovvero con età maggiore uguale a 18 anni)*/

#include <stdio.h>

int main(){
    int eta_utente;
    printf("Inserisci età: ");

    scanf("%d", &eta_utente);
    if (eta_utente >= 18) {

        printf("Sei maggiorenne");
    } else {

        printf("Sei minorenne");
    }

    return 0;
}