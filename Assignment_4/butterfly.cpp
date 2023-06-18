#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int i=0,j=0;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            cout<<"*";
        }
        for(j=2;j<2*(n-i);j++){
            cout<<" ";
        }
        for(j=0;j<i;j++){
            cout<<"*";
        }
        cout<<""<<endl;
    }
    for(i=n-2;i>0;i--){
        for(j=0;j<i;j++){
            cout<<"*";
        }
        for(j=2;j<2*(n-i);j++){
            cout<<" ";
        }
        for(j=0;j<i;j++){
            cout<<"*";
        }
        cout<<""<<endl;
    }
    return 0;
}
