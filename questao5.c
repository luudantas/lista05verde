#include <stdio.h>
#include <stdlib.h>
/*
    Autora: Luana
    Data: 23/4/26
*/
int main()
{
    //variável char
    char c, *pC=&c;
    scanf(" %c",&c);

    printf("Valor: %c\n",c);
    printf("Endereco: %d\n",&c);
    printf("Tamanho: %d bytes\n", sizeof(c));

    printf("Valor: %d\n",pC);
    printf("Endereco: %d\n",&pC);
    printf("Tamanho: %d bytes\n", sizeof(pC));

    //variável inteira
    int a, *pA=&a;
    scanf("%d",&a);

    printf("Valor: %d\n",a);
    printf("Endereco: %d\n",&a);
    printf("Tamanho: %d bytes\n", sizeof(a));

    printf("Valor: %d\n",pA);
    printf("Endereco: %d\n",&pA);
    printf("Tamanho: %d bytes\n", sizeof(pA));

    //variável float
    float b, *pB=&b;
    scanf("%f",&b);

    printf("Valor: %f\n",b);
    printf("Endereco: %d\n",&b);
    printf("Tamanho: %d bytes\n", sizeof(b));

    printf("Valor: %d\n",pB);
    printf("Endereco: %d\n",&pB);
    printf("Tamanho: %d bytes\n", sizeof(pB));

    //variável double
    double d, *pD=&d;
    scanf("%lf",&d);

    printf("Valor: %lf\n",d);
    printf("Endereco: %d\n",&d);
    printf("Tamanho: %d bytes\n", sizeof(d));

    printf("Valor: %d\n",pD);
    printf("Endereco: %d\n",&pD);
    printf("Tamanho: %d bytes\n", sizeof(pD));
    return 0;
}
