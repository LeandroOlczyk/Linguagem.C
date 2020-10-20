#include <stdio.h>
#include <stdlib.h>

int main () {
    
    int num1, num2, x;
    
    printf ("Informe o Primeiro Numero Inteiro: ");
    scanf ("%i",&num1);
    printf ("Informe o Segundo Numero Inteiro: ");
    scanf ("%i",&num2);
    
   
   if (num1<num2) {
   
    while (num1<num2){
          x=num1++;
          printf ("%i\n", x);
          }
          }
    
    if (num1>num2) {
                   
                   while (num1>num2) {
                   x=num1--;
                   printf ("%i\n", x);
                                     
                   }
                   }
          
system ("pause");
 
 
 return 0;   
 }

