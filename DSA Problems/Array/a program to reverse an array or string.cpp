#include<iostream>
using namespace std;


void ArrayReverse(int array[],int start,int end)
{
    while(start <end)
    {
        int temp = array[start];  
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }
}


void printArray(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int array[]={1,2,3,4,5,6};

    int size = sizeof(array)/sizeof(array[0]); // 24/4 = 6

    printArray(array,size);  

    ArrayReverse(array,0,size-1); // size-1 = 5

    printArray(array,size);
}