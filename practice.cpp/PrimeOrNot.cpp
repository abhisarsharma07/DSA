//Prime or not
#include<iostream>
using namespace std;
int PON(int n){
     for(int i=2;i<n;i++){
          if(n%i==0){
               return false;
          }
          else{
               return true;
          }
     }
}
int main(){
cout<<"enter the value of n"<<endl;
int n;
cin>>n;
bool isPrime= PON(n);
if(isPrime){
     cout<<"Prime";
}
else{
     cout<<"not a Prime";
}
}