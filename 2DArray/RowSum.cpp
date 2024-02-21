#include<iostream>
using namespace std;
void printRowWiseSum(int arr[][3],int rows,int cols){
     //row sum-> row-wise traversal
     cout<<"Printing row wise sum"<<endl;
     for (int i = 0; i < rows; i++)
     {
          int sum=0;
          for(int j = 0; j <cols; j++)
          {
               sum=sum+arr[i][j];
          }
          cout<<sum<<endl;
          
     }

}
void printColWiseSum(int arr[][3],int rows,int cols){
      //col sum-> col-wise traversal
     cout<<"Printing row wise sum"<<endl;
     for (int i = 0; i < rows; i++)
     {
          int sum=0;
          for(int j = 0; j <cols; j++)
          {
               sum=sum+arr[j][i];
          }
          cout<<sum<<endl;
          
     }
}
int main(){
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
printRowWiseSum(arr,3,3);
printColWiseSum(arr,3,3);
}