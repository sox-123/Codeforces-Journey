#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,h; cin>>n>>h;
    vector<int> height;
    for(int i=0;i<n;i++){
        int in;
        cin>>in;
        height.push_back(in);
    }
    int count =0;
    for(int n : height){
        if(n>h){
            count+=2;
        }
        else{
            count++;
        }
    }
    cout<<count;
    return 0;
}