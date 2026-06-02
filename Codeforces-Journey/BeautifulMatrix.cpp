#include<iostream>
using namespace std;
 
int main(){
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {       // Outer loop for rows
        for (int j = 0; j < 5; j++) {   // Inner loop for columns
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // int count =0;
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<5;j++){
    //         if(arr[i][j]==1){
    //             if(i==1 || i==5){
    //                 count+=2;
    //             }
    //             else if(i==2 || i==4){
    //                 count++;
    //             }
                
    //             if(j==1 || j==5){
    //                 count+=2;
    //             }
    //             else if(j==2 || j==4){
    //                 count++;
    //             }
    //         }
    //     }
    // }
    // cout<<count;
    return 0;
}