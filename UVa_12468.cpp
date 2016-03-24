#include<iostream>
using namespace std ;
int main()
{
	#ifndef ONLINE_JUDGE
 	freopen("12468.txt","r",stdin);
 	freopen("12468-2.txt","w",stdout);
 	#endif
	int a , b ,isum , isum2;
	while( cin >> a >> b )
		{
			if(a==-1 && b==-1)
				break ;
			if(a>b)
				swap(a,b);
			isum = b-a ;
			isum2 = a-b+100 ;
			cout << min ( isum , isum2 )<<endl;
		}
	return  0 ;
}
