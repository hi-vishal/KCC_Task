#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,d,m,n,c1=0,c2=0;
    cin>>a>>b;
    cin>>c>>d;
    cin>>m>>n;
    int y[m];
    int z[n];
    for(int i=0;i<m;i++){
        cin>>y[i];
    }
    for(int i=0;i<n;i++){
        cin>>z[i];
    }
    
    //starts
    for(int i=0;i<m;i++){
        if((c+y[i])>=a&&(c+y[i])<=b)
        c1++;
    }
    for(int i=0;i<n;i++){
        if((d+z[i])>=a&&(d+z[i])<=b)
        c2++;
    }
    cout<<c1<<endl;
    cout<<c2<<endl;
    return 0;
}
