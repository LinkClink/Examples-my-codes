#include <stdio.h>
int add(int a1 ,char a2[1],int a3)
{
int w;	
if(a2[0]=='*')
{
w= a1*a3;	
printf("%d",a1);
printf("%s",a2);
printf("%d",a3);
printf("=");
printf("%d",w);	
}
if(a2[0]=='/')
{
w= a1/a3;	
printf("%d",a1);
printf("%s",a2);
printf("%d",a3);
printf("=");
printf("%d",w);	
}
if(a2[0]=='+')
{
w= a1+a3;	
printf("%d",a1);
printf("%s",a2);
printf("%d",a3);
printf("=");
printf("%d",w);	
}
if(a2[0]=='-')
{
w= a1-a3;	
printf("%d",a1);
printf("%s",a2);
printf("%d",a3);
printf("=");
printf("%d",w);	
}
	
	
}

int main()
{
int a1,a3;	
int a,b,c;	
char f[1],a2[1];
scanf("%d",&a1);
scanf("%s",&a2);
scanf("%d",&a3);	
//printf("%d\n",&a1);
//printf("%d\n",&a3);
//printf("%s\n",&a2);




c==add(a1,a2,a3);




	
	
	
}
