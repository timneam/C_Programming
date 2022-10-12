// Pseudocode

/*

BEGIN
    x0 <-- input
    y0 <-- input
    m <-- input
    c <-- input

    READ X,Y,M,C

    PRINT equation <-- y = mx + c
    PRINT parallel equation <-- y = mx + c

    perpendicular m <-- m * pm =-1, pm = -1/m
    perpendicular c <-- y0 - (pn*x0)

    parallel c <-- y0 - (m*x0)

    PRINT perpendicular equation <-- y=pmx+c

END

*/

#include <stdio.h>
int main()

{
float m, pm, c, pec, pac, x0, y0, equation;

    printf("\n Enter the X and Y Value for point P: ");
    scanf("%f %f", &x0, &y0);

    printf("\n Enter the gradient and c-intercept: ");
    scanf("%f %f", &m, &c);

    printf("\n Equation of line is: Y = %fx + %f\n", m, c);

    pm = -1/m;
    pec = y0 - (pm*x0);

    printf("\n The equation perpendicular to the first equation is Y = %fx + %f", pm, pec);

    pac = y0 - (m*x0);

    printf("\n The Equation parallel to the Point where P(%f, %f) lies is Y = %fx + %f", x0,y0,m,pac);
}