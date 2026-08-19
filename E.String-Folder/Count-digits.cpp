#include<iostream>
using namespace std;
int main(){
    int digit = 0;
    string s;
    cout<<"enter your string "<<endl;
    cin>>s;

    for(int i=0;i<s.length();i++){
        if(s[i] >= '0' && s[i] <= '9'){
            digit++;
        }
    }
    cout<<"this is your count digit "<<digit;
    return 0;

}