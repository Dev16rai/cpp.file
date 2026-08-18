#include<iostream>
using namespace std;
int main(){
    int count = 0;
    string s;
    cout<<"enetr your string "<<endl;
    cin>>s;
  
    for(int i=0;i<s.length();i++){
        char ch = tolower(s[i]);

        if(ch >= 'a' && ch <= 'z'){
            if( ch != 'a' && ch != 'e' &&
                 ch != 'i' && ch != 'o' && ch != 'u')
             count++;
        }
    }
    cout<<"this is your constonet "<<count;
    return 0;
}