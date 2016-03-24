#include<iostream>
#include<vector>
#include<math.h>
using namespace std ;
int main ()
{
	#ifndef ONLINE_JUDGE
 	freopen("12157.txt","r",stdin);
 	freopen("12157-2.txt","w",stdout);
 	#endif
 	
	int  icalls[21] , itime ,isumM , isumJ ;
	int i, icase , icall ,icasenub = 1;
	
	cin >> icase ;
	while( icase -- )
		{
			cin >> icall ;
		
			isumM = isumJ = 0 ;
			
			for(i = 0 ; i < icall ; i++ )
				{
					cin>>itime ;
					icalls[i] = itime ;
				}
			for(i = 0 ; i < icall ; i++ )
				{
					if(icalls[i]<=29)
						isumM+=10;
					else
						{
							isumM+=((icalls[i]/30+1)*10);
						}
					if(icalls[i]<=59)
						isumJ+=15;
					else
						{
							isumJ+=((icalls[i]/60+1)*15);
						}
				}
			cout<<"Case "<<icasenub<<": ";
			if( isumM < isumJ )
				cout <<"Mile "<< isumM ;
			if( isumM > isumJ )
				cout <<"Juice "<< isumJ ;
			else {
			
				if( isumM == isumJ )
				 cout <<"Mile Juice "<< isumM ;		
				}
			cout<<endl;
			icasenub ++ ;	
			
		}                                                                                                                                                                                                                                                
	return 0 ;
}
