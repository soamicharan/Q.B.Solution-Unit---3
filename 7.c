#include<stdio.h>
#include<conio.h>
#include<string.h>
#define FLAG_0 0
#define FLAG_1 1
int main()
{
    int a,b,c,d,count=FLAG_0,mcount=FLAG_1,g=0,i;
    char s1[100],s2[100],posoc[2],con=0;
    printf("Enter first string s1.\n");
    scanf("%s",s1);
    printf("Enter second string s2.\n");
    scanf("%s",s2);
    a=strlen(s1);
    b=strlen(s2);
    i=strcmp(s1,s2);  //if s1 and s2 is equal than it exist in each other fully
    if(i==0)
    {
        printf("String s1 is exist fully in string s2 and first occurrence position is - 0");return(2);
    }
    if(a>b) {  //s1 is big than s2 so it can't exist
        printf("String s1= %s cannot exist in String s2= %s because s1 is bigger then s2\n",s1,s2);return(1);}
    else
    {
        for(c=0;c<a;c++)
        {
            for(d=0;d<b;d++)
            {printf("String s1 is exist fully in string s2 and first occurrence position is - %d",posoc[0]);
                if(s1[c]==s2[d])
                {
                    count=FLAG_1;con=1;  //logic is here that if any letter of s1 matches to s2 thus count will  fixed to FLAG_1 and con will 1 which ensures that atleast one letter is matched
                    posoc[g]=c;g=1; // posoc is storing the position of first occurrence of matching letter
                }
                if(count==FLAG_0) //if any letter of s1 does not match to s2 then main count mcount will fixed to FLAG_0 which ensure that s1 is not fully exist in s2
                    mcount=FLAG_0;
                count=FLAG_0;  //we refreshes the value of count with FLAG_0
            }
        }
    }
    if(mcount==FLAG_1)//if all letters of s1 matches to s2 then mcount will always FLAG_1
        printf("String s1 is exist fully in string s2 and first occurrence position is - %d",posoc[0]);
    else if(con==0)
        printf("String s1 does not exist in string s2.\n");  //if all letters of s1 does not match to s2, in this condition con will zero
    else
        printf("String s1 is partially exist and first occurrence position is - %d",posoc[0]);
getch();
}
