//sum of the element of the diagonal

#include <stdio.h>


int main()
{
	int arr[4][4]=
	{
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
	
	int(*ptr)[4]=arr;
	int sum=0;
	for(int i=0;i<4;i++)
	{
		sum=sum+*(*(ptr+i)+i);
	}
	
	printf("%d",sum);
	
	return 0;
}