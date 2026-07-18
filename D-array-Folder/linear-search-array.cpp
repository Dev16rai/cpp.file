#include<iostream>
using namespace std;
int main(){
 

     int n;
    cout<<"enter your nums"<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter your array "<<endl;
    for(int i=0;i<n;i++){
    cin>>arr[i];
}
     
 int key;
    cout<<"enter your key "<<endl;
    cin>>key;

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"this is your linear search "<<endl<<arr[i]<<"="<<key;
            return 0;
        }
        
           
        
        }
    
    cout<<"sorry, not find ";

    return 0;

    }