#include<iostream>
using namespace std;
int main()
{

    int test;
    cin>>test;
    int array[test];
    

    for(int i=0; i<test; i++)
    {
        cin>>array[i];
        if(array[i]== 1 || array[i]==2)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<(array[i]-1)/2<<endl;
        }
    }

    

    return 0;
}