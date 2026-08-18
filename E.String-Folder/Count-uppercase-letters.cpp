#include<iostream>
using namespace std;
int main(){
    int uppercase = 0;
    string s;
    cout<<"enter your number "<<endl;
    cin>>s;

    for(int i=0;i<s.length();i++){
        char ch = s[i];
        if(ch >= 'A' && ch <= 'Z'){
          uppercase++;
        }

    }
    cout<<"your uppercase count "<<uppercase;
    return 0;
}