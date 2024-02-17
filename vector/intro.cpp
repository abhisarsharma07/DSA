 #include<iostream>
 #include<vector>
using namespace std;
int main(){
  //create vector
  vector<int>arr;
  int ans= arr.size();
  cout<<ans;
//   int a=(sizeof(arr)/sizeof(int));
//   cout<<a;
arr.push_back(50);
arr.push_back(6);
for (int i = 0; i < arr.size(); i++)
{
     /* code to print array/vector elements */
    cout<<arr[i];
}

vector<int>brr(10);
cout<<brr.size();
cout<<brr.capacity();


int n;
cin>>n;

vector<int>crr(n,-101);
cout<<crr.size();
cout<<crr.capacity();
  return 0; 
}