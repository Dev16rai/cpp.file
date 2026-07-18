#include<iostream>
using namespace std;
int main(){
    //taking size from the user 
    int n;
    cout<<"enter your size "<<endl;
    cin>>n;
    //takin array from the user 
    int arr[n];
    cout<<"enter your array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //this is the logic of code how to find max value from given input
     int max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        

    }
    cout<<max;

    return 0;
}