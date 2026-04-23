#include <stdio.h>
#include <stdlib.h>
/*
    Autora: Luana
    Data: 23/4/26
*/
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if (&x>&y) printf("O endereco de X eh maior: %p\n",&x);
    else printf("O endereco de Y eh maior: %p\n",&y);
    return 0;
}