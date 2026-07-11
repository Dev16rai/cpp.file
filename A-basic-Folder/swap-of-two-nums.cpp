#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter your nums "<<endl;
    cin>>a>>b;
    
    int teamp = a;
        a = b;
        b = teamp;

    cout<<a<<" "<<b;
         

    return 0;
}