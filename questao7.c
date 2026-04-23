#include <stdio.h>
#include <stdlib.h>
/*
    Autora: Luana
    Data: 23/4/26
*/
int ordena (int *a, int *b, int *c)
{
    
    int aux;
    if (*b<*a) 
    {
        aux=*a;
        *a=*b;//valor armazenado em b inicialmente vai para primeira posição
        *b=aux;//valor armazenado em a inicialmente vai para segunda posição
        if (*c<*b) 
        {
            aux=*b;
            *b=*c;//valor armazenado em c vai para segunda posição
            *c=aux;//valor armazenado em a inicialmente vai para a terceira posição
        }
    }
    if (*c<*a)
    {
        aux=*a;
        *a=*c;//valor armazenado inicialmente em c vai para primeira posição
        *c=aux;//valor inicialmente armazenado em a vai para a terceira posição
        if (*c<*b) 
        {
            aux=*c;
            *c=*b;//valor inicialmente armazenado em b vai para a terceira posição
            *b=aux;//valor inicialmente armazenado em a vai para a segunda posição
        }
    }
    if (*c<*b)
    {
        int aux=*b;
        *b=*c;//valor inicialmente em c vaip para segunda posição
        *c=aux;//valor inicialmente armazenado em b vai para terceira posição
    }
    if (*a==*b && *b==*c) return 1;
    else return 0;
    
}
int main()
{
    int x, y, z;
    scanf("%d%d%d",&x,&y,&z);
    ordena(&x,&y,&z);
    printf("%d %d %d\n",x, y, z);
    return 0;
}
