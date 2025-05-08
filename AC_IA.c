

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 10

int main()  {

int i, j, A[tam],cont;
srand(time(NULL));
for(i=0;i<tam;i++)
    {
        A[i]=rand()%10;
    }

    for(i=0;i<tam;i++) {
        for(j=tam-1; j>i; j--)
            {
            if (A[i]>=A[j])
                {
                    cont=A[i];
                    A[i]=A[j];
                    A[j]=cont;
                }
            }
    }
for(i=0;i<tam;i++){
printf("%d ",A[i]);}
return 0;

}
