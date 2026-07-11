#include<iostream>
using namespace std;
int main(){
    int nums;
    cout<<"enter your nums "<<endl;
    cin>>nums;
    if(nums%5==0){
        cout<<"yes this is divisible by 5 ";
    }
    else{
        cout<<"sorry it cannot ";
    }
    return  0;
}