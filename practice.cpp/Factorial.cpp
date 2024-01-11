//Factorial
#include<iostream>
using namespace std;
int factorial(int n){
     int fact=1;
     for(int i=n;i>=1;i--){
      fact=fact*i;
     }
     return fact;
   
}
int main(){
     cout<<"tell the number which we have to find factorial";
     int f;
     cin>>f;
     cout<<factorial(f);
     return 0;
     
}