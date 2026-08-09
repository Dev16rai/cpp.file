#include<iostream>
using namespace std;
int main(){
    int Days,N;
    cout<<"enter your number "<<endl;
    cin>>Days>>N;

    N = N%7;               //Days  0 1 2 3 4 5 6
    int ans = Days - N;    //week  S M T W TH F Sun  ans is representing index value of week 
    if(ans<0){
        ans = ans + 7;                          



    }
    cout<<ans;
    return 0;
}