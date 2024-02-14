#include<iostream>
using namespace std;
int main(){
     int arr[5];
     int arr2[5]={1,3,5,7,9};
     for(int i=0;i<5;i++){
          cin>>arr[i];
     }
     for(int i=0;i<5;i++){
          cout<<2* arr[i];
     }
      //{1,3,5,7,9}->{1,1,1,1,1}
     for(int i=0;i<5;i++){
          arr[i]=1;
          cout<<arr[i];
     }
     return 0;
}