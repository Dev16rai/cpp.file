#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter your char "<<endl;
    cin>>ch;

    if(ch>='A' && ch<='Z'){
        cout<<"it is uppercase ";
    }
    else{
        cout<<"it is lowercase ";
    }
    return 0;
}