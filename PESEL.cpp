#include <iostream>

using namespace std;

int main()
{
	
char pesel[12],dl ,nk[12],r,p;	
cout << "Press PESEL:";

gets(pesel);

dl=0;

while (pesel[dl]!=0)dl++;
if (dl!=11)
{
cout << "Eror Number 1";
return 1;	
}

for (int i=0; i<dl ; i++)
if (pesel[i]<'0'|| nk[i]>'9')
{
cout << "Error Number 2";
return 2;	
}

r=pesel[0]*1+pesel[1]*3+pesel[2]*7+pesel[3]*9+pesel[4]*1+pesel[5]*3+pesel[6]*7+pesel[7]*9+pesel[8]*1+pesel[9]*3;

if (r%10!=0) cout << "Error PESEL";	

if (pesel[9]=0,2,4,6,8) cout << "Sex:woman";	
else cout << "Sex:man"; 	

}
