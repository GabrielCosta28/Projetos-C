#include <stdlib.h>
#include <stdio.h>
#define tam 100
int ordemdecrescente(int n)
{

    if (n<1)
    {
        return 0;
    }

    else
    {
        printf("%d,",n);
        return (ordemdecrescente(n-1));
    }


}

int OrdemCrescente( int n)
{

    if(n>=0)
    {
    (OrdemCrescente(n-1));  
     printf("%d,",n);       
    }
    else
    {
     return 0;
    }



}

int main ()
{
    int n1,n2,flag;
    printf("\n\t1-IMPRESSaO ANTECESSORES RECURSIVA DE FORMA DECRESCENTE");
    printf("\n\t2-IMPRESSaO ANTECESSORES RECURSIVA DE FORMA CRESCENTE");

    scanf("%d",&flag);


    switch(flag)
    {
    case 1:
    printf("DIGITE UM NUMERO PARA ORDENAR SEUS ANTECESSORES EM FORMA DECRESCENTE (max 100)"); //mudar o valor maximo na definição de tam
    scanf("%d",&n1);

    n1=ordemdecrescente(n1);
    printf("%d",n1);
    break;

    case 2:
    printf("DIGITE UM NUMERO PARA ORDENAR SEUS ANTECESSORES EM FORMA CRESCENTE (max 100)"); //mudar o valor maximo na definição de tam
    scanf("%d",&n2);

    n2=OrdemCrescente(n2);
    printf("%d",n2);
    break;
    }


}
