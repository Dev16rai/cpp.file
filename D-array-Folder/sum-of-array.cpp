#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size "<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter the array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<"this is your sum "<<endl<<sum;
    return 0;
}