#include <stdio.h>
#include <stdlib.h>
# include  "nodo.h"

int main(){

  NodoPtr head=NULL;
    stampa(head);

    inserisciCoda(&head,6);
    
    stampa(head);

    inserisciDopo(head,9,4);
   
    stampa(head);

    inserisciTesta(&head,3);
    
    stampa(head);

    inserisciDopo(head,5,13);
    
    stampa(head);

    inserisciCoda(&head,19);
    
    stampa(head);

    clear(&head);

 return 0;
}
