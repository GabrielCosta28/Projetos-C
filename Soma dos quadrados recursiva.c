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
        return somarec(n - 1, s);  // passa a soma atual para a pr�xima chamada
    }
}

int main()
{
    int n1;
    printf("Digite um n�mero para ser calculado a soma dos quadrados de seus antecessores inteiros: ");
    scanf("%d", &n1);
    int resultado = somarec(n1, 0);  // come�a com soma 0
    printf("Resultado � %d\n", resultado);
    return 0;
}
