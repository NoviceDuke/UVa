#include<iostream>
#include<string>
using namespace std ;
int main()
{
	int icase , imoney , iaccount = 0 ;
	string sdetails  ;
	
	cin >> icase ;
	while ( icase -- )
		{	
			cin >> sdetails ;
			if( sdetails == "donate" )
				{
					cin >> imoney ; 
					iaccount += imoney ;
				}
			else
				cout << iaccount << endl ;
			
		}
	
	return 0 ;
}
