#include <stdio.h>

int main ()
{
    int idade;
    char inicial;
    
    printf ("Digite sua idade inicial: ");
    scanf("%d", &idade);
    printf ("Digite sua idade final:  ");
    scanf ("%c", &inicial);
    
    //rever como ajustar printf
    printf ("%f\nInicial: %c \nIdade: %d", inicial, idade")
    
    return 0;
   
}
