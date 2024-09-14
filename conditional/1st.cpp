#include<iostream>
using namespace std;
int main()
{
int num;
cout<<"Type any number= ";
cin>>num;

if(num>5)
{
    cout<<num<<" is grater than 5"<<endl;

}
else
{
    cout<<" Not grater 5"<<endl;
}

if(num%2==0)
{
    cout<<num<<" is even"<<endl;
}
else
{
    cout<<num<<" is odd "<<endl;
}

cout<<"This is correct result";

return 0;

}
