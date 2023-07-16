#include <stdio.h>

void ft_write(int **b)
{
    int c = 100;
    *b = &c;
}

int main()
{
    int a = 20;
    int *b;
    b = &a;
    printf("%p\n", b);
    ft_write(&b);
    printf("%d", a);
}