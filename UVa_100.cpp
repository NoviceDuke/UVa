#include<iostream>
using namespace std ;
int iCountTemp(int iSqNum)
	{
		int iCount = 0 ;
			while(iSqNum!=1)
						{
							iCount++;
							if(iSqNum%2) iSqNum = 3*iSqNum+1 ;
							else iSqNum/=2 ;
						}
		iCount++ ; 
		return iCount ;
	}
int main ()
	{
		int iCountMax ,iSfirst , iEnd ;
		int i ;
		while( cin >> iSfirst >> iEnd )
			{
				iCountMax = 0;
				cout << iSfirst << " " << iEnd << " ";
				if(iSfirst>iEnd)swap(iSfirst,iEnd);
				for( i = iSfirst ; i <= iEnd ; i++ )
					{
						
					
						if( iCountTemp(i) > iCountMax ) iCountMax = iCountTemp(i) ;
						
					}
					 cout<< iCountMax << endl ;
			}  
		return 0;
	}
