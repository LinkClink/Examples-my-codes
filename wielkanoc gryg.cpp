#include <iostream>

using namespace std;

int main()
{
int r , a , b , c , d , e , f , g , h , i , k , l , s , j , m , p ;

cout << "Kiedy  wielkanoc rok:  ";
cin >> r ;

a = r % 19 ;
b = r % 100 ;
c = r / 100 ;
d = b / 4 ;
e = b % 4 ;
f = ( ( b + 8 ) / 25 ) ;
g = ( ( b - f + 1 ) / 3 ) ;
h = ( (19* a + b - d - g + 15) % 30 ) ;
i = c / 4 ;
k = c % 4 ;
l = ( ( 32 + 2 * e + 2 * i - h - k ) % 7 ) ;
m = ( ( a + 11 * h + 22 * l ) ) ;
p = ( ( h + l - 7 * m + 114 ) % 31 ) ;


s = p + 1 ;


j = ( ( h + l - 7 * m + 114) / 31 ) ;

cout << "Wielkanoc: \n" << s << "." << j ;







}
	
	



