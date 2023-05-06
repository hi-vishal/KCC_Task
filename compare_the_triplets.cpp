#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[3],b[3],c=0,d=0,e=0;
    int arr[2]={0,0};
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    for(int i=0;i<3;i++){
        cin>>b[i];
    }
    for(int i=0;i<3;i++){
        if(a[i]>b[i])
        arr[0]++;
        else if(a[i]<b[i])
        arr[1]++;
    }
    cout<<arr[0]<<" "<<arr[1];
}
