//Area Of Circle
#include<iostream>
using namespace std;
float printArea(int r){
 float pi=3.14;
float area=pi*r*r;
return area;
}
int main(){
cout<<"enter the radius of circle"<<endl;
float a;
cin>>a;
float area= printArea(a);
cout<<"Area of circle is :"<<area;
return 0;
}