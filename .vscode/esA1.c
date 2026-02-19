/* L’utente inserisce un numero maggiore di uno e il programma continua a calcolare le potenze del numero inserito fino a quando una potenza supera 5000.*/ 
#include <stdio.h>

int main(){

    int numero, potenza = 1, esponente = 0;

  
    while(numero <= 1){
          printf("Inserisci numero: ");
    scanf("%d", &numero);
}

 while(potenza <= 5000){
    printf("Potenza di %d elevato a %d = %d", numero, esponente, potenza);
    potenza = potenza * numero;
    esponente++;
 }



return 0;
}