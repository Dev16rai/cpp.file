#include<iostream>
using namespace std;
int main(){
    int n;
    bool isprime = true;

    cout<<"enter your number "<<endl;
    cin>>n;

    if(n<=1){
        cout<<"it is not a prime ";
    }

    for(int i=2;i<n;i++){
        if(n%i==0){
           
            isprime = false;
            break;
        }
       
       
    }
     if(isprime){
            cout<<"prime number ";
        }
        else{
            cout<<"it is not a prime ";
        }
     
    
    return 0;
}