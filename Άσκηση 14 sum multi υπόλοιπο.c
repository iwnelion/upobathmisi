#include <stdio.h>

int main()
{
    int x, y,z,sum,multi,ypoloipo;
    printf("gimme 3 nums:");
    scanf("%d %d %d",&x,&y, &z);
    sum=x+y+z;
    printf("athrisma: %d \n", sum);
    multi=x*y*z;
    printf("ginomeno: %d \n", multi);
    ypoloipo=multi % 2;
    printf("to ypoloipo einai: %d",ypoloipo);
    

    return 0;
}
