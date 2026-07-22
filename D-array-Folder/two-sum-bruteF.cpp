#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter your size "<<endl;
  cin>>n;

  int arr[n];
  cout<<"enter your array "<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }  

  int target;
  cout<<"enter your target "<<endl;
  cin>>target;

  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i]+arr[j]==target){
        cout<<"indies are "<<i<<" "<<j;
      }
    
      
    
    }
  }
  
 cout<<"not found pair ";
 return 0;
}