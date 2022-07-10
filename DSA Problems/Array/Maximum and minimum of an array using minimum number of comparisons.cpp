#include<iostream>
using namespace std;

struct Pair{
    int min;
    int max;
};

Pair getMinMax(int array[],int size)
{
    struct Pair minmax;
    int i;

    //if there is only one element in array 
    if(size ==1)
    {
        minmax.min = array[0];
        minmax.max = array[0];
        return minmax;
    }
    //if there is greater than one element in array
    if(array[0] > array[1])
    {
        minmax.min = array[1];
        minmax.max = array[0];
    }
    else
    {
        minmax.min = array[0];
        minmax.max = array[1];
    }

    for(i=2;i<size;i++)
    {
        if(array[i] > minmax.max)
        {
           minmax.max = array[i];
        }
        else if(array[i] < minmax.min){
            minmax.min = array[i];
        }
    }

    return minmax;
   
}


int main()
{ 
    int array[]={20,4,2,60,6};
    // int array[]={2,1};

    int size = sizeof(array)/sizeof(array[0]);

    struct Pair minmax = getMinMax(array,size);

    cout<<"Max: "<<minmax.max<<endl;
    cout<<"Min: "<<minmax.min<<endl;

    return 0;
}