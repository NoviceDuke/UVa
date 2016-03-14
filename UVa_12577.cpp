#include<iostream>
#include<string>
using namespace std ;
int main ()
{
	string sanswer[2] ={"Hajj-e-Akbar","Hajj-e-Asghar"};
	string swords ;
	int icasenumber = 1 ;
	
	while( cin >> swords)
		{
			if( swords =="*")
				break ;
			else
				{
				
					if( swords =="Hajj")
						cout << "Case " << icasenumber<<": "<< sanswer[0] << endl ;
					if( swords =="Umrah")
						cout << "Case " << icasenumber<<": "<< sanswer[1] << endl ;
				}
			if( swords =="Hajj" || swords =="Umrah" )
				icasenumber ++ ;
		}
	return 0 ;
}
