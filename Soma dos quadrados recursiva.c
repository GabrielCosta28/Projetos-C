#include <stdio.h>

int somarec(int n, int s)
{
    if (n <= 0)
    {
        return s;
    }
    else
    {
        s = s + n * n;
        return somarec(n - 1, s);  // passa a soma atual para a próxima chamada
    }
}

int main()
{
    int n1;
    printf("Digite um número para ser calculado a soma dos quadrados de seus antecessores inteiros: ");
    scanf("%d", &n1);
    int resultado = somarec(n1, 0);  // começa com soma 0
    printf("Resultado é %d\n", resultado);
    return 0;
}
