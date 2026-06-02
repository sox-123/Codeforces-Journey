#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int X=0;
    while(n--){
        string n;
        cin>>n;
        if(n=="X++"){
            X++;
        }
        else if(n=="--X"){
            --X;
        }
    }
    cout<<X;
    return 0;
}