#include<iostream>
using namespace std;
void Transpose(int arr[][3],int r, int c,int transposeArr[][3]){
     for(int i=0;i<r;i++){
          for(int j=0;j<c;j++){ 
              transposeArr[j][i]=arr[i][j];
          }
     }
}
void PrintArray(int arr[][3],int r,int c){
     for(int i=0;i<r;i++){
          for(int j=0;j<c;j++){
               cout<<arr[i][j]<<" ";
}
     }
}
int main(){
       int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int transposeArr[3][3];
  PrintArray(arr,3,3);
  Transpose(arr,3,3,transposeArr);
  PrintArray(transposeArr,3,3);

  return 0;
}