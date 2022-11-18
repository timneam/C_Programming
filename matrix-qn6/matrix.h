#define maxrow 20
#define maxcol 20

extern double A[maxrow][maxcol];
extern double B[maxrow][maxcol];
extern double C[maxrow][maxcol];
extern int num_row;
extern int num_col;
/*define function prototype*/

void matrix_read(double x[][maxcol], int *ptr_row, int *ptr_col);
void matrix_print(double x[][maxcol],int num_row,int num_col, int choice);
void matrix_ops(double A[][maxcol],double B[][maxcol],double C[][maxcol],int num_row,int num_col,int choice);