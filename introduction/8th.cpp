#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,y,z,result;
    x=10;
    y=20;
    z=25;
    double value=3.65;

    result =max(x,y);
    cout<<"\nthe maximum result= "<<result;

    result=min(x,y);
    cout<<"\nthe minimum result= "<<result;

     result=sqrt(z);
    cout<<endl<<"the Sqrt result= "<<result;
    
     result=round(value);
    cout<<"\nthe maximum result= "<<result;
    
    

}