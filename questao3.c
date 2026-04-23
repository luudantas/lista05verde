#include <stdio.h>
#include <stdlib.h>
/*
    Autora: Luana
    Data: 23/4/26
*/
int main()
{
    int a, b, c;
    scanf("%d",&a);
    printf("Nome: a\n");
    printf("Endereco: %p\n",&a);
    printf("Valor: %d\n",a);

    scanf("%d",&b);
    printf("Nome: b\n");
    printf("Endereco: %p\n",&b);
    printf("Valor: %d\n",b);

    scanf("%d",&c);
    printf("Nome: c\n");
    printf("Endereco: %p\n",&c);
    printf("Valor: %d\n",c);
    return 0;
}