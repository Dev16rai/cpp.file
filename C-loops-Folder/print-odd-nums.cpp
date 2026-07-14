#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your size "<<endl;
    cin>>n;

    int arr[n];

    cout<<"enter your array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
       cout<<"this is your odd "<<endl;

    for(int i=0;i<n;i++){
        if(arr[i] % 2 !=0){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}