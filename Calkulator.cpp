#include <iostream>

using namespace std;

int main()
{
int menu , r , e , f ;
float a , b , c ;

cout << "MENU:\n" << "1.Division:\n" << "2.Addition:\n" << "3.Subtraction:\n" << "4.Division of the remnant:\n" << "5.Exit:\n" ;
cin >> menu ;
switch (menu)
{
case 1: // діллення
{
cout << "One:\n" ;
cin >> a ;
cout << "Two:\n" ;
cin >> b ;
c = a / b ;
cout << a << "/" << b << "=" << c ;	
break;	
}
case 2: //додавання
{
cout << "One:\n" ;
cin >> a ;
cout << "Two:\n" ;
cin >> b ;
c = a + b ;
cout << a << "+" << b << "=" << c ;	

break ;
}	
case 3: //віднімання
{
cout << "One:\n" ;
cin >> a ;
cout << "Two:\n" ;
cin >> b ;
c = a - b ;
cout << a << "-" << b << "=" << c ;				
break;	
}	
case 4: // ділення з остатком
{
cout << "One:\n" ;
cin >> r ;
cout << "Two:\n" ;
cin >> e ;
f = r % e ;
cout << r << "%" << e << "=" << f ;		
break ;
}
case 5:
{
return 0 ;	
break ;		
}default:	
{ cout << "Error\n" ;
break;	
}	
return 0 ;

}	
}
