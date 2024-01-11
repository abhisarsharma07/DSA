#include<iostream>
using namespace std;
int P(int n){
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
for(int i=2;i<=n;i++){
     bool isPrime=P(i);
     if (isPrime){
        cout<<i;
     }
}
}