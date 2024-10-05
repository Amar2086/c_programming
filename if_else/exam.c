#include<stdio.h>

int main()
{
    int m1,m2,m3,m4,m5,per;
    printf("Enter the mark of the five Subjects");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);

    per=(m1+m2+m3+m4+m5)*100/500;
    if (per>=60)
    {
      printf("first grade");
    }
    else
    {
        if (per>=50)
        {
            printf("Second Division");
        
        }        
        else
        {
            if (per>=40)
            {
                printf("Third Division");
            }
            else
            {
                printf("failed");
            }
        }
        
        
    }
    
 return 0;
}