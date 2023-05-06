#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>x)
        x=a[i];
    }
    for(int i=0;i<n;i++){
        if(x==a[i])
        c++;
    }
    cout<<c;
    return 0;
}
