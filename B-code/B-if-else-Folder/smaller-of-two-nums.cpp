#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter your nums "<<endl;
    cin>>a>>b;
    if(a<b){
        cout<<"this is your smaller num "<<a;

    }
    else if(b<a){
        cout<<"this is your smaller num "<<b;
    }
    else{
        cout<<"both nums are eqaul ";
    }
    return 0;
}