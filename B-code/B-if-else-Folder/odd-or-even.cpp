#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your num "<<endl;
    cin>>n;

    if(n%2==0){
        cout<<"this is your [even] ";
    }
    else{
        cout<<"this is your [odd] ";
    }
    return 0;
}