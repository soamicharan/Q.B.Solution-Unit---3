#include<stdio.h>
#include<conio.h>

int main()
{
   int n;
    printf("Enter Number of Entries.\n");scanf("%d",&n);
    printf("Enter Numbers.\n");
    int a,arr[n],b,temp;
    for(a=0;a<n;a++)
    scanf("%d",&arr[a]);

    for(a=0;a<n-1;a++)
    {
        for(b=0;b<n-a-1;b++)
        {
            if(arr[b]>arr[b+1])
            {
                temp=arr[b];
                arr[b]=arr[b+1];
                arr[b+1]=temp;
            }
        }
    }
    printf("Sorted Array.\n");
    for(a=0;a<n;a++)
        printf("%d\n",arr[a]);
    getch();
}


