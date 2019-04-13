#include <stdio.h>
#include <string.h>
int main(void)
{
	
char slow[6],pro[6]={'y','e','v','h','e','n'},per[100];
int i=0 , a=0 , b=0;

fgets(slow,20,stdin);

for (i=0;i<100;i++)
{
for(b=0;b<100;b++)
 {  

	
if (slow[i]==pro[b])
  {
a++;

//memccpy (per,pro,a, 10);		


  } 	

 }
}
	
//printf("perev: %s",per);	
printf("perev: %d",a);	
	
	
	
	
	
	
}
