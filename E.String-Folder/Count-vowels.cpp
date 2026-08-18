#include<iostream>
using namespace std;
int main(){
    int vowels = 0;
    string s;
    cout<<"enter your string "<<endl;
    getline(cin,s);

    for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
        s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
            vowels++;
        }

    }
    cout<<vowels;
    return 0;
}