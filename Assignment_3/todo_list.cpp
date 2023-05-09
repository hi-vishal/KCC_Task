#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int c=0;
	    int n;
	    cin>>n;
	    vector<int>vec(n);
	    for(int i=0;i<n;i++){
	        cin>>vec[i];
	    }
	    for(int i=0;i<n;i++){
	        if(vec[i]>=1000)
	        c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
