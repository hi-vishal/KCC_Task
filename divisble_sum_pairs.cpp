#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,c=0;
    cin>>n>>k;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((ar[i]+ar[j])%k==0){
                c++;
            }
        }
    }
    cout<<c;
    return 0;
}
