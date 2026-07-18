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

    int min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"this is your value  "<<min;
    return 0;
}