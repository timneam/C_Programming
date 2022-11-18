#include <stdio.h>
#define maxrow 10
#define maxcol 10

void matrix_read(float x[][maxcol], int *ptr_row, int *ptr_col);
void matrix_ops(float A[][maxcol], float B[][maxcol], float C[][maxcol], int num_row, int num_col, int choice);

int main()
{
    int num_row, num_col, i = 0, j = 0;
    int choice = 0;

    printf("\nEnter an option:\n1) C = A + B \n2) C = A - B \n\n Your option is: ");
    scanf("%d", choice);

    float A[maxrow][maxcol], B[maxrow][maxcol], C[maxrow][maxcol];
    matrix_read(A, &num_row, &num_col);
    matrix_read(B, &num_row, &num_col);
    matrix_ops(A, B, C, num_row, num_col, choice);
    printf("\n");
    for (i = 0; i < num_row; ++i)
    {
        for (j = 0; j < num_col; ++j)
        {
            printf("%f ", C[i][j]);
        }
        printf("\n");
    }
}
void matrix_read(float x[][maxcol], int *ptr_row, int *ptr_col)
{
    int i, j;
    printf("\n number of rows in matrix: ");
    scanf("%d", ptr_row);
    printf("\n number of column in matrix: ");
    scanf("%d", ptr_col);
    printf("\n Enter elements at a time");
    for (i = 0; i < *ptr_row; ++i)
    {
        for (j = 0; j < *ptr_col; ++j)
        {
            printf("\n Element %d %d = ", i + 1, j + 1);
            scanf("%f", &x[i][j]);
        }
    }
}
void matrix_ops(double A[][maxcol],double B[][maxcol],double C[][maxcol],int num_row,int num_col, int choice)
{
    int i,j,k,p;

    p=num_col;
    switch(choice)
    {
     case 1:
        for (i=0;i<num_row;++i)
        {
            for (j=0;j<num_col;++j)
            {
                C[i][j]=A[i][j]+B[i][j];
            }
        }
        break;
    case 2:
        for (i=0;i<num_row;++i)
        {
            for (j=0;j<num_col;++j)
            {
                C[i][j]=A[i][j]-B[i][j];
            }
        }
        break;
    case 3:
        for (i=0;i<num_row;++i)
        {
            for (j=0;j<num_col;++j)
            {
                C[i][j]=0.0;
                for(k=0;k<p;++k)
                {
                    C[i][j]=C[i][j]+A[i][k]*B[k][j];
                }
                
            }
        }
        break;
    }
}