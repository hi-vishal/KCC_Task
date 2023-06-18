#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    map<char,int> v;
    for(int i=0;i<str.size();i++){
        v[str[i]]++;
    }
    map<char,int>:: iterator it = v.begin();
    while(it!=v.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    return 0;
}
