#include<iostream>
using namespace std;
int main(){
  //declare
  int arr[3][3];
  //initialization
  int brr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
     cout<<brr[2][2 ]<<endl;
// row wise print
     for (int i = 0; i <3; i++)
     {
     for (int j = 0; j < 3; j++)
     {
          cout<<brr[i][j]<<" ";
     }
        cout<<endl;
     }
     //column wise print
     for (int i = 0; i <3; i++)
     {
     for (int j = 0; j < 3; j++)
     {
          cout<<brr[j][i]<<" ";
     }
        cout<<endl;
     }
     //row wise input
     for (int i = 0; i <3; i++)
     {
     for (int j = 0; j < 3; j++)
     {
          cin>>arr[i][j];
     }
        cout<<endl;
     }
     //column wise input
     for (int i = 0; i <3; i++)
     {
     for (int j = 0; j < 3; j++)
     {
          cin>>arr[j][i];
     }
        cout<<endl;
     }
     // row wise print
     for (int i = 0; i <3; i++)
     {
     for (int j = 0; j < 3; j++)
     {
          cout<<arr[i][j]<<" ";
     }
        cout<<endl;
     }
     //column wise print
     for (int i = 0; i <3; i++)
     {
     for (int j = 0; j < 3; j++)
     {
          cout<<arr[j][i]<<" ";
     }
        cout<<endl;
     }
}