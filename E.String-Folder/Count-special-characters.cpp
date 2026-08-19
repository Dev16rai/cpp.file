#include<iostream>
using namespace std;
int main(){
    int specialchar = 0;
    string s;
    cout<<"enter your string "<<endl;
    cin>>s;

    for(int i=0;i<s.length();i++){
        if(!isalnum(s[i])){
            specialchar++;
        }
    }
    cout<<"this our count of special char "<<specialchar;
    return 0;
}