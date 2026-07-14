#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter your size "<<endl;
    cin>>size;

    int arr[size];

    cout<<"enter your array "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        if(arr[i] % 2 ==0){
            cout<<arr[i]<<" ";
        }
    }
return 0;

}