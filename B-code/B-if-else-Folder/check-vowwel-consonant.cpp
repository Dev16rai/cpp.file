#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter your ch "<<endl;
    cin>>ch;
    
    if((ch>='A' && ch<='z') || (ch>='a' && ch<='z')){

        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
           ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
           {

               cout<<"it is a VOWEL ";
           }
           else
           {
                 cout<<"it is a CONSONENT ";
           }
           
    }
    else{
        cout<<"Invalid, Input ";
    }
    return 0;
}