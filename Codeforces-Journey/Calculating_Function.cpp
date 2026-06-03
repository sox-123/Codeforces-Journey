#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int f=0;
    if(n%2==0){
        int even,odd;
        even += ((n*n)/2);
        odd += (n*n)/4;
        f = even - odd;
        cout<<f;
    }
    else{
        int even,odd;
        even += (((n-1)*(n-1))/2);
        odd += ((n-1)*(n-1))/4;
        f = even - odd - n;
        cout<<f;
    }
    return 0;
}