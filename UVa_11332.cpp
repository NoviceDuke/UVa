#include<iostream>
using namespace std ;
int calculate(int p)
{
	int isum = 0 ;
	
	while(p)
		{
			isum += p % 10 ;
			p/=10 ;
		}
	return isum ;
}
int main()
{
	int inumber , ianswer;
	
	while( cin >> inumber && inumber != 0 )
		{
			if(inumber/10)
			  {
			  
				while(inumber/10)
					{
						ianswer = calculate	( inumber ) ;
						inumber = ianswer ;
					}
				cout << ianswer << endl ;
			  }
			else
			   cout << inumber << endl ;
		}
	return 0 ;
}
