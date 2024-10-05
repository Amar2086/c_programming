//this is a program in which the children will get double number  chocoletes of the number they have got in their exam.

#include<conio.h>        
#include<stdio.h>

int main()
{
     int roll[5]={3,4,1,6,3};
      
      int choco[5];
      for ( int j = 0; j < 5; j++)
        {
      for( int i =0;i<5;i++)
      {
        choco[i]=roll[i]*2;
      }
      
      
        /* code */
        printf("%d\n",choco[j]);
      }
      

 return 0;
}