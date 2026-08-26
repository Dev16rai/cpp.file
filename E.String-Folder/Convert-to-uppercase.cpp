#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter your string "<<endl;
    getline(cin,s);

    for(int i=0;i<s.length();i++){
         s[i]=toupper(s[i]);
    }

    cout<<"this is your Uppercase letter "<<endl<<s;
    

    return 0;
}