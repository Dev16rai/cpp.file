#include<iostream>
using namespace std;
int main(){
        int size;
        cout<<"enter your size "<<endl;
        cin>>size;

        int arr[size];
        cout<<"ente your array "<<endl;
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }

        int first = 0;
        int end   = size -1;

        while(first < end){
            int teamp = arr[first];
            arr[first] = arr[end];
            arr[end]  =  teamp;

            first++;
            end--;
        }
        cout<<"Reversed Array "<<endl;
        for(int i=0;i<size;i++){
          cout<<arr[i]<<" ";
        }
    return 0;


}