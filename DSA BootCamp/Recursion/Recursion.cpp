#include<iostream>
using namespace std;

void recursion(int n){

    if(n==5)
    {
        cout<<5;
        return;
    }
    cout<<n;
    recursion(n+1);
}

int main(){
  recursion(1);
}

