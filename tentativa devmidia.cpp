#include <stdio.h>
#include <stdlib.h>

int main (){
    
    int senha_sistema = 1234;
    int login_sistema = 9999;
    
    int senha_usuario;
    int login_usuario;
    int op = 0;
    
    
    do {
        printf ("Informe o numero de Usuario: ");
        scanf ("%i", &login_usuario);
        printf ("Informe a senha: ");
        scanf ("%i", &senha_usuario);        
        
        if ((login_sistema == login_usuario) && (senha_sistema == senha_usuario)) { 
                          printf ("\nAcesso Permitido\n");
                          op = 1;}
                          else {
                                 printf ("\nAcesso Negado\n");
                                 printf ("\nDigite 1 para sair\n");
                                 printf ("Digite 0 para continuar\n");
                                 scanf ("%i", &op);
                                 system ("cls");}        
        
        } while (op != 1);
    
    
    system ("pause");
    return 0;
    }
