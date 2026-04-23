#include <stdio.h>
#include <stdlib.h>
/*
    Autora: Luana
    Data: 23/4/26
*/
int main()
{
    int a, *pA=&a;
    float b, *pB=&b;
    char c, *pC=&c;
    //Primeira leitura
    scanf("%d",&a);
    scanf("%f",&b);
    scanf(" %c",&c);
    //Primeira exibição do conteúdo e endereço de tudo
    printf("%d\n",a);
    printf("%p\n",&a);

    printf("%.2f\n",b);
    printf("%p\n",&b);

    printf("%c\n",c);
    printf("%p\n",&c);

    printf("%p\n",pA);
    printf("%p\n",&pA);

    printf("%p\n",pB);
    printf("%p\n",&pB);

    printf("%p\n",pC);
    printf("%p\n",&pC);

    //Segunda leitura
    scanf("%d",&a);
    scanf("%f",&b);
    scanf(" %c",&c);

    //Segunda exibição do conteúdo de endereço de tudo, deve ser igual a primeira
    printf("%d\n",a);
    printf("%p\n",&a);
    printf("%.2f\n",b);
    printf("%p\n",&b);
    printf("%c\n",c);
    printf("%p\n",&c);
    
    printf("%p\n",pA);
    printf("%p\n",&pA);
    printf("%p\n",pB);
    printf("%p\n",&pB);
    printf("%p\n",pC);
    printf("%p\n",&pC);
    return 0;
}
