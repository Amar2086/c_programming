#include<stdio.h>

int main()
{
    int x,y,z,j,k,l;
    int big, d, b, c ;
     char a;
    scanf("%d",&x);

    //example
    if(x>5)
    {
       y=3;
    }
    else
    {
        y=4;
    }
    printf("\n%d\n",y);

    // let's do it in another way

    getchar();

    scanf("%d",&z);
    y=(z>8?5:6);
    printf("\n%d\n",y);

    getchar();
    // Another example of same kind

    scanf ( "%c", &a ) ;
    y = ( a >= 65 && a <= 90? 1 : 0 ) ;
    printf("\n%d\n",y);
    getchar();

    //Another example of same kind

    int i ;
     scanf ( "%d", &i ) ;
    ( i == 1 ? printf ( "Amitabh" ) : printf ( "All and sundry" ) ) ;
    getchar();

    //Another example of same kind

     char f = 'm' ;
     printf ( "%c", ( f >= 'm' ? f : '!' ) ) ;
     getchar();

      //Another example of same kind

     scanf("%d%d%d",&d,&b,&c);
     big = ( d > b ? ( d > c ? 3: 4 ) : ( b > c ? 6: 8 ) ) ;
     printf("%d",big);
     getchar();

      //Another example of same kind

     scanf("%d%d%d",&j,&k,&l);
      j>k? (l=j):(l=k);
      printf("%d",l);

     //the reason to keep many program in a single code is to let understand the big code
     //next time it will be easy

    return 0;
}
