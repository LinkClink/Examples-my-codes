#include <stdio.h>
#include <stdlib.h>

char recoding()
{
int i=0,b,c,sw,r;
char a[20],f[1];
printf("Press tekst ");
gets(a);	
for(i=0;i<20;i++)
{
if (a[i]=='a')
{
a[i]='z';	
}	
if (a[i]=='b')
{
a[i]='y';	
}
if (a[i]=='c')
{
a[i]='x';	
}	
if (a[i]=='d')
{
a[i]='w';	
}	
if (a[i]=='e')
{
a[i]='v';	
}	
if (a[i]=='f')
{
a[i]='u';	
}	
if (a[i]=='g')
{
a[i]='t';	
}	
if (a[i]=='h')
{
a[i]='s';	
}	
if (a[i]=='i')
{
a[i]='r';	
}	
if (a[i]=='j')
{
a[i]='q';	
}
if (a[i]=='k')
{
a[i]='p';	
}
if (a[i]=='l')
{
a[i]='o';	
}
if (a[i]=='m')
{
a[i]='n';	
}
////
if (a[i]=='1')
{
a[i]='a';	
}	
if (a[i]=='2')
{
a[i]='b';	
}	
if (a[i]=='3')
{
a[i]='c';	
}	
if (a[i]=='4')
{
a[i]='d';	
}	
if (a[i]=='5')
{
a[i]='e';	
}	
if (a[i]=='6')
{
a[i]='f';	
}	
if (a[i]=='7')
{
a[i]='g';	
}	
if (a[i]=='8')
{
a[i]='h';	
}	
if (a[i]=='9')
{
a[i]='i';	
}	
if (a[i]=='!')
{
a[i]='j';	
}
if (a[i]=='@')
{
a[i]='k';	
}
if (a[i]=='$')
{
a[i]='l';	
}
if (a[i]=='%')
{
a[i]='m';	
}	
///
}
printf("Transleted:\n%s",a);		


}
char codding()
{
int i=0,b,c=0,sw,r,dd[20];
char a[20],ff[20];

printf("Press tekst ");
gets(a);

for (i=0;i<20;i++)
{

if (a[i]=='a')
{
a[i]='1';	
}	
if (a[i]=='b')
{
a[i]='2';	
}	
if (a[i]=='c')
{
a[i]='3';	
}	
if (a[i]=='d')
{
a[i]='4';	
}	
if (a[i]=='e')
{
a[i]='5';	
}	
if (a[i]=='f')
{
a[i]='6';	
}	
if (a[i]=='g')
{
a[i]='7';	
}	
if (a[i]=='h')
{
a[i]='8';	
}	
if (a[i]=='i')
{
a[i]='9';	
}	
if (a[i]=='j')
{
a[i]='!';	
}
if (a[i]=='k')
{
a[i]='@';	
}
if (a[i]=='l')
{
a[i]='$';	
}
if (a[i]=='m')
{
a[i]='%';	
}	
////
if (a[i]=='z')
{
a[i]='a';	
}	
if (a[i]=='y')
{
a[i]='b';	
}	
if (a[i]=='x')
{
a[i]='c';	
}	
if (a[i]=='w')
{
a[i]='d';	
}	
if (a[i]=='v')
{
a[i]='e';	
}	
if (a[i]=='u')
{
a[i]='f';	
}	
if (a[i]=='t')
{
a[i]='g';	
}	
if (a[i]=='s')
{
a[i]='h';	
}	
if (a[i]=='r')
{
a[i]='i';	
}	
if (a[i]=='q')
{
a[i]='j';	
}
if (a[i]=='p')
{
a[i]='k';	
}
if (a[i]=='o')
{
a[i]='l';	
}
if (a[i]=='n')
{
a[i]='m';	
}
	
}	
printf("Transleted:\n%s",a);	

}
int main()
{
int i=0,r ,sw=0,z,c,ff[20];
char a[20],f[1];
printf(">Menu<\n 1>Codding\n 2<Recodding\n");
//z==menu();
gets(f);
// не реботат. scanf("%d",sw);
if (f[0]=='1')
{
r==codding();	
}
if(f[0]=='2')
{
r==recoding();
}
}	
	
	
	

