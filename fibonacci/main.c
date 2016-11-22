#include <stdio.h>
#include <stdlib.h>

int main()
{
int i=0,j=1,a=1,b;
printf("how many terms you want to print?");
scanf("%d",&b);
printf("%d\t%d\t",i,j);
fab(i,j,a,b);
}

void fab(i,j,a,b)
{
{
while(a+2<=b)
{
int n=i;
printf("%d\t",i+j);
i=j;
j=n+j;
a++;
fab(i,j,a,b);
return;
}
}
}
