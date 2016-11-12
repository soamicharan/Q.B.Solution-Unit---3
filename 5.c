#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str[25];
    printf("Enter a string.\n");
    scanf("%s",&str);
    int a=strlen(str);
    int b,count=0;
    strlwr(str);
    for(b=0;b<a;b++)
    {
        if(str[b]=='a'||str[b]=='e'||str[b]=='i'||str[b]=='o'||str[b]=='u')
            count++;
    }
    printf("No. of Vowels = %d\n",count);
    getch();
}
