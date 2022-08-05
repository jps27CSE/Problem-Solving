#include <iostream>
using namespace std;
int main()
{
    int n = 123245227;

        int count = 0;

        while (n > 0) {
            int rem = n % 10;
            if (rem == 2) {
                count++;
            }

            n = n / 10;
        }    

        cout<<count;
}