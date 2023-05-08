#include <bits/stdc++.h>
using namespace std;
int main(){
    int flag,n,m,i,max,min,count=0;
    cin>>n>>m;
    int a[n],b[m];
    for(i=0;i<n;i++)
    {cin>>a[i];}
    for(i=0;i<m;i++)
    {cin>>b[i];}
     int ans=0;
    for(int x=1;x<=100;x++){
        int flag=1;
        for(int i=0;i<n;i++){
            if(x%a[i]!=0) 
            flag=0;            
        }
        for(int i=0;i<m;i++) {
            if(b[i]%x!=0) 
            flag=0;} 
        if(flag==1) 
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}
