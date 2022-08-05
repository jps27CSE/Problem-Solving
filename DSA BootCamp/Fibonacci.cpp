#include<iostream>
using namespace std;

int main()
{
    int number ;
    cin>>number;
     int p = 0, i = 1;

        int count = 2;

        while (count <= number) {
            int temp = i;
            i = i + p;
            p = temp;

            count++;
        }

        cout<<i;
}