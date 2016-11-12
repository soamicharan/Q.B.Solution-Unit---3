#include<stdio.h>
#include<conio.h>
int main()
{
    int b,c,d,n,f,g,h,i,j,k;
    printf("Enter limit of Prime Numbers Range.\n");
    scanf("%d",&n);
    int a[n];
    for(b=2;b<=n;b++)  //assigning array for index 2 to nth with all serial wise numbers.
        a[b]=b;
    printf("Prime Numbers are-\n");
    for(c=2;c<=n;c++)
    {
        if(a[c]==0)   //this condition verifies the eliminated non-prime numbers.
            continue;
            else
                {
                for(d=c+1;d<=n;d++)
                   {
                    if(d%a[c]==0)
                    a[d]=0;       //if number is not prime then its value replaced by 0 in order to terminating that number
                    else continue;
                   }
                }
        printf("%d\n",a[c]);
    }
getch();
}
