/*Il programma genera un numero naturale casuale compreso tra 1 e 100 e l’utente deve indovinare il numero generato, 
ad ogni tentativo il programma dice se il numero inserito era troppo alto o troppo basso; 
il programma termina quando viene indovinato.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int num_casuale, num_utente, min = 1, max = 100;
    int tentativi = 0;
    srand(time(NULL));
    num_casuale= rand() % (max - min + 1) + min;

    do {
        printf("Indovina il numero tra 1 e 100:\n");
        scanf("%d", &num_utente);
        tentativi++;
        if(num_utente > num_casuale){
        printf("Numero troppo alto\n");
      } else { 
        if (num_utente < num_casuale){
        printf("Numero troppo basso\n");
        }
      }
    
    }  while(num_casuale != num_utente);

    if(tentativi < 3 && num_casuale == num_utente){
        printf("Aura");
    } else{ 
        if(tentativi < 10 && num_casuale == num_utente){
        printf("Bravino");
    } else {
            printf("Brutto!!");
        }
    } 

    
     return 0;
}