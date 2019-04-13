#include <iostream>

using namespace std;

int main()
{
int y=15 , x=6 , b , r , a , c , d , e , g , h ,z ;

cout << "Kiedy byla wielkanoc rok:";
cin >> g;

a = g % 19 ;
b = g % 4 ;
c = g % 7 ; 
d = ( ( 19 * a + y ) % 30) ;
e = ( ( 2 * b + 4 * c + 6 * d + x ) % 7) ;
h= d + e + 22 ;  
 

cout <<"Wielkanoc byla na: " << h << " od poczatku roku. \n" ;
cout << "Chcesz poznac jaki to miesac i dzien: 1.tak 2.nie:" ;

cin >> z ;

if (z>1)

cout <<"Do zobacenia \n " ;

else ;




}
	
	



