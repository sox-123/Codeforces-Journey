#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    while(n--){
        bool a,b,c;
        cin>>a;
        cout<<" ";
        cin>>b;
        cout<<" ";
        cin>>c;
        cout<<" ";
        if(a&&b==1 || b&&c==1 || c&&a==1){
            count++;
        }  
    }
    cout<<count;
    
    return 0;
}