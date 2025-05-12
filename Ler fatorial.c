#include <stdlib.h>
#include <stdio.h>

int fatorial(int a)
{
    int i,resultado=1;
    for(i=1;i<=a;i++)
    {
        resultado=resultado*i;
    }
    return resultado;
}

int main()
{
    int i,n1,n2,n3;

    printf("digite o valor de n1:");
    scanf("%d",&n1);
    printf("digite o valor de n2:");
    scanf("%d",&n2);
    printf("digite o valor de n3:");
    scanf("%d",&n3);

            system("cls");

    n1=fatorial(n1);
    n2=fatorial(n2);
    n3=fatorial(n3);

printf("valor fatorado de n1 %d\n",n1);
printf("valor fatorado de n2 %d\n",n2);
printf("valor fatorado de n3 %d\n",n3);

return 0 ;
}

