#include<iostream>
using namespace std ;
int main()
{
	int icase ,icreatures ,icreaturespeed ,inumber = 1 ,ispeed , i;
	cin >> icase ;
	while(icase --)
	{
		cin>> icreatures;
		ispeed = 0 ;
		for(i = 0 ; i < icreatures ; i++)
			{
					cin>>icreaturespeed ;
					if( icreaturespeed >= ispeed )
						ispeed = icreaturespeed ;
			}
		cout<<"Case "<<inumber<<": "<<ispeed<<endl;
		inumber ++ ;
	}
	return 0 ;
}
