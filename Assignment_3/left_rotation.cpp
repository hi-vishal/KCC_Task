#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,d;
    cin>>n>>d;
    int arr[n];
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    for(int i=d;i<n;i++){
        cout<<vec[i]<<" ";
    }
    for(int i=0;i<d;i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}
