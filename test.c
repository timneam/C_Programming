// #include <stdio.h>
// float x,y,z,a,b,c;
// int main()
// {
//     int d;
// x=1.7e-30;
// y=2.0e-8;
// z=2.01e38;
// a=x*y+d;
// b=y/z;
// c=3.4e38+b;
// printf("z value is :%e\n",a);
// printf("xx value is :%e\n",b);
// printf("yy value is :%e\n",c);
// }











#include <stdio.h>
void square(void); /*function prototype */
int a=2;
int b=2;
int main()
{
printf("\n Value of a in main=%d",a);
printf("\n Value of b in main=%d",b);
square();
printf("\n Value of a in main=%d",a);
printf("\n Value of b in main=%d",b);
square();
printf("\n Value of a in main=%d",a);
printf("\n Value of b in main=%d",b);
square();
return 0;
}
void square(void)
{
static int a=2; /*static local */
int b=2;
a *=a;
b *=b;
printf("\n Value of a in square function =%d",a);
printf("\n Value of b in square function =%d",b);
}













// #include <stdio.h>
// #define MAX 3

// double equation (double b[], double y, int n);

// int main()
// {
//     double a[MAX]={1.0,2.0,3.0},x=2.0,result;
//     int i, n=MAX;
//     result=equation(a,x,n);
//     printf("\n The value of f(x) evaluated at %lf is %lf",x,result);
//     return 0;
// }

// double equation(double b[], double y, int m)
// {
//     int i;
//     double fx, powx;
//     fx=b[0];
//     powx=1.0;
//     for(i=1;i<=m;++i)
//     {
//         powx *=y;
//         fx +=b[i]*powx;
//     }
//     return(fx);
// }

