#include<iostream>
#include<string>
#include<vector>
#include<set>
using namespace std ;
int main () {
#ifndef ONLINE_JUDGE
	freopen("10215.txt", "r",stdin);
	freopen("10215.out","w",stdout);
#endif

	vector< pair< string , int > > URL ;
	vector< pair< string , int > > :: iterator it;
//	vector< pair< string , int > > :: reverse_iterator rit;
	int icase , i  , v  , imax , icasenumber = 1 ;
	string p ;

	cin >> icase ;
	while( icase --) {
		imax = 0 ;
		for( i = 0 ; i < 10 ; i++ ) {
			cin >>  p >> v ;
			if( v >= imax ) {
				imax = v ;
				URL.push_back( make_pair( p , v));
			}
		}
		cout << "Case #" << icasenumber << ":" << endl ;

		for( i= 0 ; i < URL.size() ; i ++ ) {
			if( URL[ i ].second == imax )
				cout << URL[ i ].first << endl ;
		}
		URL.clear() ;
		icasenumber ++ ;
	}



	return 0 ;
}
