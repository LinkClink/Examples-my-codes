#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    long int r, k, max; //rzad, kolumna
    cout << "program wypisuje trojkat Pascala\n";
    cout << "podaj poziom: ";
    cin >> r;
    r = r - 1;
    k = r;
    max = r;
    long int tab[ r + 1 ][ k + 1 ]; //utworzylem tablice dwuwymiarowa 
    for( r = 0; r <= max; r++ )
    {
        for( k = 0; k <= max; k++ )
        {
            tab[ r ][ k ] = 0;
        }
    } //czyszczenie tablicy
    tab[ 0 ][ 0 ] = 1;
    tab[ 1 ][ 0 ] = 1;
    tab[ 1 ][ 1 ] = 1;
    
    for( long int r = 2; r <= max; r++ )
    {
        for( long int k = 0; k <= r; k++ )
        {
            if( r == k ) tab[ k ][ r ] = 1;
            
            if( k == 0 ) tab[ k ][ r ] = 1;
            
            tab[ r ][ k ] = tab[ r - 1 ][ k - 1 ] + tab[ r - 1 ][ k ];
        }
    } //obliczenie wartosci kom�rek
    for( r = 0; r <= max; r++ )
    {
        for( k = 0; k <= r; k++ )
        {
            cout << tab[ r ][ k ] << " ";
        }
        cout << endl;
    } //wypisanie wyniku na ekranie
    //getch();
   // return 0;
    
    r=2;
    k=0;
    tab[ r ][ k ] = tab[ r - 1 ][ k - 1 ] + tab[ r - 1 ][ k ];
    cout << tab[2 ][ 2 ] << " ";
    
    
    
    
    
    
    
}
