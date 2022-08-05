#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[20];
    cin>>str;


    int len =strlen(str);
    int temp =0;

    for(int i=0; i<len; i++)
    {
        if(str[i] != str[len-i-1])
        {
            temp = 1;
        }
        else{
            break;
        }
    }

    if(temp == 0)
    {
        cout<<"Palindrom";
    }
    else{
        cout<<"Not Palindrom";
    }
    
    
}