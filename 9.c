#include<stdio.h>
#include<conio.h>
int main()
{
int marks[101],cmp[101],fre[101],a,b,c,d,e;
for(a=0;a<=100;a++){
fre[a]=0;
cmp[a]=a;
}
printf("Enter length of data.\n");
scanf("%d",&b);
for(c=0;c<b;c++)
scanf("%d",&marks[c]);
for(d=0;d<b;d++)
{
for(e=0;e<=100;e++)
{
if(marks[d]==cmp[e]){
fre[e]++;
break;
}
else
continue;
}
}
printf("Frequency of marks.\n");
for(c=0;c<=100;c++)
{
if(fre[c]!=0)
{
printf("%ds - %d\n",c,fre[c]);
}
else
continue;
}
getch();
}
