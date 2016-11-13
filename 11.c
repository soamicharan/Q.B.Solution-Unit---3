#include<stdio.h>
#include<conio.h>
#define TERMINATE -1
int main()
{
    int n1,n2;
    printf("Enter No. of elements in arr1.\n");scanf("%d",&n1);printf("Enter No. of element in arr2.\n");scanf("%d",&n2);
    int arr1[n1],arr2[n2],mergearr[n1+n2],a,b,count=n1,d=0;
    printf("Enter arr1.\n");
    for(a=0;a<n1;a++)
    {
        scanf("%d",&arr1[a]);
        mergearr[a]=arr1[a];
    }

    printf("Enter arr2.\n");
    for(a=0;a<n2;a++)
    {
        scanf("%d",&arr2[a]);
    }
    if(n1<=n2){
    for(a=0;a<n1;a++)
    {
        for(b=a;b<n2;b++)
        {
            if(arr1[a]==arr2[b])
                arr2[b]=TERMINATE;
        }
    }
    }
    else{
        for(a=0;a<n2;a++)
    {
        for(b=a;b<n1;b++)
        {
            if(arr1[a]==arr2[b])
                arr2[b]=TERMINATE;
        }
    }
    }
    for(a=0;a<n2;a++)
    {
        if(arr2[a]==TERMINATE)
            continue;
        else
        {
            mergearr[count]=arr2[a];
            count++;d++;
        }
    }
    printf("Merged Array-\n");
    for(a=0;a<n1+d;a++)
        printf("%d\n",mergearr[a]);
        getch();
}


