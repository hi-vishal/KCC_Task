#include <bits/stdc++.h>

using namespace std;

int main(){
    long a[5];
    for(int i=0;i<5;i++){
    cin>>a[i];}
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            if(a[j]<a[i]){
                long temp =a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    int j;
    long max,min=0;
    for(j=0;j<4;j++){
    max+=a[j];}
    for(j=1;j<5;j++){
    min+=a[j];}
    cout<<max<<" "<<min;
    return 0;
}
