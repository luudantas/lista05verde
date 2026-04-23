#include <stdio.h>
#include <stdlib.h>
/*
    Autora: Luana
    Data: 23/4/26
*/
int main()
{
    int x,y, *pX=&x, *pY=&y;
    scanf("%d%d",&x,&y);
    if (pX>pY) printf("O endereco de X eh maior: %p\n",pX);
    if (pY>pX) printf("O endereco de Y eh maior: %p\n",pY);
    return 0;
}