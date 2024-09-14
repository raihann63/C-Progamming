#include<bits/stdc++.h>
using namespace std;
int main()
{
    char letter;
    cout<<"Enter any letter= ";
    cin>>letter;

    if(letter=='z')
    {
        cout<<"A";
    }
    else if (letter=='Z')
    {
        cout<<"A";
    }
    else
    {
        int num=letter;
        num++;
        char ch=num;
        cout<<ch;
    }

}