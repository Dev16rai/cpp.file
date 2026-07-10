#include<iostream>
using namespace std;
int main(){
    int n,fact = 1;
    cout<<"enter your value "<<endl;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"this is your factorail value "<<endl<<fact;
    
    return 0;
}