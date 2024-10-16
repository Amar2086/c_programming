#include <stdio.h>
int main(int argc, char *argv[])
{
	int arr[5];
	int count_even=0;
	int count_odd=0;
	for(int i=0;i<5;i++)
	{
		scanf("\n%d",&arr[i]);
		if(arr[i]%2==0)
		{
			getchar();
		count_even++;
		printf("\n%d is an even",arr[i]);
		}
		else
		{
			getchar();
		count_odd++;
		printf("\n%d is a odd number ",arr[i]);
		}
	}
	printf("\nnumber of even number is %d",count_even);
	printf("\nNumber of the odd number is %d",count_odd);
	
	return 0;
	
}