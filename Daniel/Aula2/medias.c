#include <stdio.h>

int main()
{
    
    float n1, n2, n3, n4, media;
    
    printf ("Nota 1: ");
    scanf ("%f", &n1);
    
    printf ("Nota 2: ");
    scanf ("%f", &n2);
    
    printf ("Nota 3: ");
    scanf ("%f", &n3);
    
    printf ("Nota 4: ");
    scanf ("%f", &n4);
    
    media = (n1 + n2 + n3 + n4) / 4;
    
    printf("\n\nMédia aritmética: %2.2f", media);
    
      // nao usado ";" para que seja feita a analise das duas variáveis...
      if (media >=7)
       {
        printf("\nAluno Aprovado.");
       }
     
      // nao usado ";" para que seja feita a analise das duas variáveis...
      if (media <7)
       {
        printf ("\nAluno Reprovado.");
       }
    return 0;
}
