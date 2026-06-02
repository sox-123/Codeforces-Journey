#include <bits/stdc++.h>
using namespace std;

int main(){
    string S; cin>>S;
    vector<int> vec;
    for(int i = 0; i <S.size(); i++){
        if(i%2 == 0){
            vec.push_back(S[i]);
        }
    }
    
    // sort(vec.begin(),vec.end());
    for(int n: vec){
        cout<<n<<"+";
    }
    return 0;
}