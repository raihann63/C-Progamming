#include<iostream>
using namespace std;
int main()
{
    string username="Raihan";
    int password=1234;

    string ch;
    cout<<"Type username= ";
    cin>>ch;

    if(username==ch)
    {
        int pass;
        cout<<"Enter your password= ";
        cin>>pass;

        if(pass==password)
        {
            cout<<"login successful"<<endl;
        }
        else
        {
            cout<<"Login failed"<<endl;
        }
         if(username==ch && pass==password)
        {
        cout<<"thank you"<<endl;
        }
        else
        {
        cout<<"Please try again";

        }

    }
    else
    {
        cout<<"Please provide correct username";
    }
   
 
}