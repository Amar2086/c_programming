#include<conio.h>
#include<stdio.h>

int main()
{
     int x,y;
     char a;

     scanf("%d%d",&x,&y);

     getchar();

     a=getchar();
     
    
     switch (a)
     {
     case '+':
        /* code */
         
        printf("%d",x+y);
        break;
    case '-':
        printf("%d",x-y)  ;
        break;
    case '*' :
        printf("%d",x*y);      
     
     default:
      printf("Error Input");
        break;
     }

 return 0;
}