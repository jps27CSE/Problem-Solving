#include<iostream>
using namespace std;

int main()
{
    int number,i;
    cin>>number;
    string s;
    cin>>s;
    int Anton=0;
    int Danik=0;

    
    for(int i=0;i<number;i++)
    {
       if(s[i]=='A')
       {
           Anton++;
       }
       else if(s[i]=='D')
       {
           Danik++;
       }
    }

    if(Anton > Danik)
    {
        cout<<"Anton";
    }
    else if(Danik > Anton)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }
}