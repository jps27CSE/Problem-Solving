#include<iostream>
#include<algorithm>
using namespace std;

void reverse(int array[],int length)
{
    reverse(array,array+length);
}

int main()
{
    int array [] ={1,2,3,4,5,6,7,8};
    int length = sizeof(array)/sizeof(array[0]);

    reverse(array,length);

    for(int i = 0; i < length; i++)
    {
        cout<<array[i]<<" "<<endl;
    }
}