#include <iostream>

using namespace std;
int main ()
{
	
int menu , balans , zniac , rach , dod , rach1 ;
do
{

cout << "Your money:" ;
cin >> balans ;
if ( balans < 0 )
cout << "Error\n" ;
else
cout << "Menu:\n" << "1.Balance:\n" << "2.Get money:\n" << "3.Add money:\n" << "4.Exit:\n" ;
cin >> menu ;

switch (menu)
{
case 1:
{
cout << "Balance:" << balans << "$"  ;
break ;		
}	
case 2:
{
cout << "How money:" ;
cin >> 	zniac ;
if ( zniac <= balans )
{
rach = balans - zniac ;
balans = rach ;
cout << "Balance:" << balans << "$" ;
}else 
cout << "Error\n" ;
break ;		
}	
case 3:
{
cout << "How money:" ;
cin >> dod ;
if ( dod > 0 )
{
rach1 = balans + dod ;
balans = rach1 ;
cout << "Balance:" << balans << "$" ;
}else
cout << "Error\n" ;
break ;
}	
case 4:
	{
	return 0 ;
	break ;		
	}
default:
{
cout << "Error\n";	
	}	
}

return 0 ;

}while ( menu  != 4 ) ;

}




