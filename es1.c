/*Il programma legge due numeri e controlla se il primo è maggiore del secondo.*/

#include <stdio.h>

int main(){
  printf("Inserisci 2 numeri");

    int numero_1, numero_2;

    scanf("%d", &numero_1);
        scanf("%d", &numero_2);
if(numero_1 > numero_2) {

    printf("il primo numero: %d è maggiore del secondo: %d\n", numero_1, numero_2);

  
} else { 
  
  printf("Il primo numero: %d è minore del secondo: %d\n", numero_1, numero_2);

}

return 0;

}