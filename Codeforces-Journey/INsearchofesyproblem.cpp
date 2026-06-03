#include<bits/stdc++.h>
using namespace std;

int main(){
    bool broke = false;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a==1){
            cout<<"HARD";
            broke = true;
            break;
        }
    }
    if(!broke){
        
    cout<<"EASY";
    }
    return 0;
}