#include<iostream>
using namespace std;
int main(){
    int a[9];
        cout<<"Enter ten inputs: "<<endl;
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    cout<<"The ten given inputs are: "<<endl;
    for(int i=9; i>=0;i--){
        cout<<a[i]<<" ";
    }
    return 0;

}
