#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter your string "<<endl;
    cin>>s;

    int vowel=0;
    int consonents=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'|| s[i]=='e'|| s[i]=='i' || s[i]=='o' || s[i]=='u'){
            vowel++;
        }
        else{
            consonents++;
        }
    }

    if(vowel>consonents){
        cout<<"yes";
    }
    else if(vowel<consonents){
        cout<<"no";
    }
    else{
        cout<<"same";
    }
    return 0;

} 