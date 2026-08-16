#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"enter your string "<<endl;
    cin>>name;

    for(int i=0;i<name.length();i++){
        cout<<name[i];
    }
    return 0;
}