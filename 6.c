#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter a String.\n");
    gets(str);
    strlwr(str);        //we convert input string to lower case for filtering and avoid errors due to enter a uppercase letters
    int len=strlen(str),a,b,total=0,count=1;
    for(a=0;a<len;a++)
    {
        if(str[a]=='X')  //it is a condition which checks that a letter previously is repeated or not
            {
            total++;continue;
            }
        if((str[a]>=97&&str[a]<=122)||(str[a]>=48&&str[a]<=57)||str[a]==32) //the logic is we filtering a to z and to 9 and blanks by ASCII codes
        {
            for(b=a+1;b<len;b++)      //this loop checks the repetations of letters
            {
               if(str[a]==str[b]){
                    str[b]='X';   //if any letter is repeated then it replaced by cross X so program remember that this letter is repeated and how many times
                count++;
               }
            }
            if(str[a]==32)
                printf("Blanks - %d\n",count);
            else
                printf("%c's - %d\n",str[a],count);
           count=1;total++;
        }
    }
     if(total!=len)   //if string contain extra other letter then total will different with length of string. that is miscellaneous counted otherwise there will no difference between total and length of string.2
        printf("Miscellaneous - %d",len-total);
    getch();
}
