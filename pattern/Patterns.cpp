#include<iostream>
using namespace std;
int main(){
     /*

     *****
     *****
     *****

     *///whenever you have confusion in row and column see this example and think 
    for(int row=0;row<3;row=row+1)
    {
     for(int col=0;col<5;col=col+1)
     {
          cout<<"*";
     }
     cout<<endl;
    }

    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    //transpose of above pattern
     //    for(int col=0;col<5;col=col+1)
     //    {
     //      for(int row=0;row<3;row=row+1)
     //      {
     //            cout<<"*";
     //      }
     //      cout<<endl;
     //    }
    /* Hollow Rectangle
    *****
    *   *
    *****
    */      
   for (int row=0;row<3;row++)
   {
     if(row==0 || row==2)
     {
          for(int i=0;i<5;i++){
          cout<<"*";
     }
     }
      else{ cout<<"*";
      for(int i=0;i<3;i++)
      {
          cout<<" ";
      }
      cout<<"*";

      }
      cout<<endl;
   }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    //half pyramid observation is every row has one 1 more star than its
    for(int r=0;r<6;r++)
    {
     for(int c=0;c<r+1;c++)
     {
          cout<<"*";
     }
     cout<<endl;
    }
       cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    //inverted half pyramid
    for(int r=0;r<5;r++)
    {
     for(int c=0;c<5-r;c++)
     {
          cout<<"*";

     }
     cout<<endl;
    }
       cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
//numeric half pyramid
for(int r=0;r<5;r++)
{
     for(int col=0;col<r+1;col++)
     {
          cout<<col+1;
     }
     cout<<endl;
}
   cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    //numeric inverted half pyramid
    for(int r=0;r<5;r++)
    {
     for(int c=0;c<5-r;c++)
     {
          cout<<c+1;
     }
     cout<<endl;
    }

}