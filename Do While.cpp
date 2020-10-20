#include <stdio.h>
#include <stdlib.h>

int main () {
    
    int alunos, continuar, contador;
    float nota1, nota2, nota3, total, geral, media;
    
    continuar = 0;
    contador=1;
    total=0;
    
    printf ("Informe o Numero de Alunos: ");
    scanf ("%i",&alunos);
        
    
    
    do {
    
    printf ("Informacoes do Aluno Numero %i\n", contador);
    printf ("Primeira Nota: ");
    scanf ("%f",&nota1);
    printf ("Primeira Nota: ");
    scanf ("%f",&nota2);    
    printf ("Primeira Nota: ");
    scanf ("%f",&nota3);
    
    media = (nota1+nota2+nota3)/3;
    printf ("A Media deste aluno foi: %f\n", media);
    
    total = total+nota1+nota2+nota3;
    
    continuar++;
    contador++;
    
    }
    while (continuar != alunos) ;
    
    
    geral=((total/3)/alunos);
    
    printf ("A Media desta turma de alunos foi de: %f\n", geral);
    
    
    system ("pause");
        
 return 0;   
}
