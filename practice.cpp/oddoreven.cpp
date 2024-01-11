//Num is even or odd
#include<iostream>
using namespace std;
int EOO(int n){
     if (n%2==0){
          cout<<"the number is even";
     }
     else{
          cout<<"the number is odd";
     }
     return 0;
}
int main(){
     cout<<"enter the number"<<" ";
     int n;
     cin>>n;
     int ans= EOO(n);
return 0;
}