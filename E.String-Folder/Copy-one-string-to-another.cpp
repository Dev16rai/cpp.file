#include<iostream>
using namespace std;
int main(){
    string A;
    cout<<"enter your A string "<<endl;
     cin>>A;

     string B;
  
     for(int i=0;i<A.length();i++){
        B +=A[i];
     }
     cout<<B;
    return 0;
}