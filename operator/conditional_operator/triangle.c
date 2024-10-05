#include<stdio.h>
int main(){
    
    int s1,s2,s3,ls,sum;
    scanf("%d%d%d",&s1,&s2,&s3);
    s1>s2?((s1>s3)?(ls=s1,sum=s2+s3):(ls=s3,sum=s2+s1)):((s2>s3)?(ls=s2,sum=s1+s3):(ls=s3,sum=s1+s2));
    sum>ls? printf("The triangle is valid"):printf("The triangle is invalid");
    return 0;

}
// here i have just done in shortest way. 