#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w,tp=0,p=1; cin>>k>>n>>w;
    for(int i=1;i<=w;i++){
        p = i*k;
        tp += p;
    }
    if(tp>n){
        cout<<tp - n;
    }
    else{
        cout<<0;
    }
    return 0;
}