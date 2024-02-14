#include<iostream>
using namespace std;
int main(){
     int arr[]={0,1,1,0,1,0,1,0,1,0};
     int get0=0;
    int  get1=0;
     for(int i=0;i<10;i++){
         if(arr[i]==0) {
               get0++;
         }
         if(arr[i]==1){
          get1++;
         }
     }
     cout<<get0<<endl;
     cout<<get1;
}