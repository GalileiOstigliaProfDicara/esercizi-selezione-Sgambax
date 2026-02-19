/*L’utente deve continuare a inserire dei caratteri fino a che non inserisce uno dopo l’altro due caratteri consecutivi 
(ad esempio si ferma dopo aver letto uno dopo l’altro ‘a’ e ‘b’).*/


#include <stdio.h>

int main(){

    char carattere1 = 'a', carattere2 = 'b';

     printf("Inserisci caratteri uno dopo l'altro: ");

    while(carattere1 - carattere2 != carattere1){
         printf("Inserisci carattere: ");
    scanf("%c", &carattere1);

        if((carattere1 - carattere2 == carattere1) || (carattere2 - carattere1 == carattere1) ){
            printf("Hai inserito due caratteri in ordine");
        } else {
            printf("Inserisci nuovamente!");
        }
    }
    return 0;
}