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

    int even = 0,odd = 0;

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else {
            odd++;
        }
    }
    cout<<"this is your count even number "<<even<<endl;
    cout<<"this is yoour count odd number "<<odd;
    return 0;
}