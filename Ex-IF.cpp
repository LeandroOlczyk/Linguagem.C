#include <stdio.h>
#include <stdlib.h>

int main () {
    
    
    int a, b, c;
    
    
    printf ("Digite um valor Inteiro: ");
    scanf ("%i",&a);
    
    printf ("Digite um valor Inteiro: ");
    scanf ("%i",&b);
        
    printf ("Digite um valor Inteiro: ");
    scanf ("%i",&c);
  
if (a>b && b>c) printf ("%i %i %i\n", a, b, c);
else if (a>c && c>b) printf ("%i %i %i\n", a, c, b);
else if (b>a && a>c) printf ("%i %i %i\n", b, a, c);
else if (b>c && c>a) printf ("%i %i %i\n", b, c, a);
else if (c>a && a>b) printf ("%i %i %i\n", c, a, b);
else if (c>b && b>a) printf ("%i %i %i\n", c, b, a);

    system ("pause\n");
    
 return 0;   
}
