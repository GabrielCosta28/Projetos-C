#include <stdlib.h>
#include <stdio.h>
#define tam 10


int soma(int A[],int n)
{
    int i;

    if (n==0)
    {
        return A[0];
    }

    return A[n]+soma(A,n-1);

}

int main()
{

    int i,s,V[tam];

    for (i=0;i<tam;i++)
    {
        printf("V[%d]:",i); //mudar o tamanho do vetor na definição de tam
        scanf("%d",&V[i]);
    }

    s=soma(V,tam-1);
    printf("%d",s);
    return 0;

}
