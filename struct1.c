#include<stdio.h>
#define SIZE 32
#define cast 5
struct movie

{
    char MovieName[SIZE],CastName[SIZE];
    int ticket_price;
    float duration;
};

void main()
{
    int position=0;
    struct movie b1,b[position];

    while(position<cast)
    {
        printf("enter %d cast member name",position+1);
        scanf("%s",b[position].CastName);
        position++; 
    }
    printf("enter the movie name");
    scanf("\n %s",b1.MovieName);
    
    printf("enter the ticket price");
    scanf("\n %d",&b1.ticket_price);

    printf("enter the movie duration");
    scanf("\n %f",&b1.duration);
    
     for(position=0;position<5;position++)
     {
        printf("\n cast name=%s" ,b[position].CastName);
     }

    printf("\nmovie name=%s  duration=%f  ticket price=%d",b1.MovieName,b1.duration,b1.ticket_price);

}
