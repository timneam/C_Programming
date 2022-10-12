#include <stdio.h>

#define PI 3.141592654

void main (void);
void main (void)

{
    float radius, height, volume, surface_area;

    /* Title */
    printf("\n Cylinder.c");
    printf("\n computes volume and surface area of a cylinder.");

    /* radius and height */
    printf("\n\n Enter radius of cylinder: ");
    scanf("%f", &radius);

    printf("\n\n Enter height of cylinder: ");
    scanf("%f", &height);

    /* computes volume and surface area*/
    volume = PI*radius*radius*height;
    surface_area = 2*PI*radius*(radius + height);

    /* print results */
    printf("\n volume of cylinder is %10.4f", volume);
    printf("\n surface area of cylinder is %10.4f \n\n", surface_area);
}