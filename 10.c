#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2;
    printf("Enter No. of elements in arr1.\n");scanf("%d",&n1);printf("Enter No. of element in arr2.\n");scanf("%d",&n2);
    int arr1[n1],arr2[n2],mergearr[n1+n2],a;
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
        mergearr[a+n1]=arr2[a];
    }
    printf("Merged Array-\n");
    for(a=0;a<n1+n2;a++)
        printf("%d\n",mergearr[a]);
        getch();
}


