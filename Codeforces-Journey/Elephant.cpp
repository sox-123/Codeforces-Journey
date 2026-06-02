#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,q; cin>>x;
    if(x>5){
        q = x/5;
        if(x%5==0){
            cout<<q;
        }
        else{
            cout<<q+1;
        }
    }else if(x<=5){
        cout<<1;
    }

    return 0;
}