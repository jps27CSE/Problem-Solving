// *
// * *
// * * *
// * * * *

// step1 : run the loop of row times
// step2 : run the inner loop of column of row times
// step3 : print what to print 


#include<iostream>
using namespace std;

int pattern2(int n)
{
  for(int row=1;row<=n;row++)
  {
    for(int column =1;column <=row;column++)
    {
        cout<<"* ";
    }
    cout<<endl;
  }
}

int main()
{
    pattern2(4);
}

