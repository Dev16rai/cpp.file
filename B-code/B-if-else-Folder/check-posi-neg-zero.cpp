#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number "<<endl;
    cin>>n;
    if(n>0){
        cout<<"this is a positive ";
    } 
    else if(n<0){
        cout<<"this is a negative ";
    }
    else{
        cout<<"this is a zero ";
    }
    return 0;
}