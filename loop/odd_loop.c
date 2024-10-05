#include<stdio.h>

int main()
{
    char another;
    int num;
    do
    {
        printf("Enter a number:");
        scanf("%d",&num);
        printf("Square and cube of %d is %d and %d",num,num*num,num*num*num);
        printf("Want to enter another number y/n");
        fflush(stdin);
        scanf("%c",&another);

    } while (another=='y');
    
    return 0;
}
/*You must be wondering why have we used the function fflush( ). The 
reason is to get rid of a peculiarity of scanf( ). After supplying a number 
when we hit the Enter key, scanf( ) assigns the number to variable num
and keeps the Enter key unread in the keyboard buffer. So when it’s 
time to supply y or n for the question ‘Want to enter another number 
(y/n)’, scanf( ) will read the Enter key from the buffer thinking that user 
has entered the Enter key. To avoid this problem, we use the function 
fflush( ). It removes or ‘flushes out’ any data remaining in the buffer. 
The argument to fflush( ) must be the buffer which we want to flush 
out. Here we have used ‘stdin’, which means buffer related with
standard input device, i.e., keyboard.*/