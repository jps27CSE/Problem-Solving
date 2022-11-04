#include<iostream>
using namespace std;

int binarySearch(int array[],int target,int start,int end)
{
    if(start > end)
    {
        return -1;
    }

    int mid = start + (end - start)/2;

    if(target== array[mid])
    {
        return mid;
    }

    if(target < array[mid])
    {
       return binarySearch(array,target,start,mid-1);
    }

     return binarySearch(array,target,mid+1,end);
}

int main()
{
    int array[] = {2,3,4,5,6,7,8,88};
    int end = sizeof(array)/sizeof(array[0]) - 1;
    int target = 4;

    cout<<binarySearch(array,target,0,end);
}