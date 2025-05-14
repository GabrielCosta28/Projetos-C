#include <stdlib.h>
#include <stdio.h>
#define tam 100
int ordemcrescente(int n)
{

    if (n<1)
    {
        return 0;
    }

    else
    {
        printf("%d,",n);
        return (ordemcrescente(n-1));
    }


}




int main ()
{
    int n1;
    printf("DIGITE UM NUMERO PARA ORDENAR SEUS ANTECESSORES EM FORMA CRESCENTE (max 100)"); //mudar o valor maximo na definição de tam
    scanf("%d",&n1);

    n1=ordemcrescente(n1);


    printf("%d",n1);
}
