#include <stdio.h>
int main()
{
    static int
        y[13] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096};
    int i, diff1 = 0, diff2 = 0, a, *ptr_y;


    for (i = 0; i < 3; i++)
    {
            ptr_y = y;
        diff1 += y[i];
        diff2 += *(ptr_y + 2 * i) - y[i];
        ++ptr_y;

        printf("diff1: %d \n", diff1);
        printf("diff2: %d \n", diff2);
        printf("ptr_y: %d \n\n", ptr_y);
    }
    printf("\nfinal diff1: %d \n", diff1);
    printf("final diff2: %d \n", diff2);
    printf("final ptr_y: %d \n", ptr_y);
    return 0;
}