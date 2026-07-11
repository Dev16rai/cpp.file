#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter your nums "<<endl;
    cin>>a>>b;
    if(a>b){
        cout<<"this is your greater num "<<a;
    }
    else if(b>a){

        cout<<"this is your greater num "<<b;
    }
    else{
        cout<<"this nums is equal ";
    }
    return 0;
}