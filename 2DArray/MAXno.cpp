#include<iostream>
#include<limits.h>
using namespace std;
 int getMax(int arr[][3],int rows,int cols){
 int maxi= INT_MIN;
 for (int i = 0; i < 3; i++)
 {
     for (int j = 0; j <3; j++)
     {
          if(arr[i][j]>maxi){
               maxi=arr[i][j];
          }
     }
     
 }
 
 return maxi;
 }
int main(){
  int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
cout<<getMax(arr,3,3);

 
}