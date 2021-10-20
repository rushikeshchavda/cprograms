#include<stdio.h>
void main()
{
    char gender; // M FOR MALE & F FOR FEMALE
    char *pt_gender=&gender;

    int month;
    int *pt_month=&month;

    float height;
    float *pt_height=&height;

    printf("enter your gender");
    scanf("%c",pt_gender);

    printf("\nenter your birth month");
    scanf("%d",pt_month);

    printf("\nenter your height in centimeters");
    scanf("%f",pt_height);

    printf("\n gender= %c birth month= %d height= %f",*pt_gender,*pt_month,pt_height);


}