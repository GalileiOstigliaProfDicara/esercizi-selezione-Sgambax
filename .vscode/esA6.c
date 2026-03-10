/*Il programma genera un numero naturale casuale compreso tra 1 e 10 e l’utente deve indovinare il numero generato, il programma termina quando viene indovinato.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int num_cas, num_utente, min = 1, max = 10;
    int tentativi = 0, tentativi_max=3;
    srand(time(NULL));
    num_cas= rand() % (max - min + 1) + min;


    do{
        printf("Indovina il  umero generato tra 1 e 10:");
        scanf("%d", &num_utente);
        tentativi++;
        if(num_cas != num_utente){
            printf("MAle maLE!!\n Ti rimangono %d tentativi\n", tentativi_max - tentativi);
        }
    } while(num_cas != num_utente && tentativi < tentativi_max);

     if(tentativi > 3){
        printf("Hai perso!1");
     } else {
        printf("AURA");
     }

     return 0;

}