#include<iostream>
using namespace std ;
int main ()
{
	int icase , i ;
	int ibase[10] ;
	bool flag ;
	cin >> icase ;
	cout << "Lumberjacks:" << endl ;
	while ( icase -- )
		{
			for( i = 0 ; i < 10 ; i++)
				{
					cin >> ibase[ i ] ;
				}
			flag = true ;
			for( i = 1 ; i < 10 ; i++)
				{
					if( ibase[ i ] > ibase[ i - 1 ] )
						continue ;
					else
						{
							flag = false ;
							break ;
						}	
				}
			if(!flag)
				{
						
					for( i = 1 ; i < 10 ; i++)
						{
							if( ibase[ i ] < ibase[ i - 1 ] )
								{
									flag = true ;
								}
							else
								{
									flag = false ;
									break ;
								}
						}	
				}
			if(flag)
				cout<<"Ordered"<<endl;
			else
				cout<<"Unordered"<<endl;
		}
	return 0 ;
}
