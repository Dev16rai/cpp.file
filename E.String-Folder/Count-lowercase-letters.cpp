#include<iostream>
using namespace std;
int main(){
    int lowercase = 0;
    string s;
    cout<<"enter your string "<<endl;
    cin>>s;

    for(int i=0;i<s.length();i++){
        char ch = s[i];
    if(ch >= 'a' && ch <= 'z'){
        lowercase++;
    }
    }
    cout<<"this your lowercase "<<lowercase;
    return 0;

}