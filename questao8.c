#include <stdio.h>
#include <stdlib.h>
/*
    Autora: Luana
    Data: 23/4/26
*/
int divisores (int n, int *max, int *min)
{
    int sinal=0;
    for(int i=2; i<n; i++)
    {
        if (n%i==0) 
        {
            sinal=1;
            if (i<*min) *min=i;
            if (i>*max) *max=i;
        }
    }
    if (sinal==1) return 1;
    else return 0;
    
}
int main()
{
    int n, max, min;
    scanf("%d",&n);
    printf("%d\n",divisores(n,&max,&min));
    if (divisores(n,&max,&min)==1) printf("%d %d\n",max, min);
    return 0;
}