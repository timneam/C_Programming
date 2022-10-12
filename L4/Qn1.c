// Pseudocode

/*

BEGIN

    READ <-- STD = 1, MEAN = 2 and Pi = 3.14159265359
    READ <-- X1, X2

    FOR 

    WHILE (X1 >= X1 INPUT, X2 = X2 INPUT, ++X1)
        GAUSSIAN <-- STD, MEAN, PI, X1
        x <- x + delta
        PRINT GAUSSIAN
    ENDWHILE

END    

*/

#include <stdio.h>
#include <math.h>

int main() {

    float x, mean, std, pi, xmin, xmax, fx, i;
    std = 1;
    mean = 2;
    pi = 3.14159265359;
    fx = 1/(sqrt(2*pi)*std)*((exp((-0.5) * pow((x-mean)/std , 2))));

    // result = (1/(std*(sqrt(2*M_PI))))*exp(-0.5 * pow((x-mean)/(std), 2));

    for (xmin; i = xmax; i+=0.5) {
        
    }

}