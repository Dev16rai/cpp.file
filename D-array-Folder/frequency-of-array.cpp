#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your nnums "<<endl;
    cin>>n;

int arr[n];

    cout<<"enter your array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int count = 0;
    int key;
    cout<<"enter your  key "<<endl;
    cin>>key;


    for(int i=0;i<n;i++){
        if(arr[i]==key){
            count++;
        }
    }
    cout<<"Frequency of this value is : "<<count<<" time";
    return 0;
}