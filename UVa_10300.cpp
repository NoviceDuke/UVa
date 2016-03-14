#include<iostream>
using namespace std ;
int main ()
{
	int icase , ifarmers , isize , ianimals , ivalue , ipremium ;
	
	cin >> icase ;
	while( icase -- )
		{
				cin >> ifarmers ;
				ipremium = 0 ;
				while( ifarmers -- )
					{
						cin >> isize >> ianimals >> ivalue ;
						ipremium = ipremium + isize * ivalue ;
					}
				cout << ipremium << endl ;
		}
	
	return 0 ; 
}
