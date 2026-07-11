#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter your year "<<endl;
    cin>>year;
    if(year%4==0){
        cout<<"yeah, this is a Leap year ";
    }
    else{
        cout<<"this is not a leap year ";
    }
    return 0;  
}