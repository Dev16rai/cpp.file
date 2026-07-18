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
        
    bool sorted = true;

    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
      
            sorted = false;
            break;
        }
    }
    if(sorted){
        cout<<"this is sorted array ";

    }
    else{
        cout<<"sorry, it is not sorted ";
    }
   

    return 0;
}