#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter your string "<<endl;
    getline(cin,s);

    for(int i=0;i<s.length();i++){
        s[i] = tolower(s[i]);
    }
    cout<<"this your lower case "<<endl<<s;
    
    return 0;

}