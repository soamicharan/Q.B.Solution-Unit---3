#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
    printf("Enter dimension of square matrix.\n");
    scanf("%d",&i);
    int mat[i][i],a,b;
    printf("Enter Matrix.\n");
    for(a=0;a<i;a++)
        for(b=0;b<i;b++)
        scanf("%d",&mat[a][b]);
    printf("Transpose of Matrix - \n");
    for(a=0;a<i;a++)
    {
        for(b=0;b<i;b++)
            printf("%d ",mat[b][a]);
        printf("\n");
    }
    getch();
}


