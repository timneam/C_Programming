#include <stdio.h>

void subtraction(float a[3], float b[3],float c[3]);

int main ()
{
    float a[3], b[3], d[3];
    int i;

    printf("\nEnter the x,y,z component of vector A : ");

    for (i=0;i<=2;++i)
    {
    printf("\nEnter the a[%d] of vector A : ",i+1);
    scanf("%f",&a[i]);
    }

    printf("\nEnter the x,y,z component of vector B : ");
    for (i=0;i<=2;++i)
    {
    printf("\nEnter the b[%d] of vector B : ",i+1);
    scanf("%f",&b[i]);
    }

    subtraction(a,b,d);
    printf("\nThe vector C of addition of two vector A and B is : ");

    for (i=0;i<=2;++i)
    {
    printf("\n d[%d] of vector C is %f: \n",i+1,d[i]);
    }
}

void subtraction(float a[3], float b[3],float d[3])
{
    d[0]=b[0]-a[0];
    d[1]=b[1]-a[1];
    d[2]=b[2]-a[2];
}