#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main()
{
    float delta,sigma,mu,x,xmin,xmax;
    double fx;

    mu=110;
    sigma=2;
    delta=0.5;
    xmin=-x;
    xmax=x;
    printf("\n Normal Distribution of a random variable x ranging from -x to x ");
    printf("\n *********************************************************************");
    printf("\n Value of x Value of f(x)");
    printf("\n __________________________________");
    x=xmin;
    while (x<=xmax)
    {
        fx=1/(sqrt(2*PI)*sigma)*exp(-0.5*pow((x-mu),2)/pow(sigma,2));
        printf("\n %f %e",x,fx);
        x+=delta;
    }
    return 0;
}