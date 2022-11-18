#include <stdio.h>
#define Quiz1_weight 0.2
#define Quiz2_weight 0.2
#define MP_weight 0.3
#define exam_weight 0.3
#define max_student 150
/*structure definition*/
struct grade_record
{
    char name[51];   /* student name*/
    char ID_num[51]; /* ID number*/
    float Quiz1;
    float Quiz2;
    float MP;
    float exam;
    float total; /*total score*/
};
int main()
{
    struct grade_record student[max_student];            /*array of structure*/
    float AE1_sum, AE2_sum, CP_sum, exam_sum, total_sum; /*sum*/
    float AE1_avg, AE2_avg, CP_avg, exam_avg, total_avg; /*average*/
    int i, num;
    /*initialize sum to zero*/
    AE1_sum = 0;
    AE2_sum = 0.0;
    CP_sum = 0.0;
    exam_sum = 0.0;
    total_sum = 0.0;
    printf("\n Student Grades");
    printf("\n No. of students in class : ");
    scanf("%d", &num);
    /*get data for each student and compute total score and sum*/
    for (i = 0; i < num; ++i)
    {
        printf("\n \n Enter the student name: ");
        scanf("%s", student[i].name);
        printf("\n \n Enter the student ID: ");
        scanf("%s", student[i].ID_num);
        printf("\n \n Enter the Quiz1 marks: ");
        scanf("%f", &student[i].Quiz1);
        printf("\n \n Enter the Quiz2 marks: ");
        scanf("%f", &student[i].Quiz2);
        printf("\n \n Enter the Mini-project(MP) marks: ");
        scanf("%f", &student[i].MP);
        printf("\n \n Enter the exam marks: ");
        scanf("%f", &student[i].exam);
        /* compute total for this student*/
        student[i].total = (student[i].Quiz1) * Quiz1_weight + (student[i].Quiz2) * Quiz2_weight + (student[i].MP) * MP_weight + (student[i].exam) * exam_weight;
    }
    /*print heading and table*/
    printf("\n \n ----------------------------------------------");
    printf("----------------------------------------------------");
    printf("\n NAME    ID      Quiz1            Quiz2             MP                     Exam Total");
    printf("\n ----------------------------------------------");
    printf("----------------------------------------------------");
    for (i = 0; i < num; ++i)
    {
        /*print data for this student*/
        printf("\n %s\t %s\t", student[i].name, student[i].ID_num);
        printf("%4.2f\t\t %4.2f\t\t %4.2f\t\t %4.2f\t\t %4.2f\t\t", student[i].Quiz1, student[i].Quiz2, student[i].MP, student[i].exam, student[i].total);
    }
    printf("\n ----------------------------------------------");
    printf("----------------------------------------------------");
}