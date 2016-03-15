#include<iostream>
using namespace std ;
int main ()
{
	int icase , iwalls , ihigh , ilow , icasenumber = 1 , i ;
	int iwall [50] ;
	cin >> icase ;
	while ( icase -- )
		{
			cin >> iwalls ;
			ihigh = ilow = 0 ;
			for( i = 0 ; i < iwalls ; i++ )
				{
					cin >> iwall [ i ] ;	
				}
			for( i = 1 ; i < iwalls ; i++ )
				{
					if( iwall [ i ] > iwall [ i-1 ] )
						ihigh ++ ;
					if( iwall [ i ] < iwall [ i-1 ] )
						ilow ++ ;	
				}
			cout<<"Case "<<icasenumber<<": " << ihigh <<" "<< ilow << endl ;
			
			icasenumber ++ ;
		}
	return 0 ;
	
}
