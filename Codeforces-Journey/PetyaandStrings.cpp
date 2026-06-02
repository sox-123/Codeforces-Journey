#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string A,B; cin>>A>>B;
    vector<string> vec;
    vec.push_back(A);
    vec.push_back(B);
    sort(vec.begin(),vec.end());

    return 0;
}