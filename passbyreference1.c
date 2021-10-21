#include<stdio.h>
void big(int *x,int *y) //bigger values come first
{
    int temp,original;
    temp=*x;
    original=*y;
    if(*x<*y)
    {
        *x=*y;
        *y=temp;
    }
    else
    {
       *x=temp;
       *y=original;

    }

    printf("*x=%d *y=%d",*x,*y);
}

void main()
{
    int a,b;

    printf("enter a value for a");
    scanf("%d",&a);

    printf("entr a value for b");
    scanf("%d",&b);

    big(&a,&b);

    printf("\na=%d b=%d",a,b);


}