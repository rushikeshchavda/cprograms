#include<stdio.h>
#define SIZE 32
#define total_movies 5

struct movies
{
    int movie_name[SIZE];
    int duration;
};

void main()
{
    int position=0,new_position=1,old_position=0;
    struct movies b1;

    while(position<total_movies)

    {
        printf("\nenter %d movie name",position+1);
        scanf("%s",b1.movie_name);
        printf("\n enter the duration of the %d movie in minutes",position+1);
        scanf("%d",&b1.duration);
        position++; 
    }
    for (position=0;position<total_movies;position++)    
    printf("\nMOVIE NAME=%s  duration=%d",b1.movie_name,b1.duration);

    for(old_position=0;old_position<5;old_position++)
    {
        if (new_position>old_position)
        {
         old_position=new_position;
        }
        
    }  
    printf("\n %d movie is the shortest movie",position);
}

