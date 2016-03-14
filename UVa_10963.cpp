#include<iostream>
using namespace std ;
int main ()
{
	int icase , icols ,itop , idown , igap , i ;
	bool flag ;
	cin >> icase ;
	
	while ( icase -- )
		{
			cin>> icols ;
			flag = true ;
			cin >> itop >> idown ;
			igap = itop - idown ;
			
			for ( i = 1 ; i < icols ; i++)
				{
					cin >> itop >> idown ;
					if( igap != itop - idown )
						flag = false ;
				}
			 if(flag)
			 	cout << "yes" << endl ;
			 else 
			 	cout << "no" << endl ;	
			 if(icase)
			 	cout << endl ;		
			 	
			 				
		}
	return 0 ;
}
