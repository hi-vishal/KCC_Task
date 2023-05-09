#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    double n,m;
	    cin>>n>>m;
	    if(n-(0.1*n)>m)
	    cout<<"DINING"<<endl;
	    else if(n-(0.1*n)<m)
	    cout<<"ONLINE"<<endl;
	    else
	    cout<<"EITHER"<<endl;
	}
	return 0;
}
