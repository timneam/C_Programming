#include <stdio.h>
#include <math.h>
#define MAX_SIZE 500
void stats(float x[], int N, float *p_var);
int main()
{
    float x[MAX_SIZE];
    float var;
    int N, i;
    printf(" Enter number of student taking examination: ");
    scanf("%d", &N);
    for (i = 0; i < N; ++i)
    {
        printf("Enter exam mark for student(%d):", i);
        scanf("%f", &x[i]);
    }
    stats(x, N, &var);
    printf("\n Examination statistics\n");
    printf("\n No of student taking exam=%d\n", N);
    printf("\n Standard deviation of examination mark =%f\n", var);
}
void stats(float x[], int N, float *p_var)
{
    int i;
    float sumx, sumxx, p_mean;
    sumx = x[0];
    sumxx = x[0] * x[0];
    for (i = 1; i < N; ++i)
    {
        sumx += x[i];
        sumxx += x[i] * x[i];
    }
    p_mean = sumx / N;
    *p_var = (sumxx - N * (p_mean * p_mean)) / (N - 1);
}