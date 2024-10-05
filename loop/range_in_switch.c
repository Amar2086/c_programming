#include<conio.h>
#include<stdio.h>

int main()
{
     int arr[]={1,2,5,14,20};

     for (int i = 0; i < 5; i++)
     {
        /* code */
        switch ( arr[i])
        {

        case 1 ... 5:
          printf("%d is not in the range 1-5\n",arr[i]);
            break;

        case 6 ... 15:
        printf("%d is not the range 6-15\n",arr[i]);
        break;    
        
        default:
        printf("%d is not the ramge 15-20\n",arr[i]);
            break;

        }Printf(
        
        );
     }
     

 return 0;
}

//If you don't understand it then come here again after completing array.
//it can also be done using if and and operator.