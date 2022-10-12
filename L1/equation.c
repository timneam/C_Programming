#include <stdio.h>

void main (void);
void main (void)

{
    float x1, x2, y1, y2;
    float m, c;
    float x, y;

    /* first point */
    printf("\n\n Enter the X value of the first point: ");
    scanf("%f", &x1);
    printf("\n\n Enter the Y value of the first point: ");
    scanf("%f", &y1);

    /* second point */
    printf("\n\n Enter the X value of the second point: ");
    scanf("%f", &x2);
    printf("\n\n Enter the Y value of the second point: ");
    scanf("%f", &y2);

    printf("\n\n Enter the x coordinate to be interpolated: ");
    scanf("%f", &x);

    m = (y2 - y1) / (x2 - x1);
    c = y1 - (m*x1);
    y = m*x + c;

    printf("\n\n The slope or gradient of the line = %f", m);
    printf("\n the y-intercept of the line= %f", c);
    printf("\n Y coordinate of point = %f", y);

}