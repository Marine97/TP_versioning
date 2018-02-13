#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, M, i,j;
    printf("saisissez un nombre entre 0 et 9999\n");
    scanf("%d",&x);
    M=x/1000;
    for (i=0; i<M; i++)
    {
        printf("M");
    }
    M=x%1000;
    for(j=0; j<M; j++)
    {
        printf("D");
    }




    return 0;
}
