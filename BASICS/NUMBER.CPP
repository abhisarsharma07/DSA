#include<iostream>
#include<cmath>
using namespace std;
int DTM(int n){
     int bin=0;
     while(n>0){
         int bit=n%2;
         int i=0;
         bin=bit*pow(10,i++) +bin;
         n=n/2;
     }
     return bin;
}
int main(){
     int n;
     cin>>n;
     int bin=DTM(n);
     cout<<bin;
     return 0;
}
