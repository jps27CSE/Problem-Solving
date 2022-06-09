#include<iostream>
using namespace std;

int main()
{
     int test;
     cin>>test;
     int answer,left;

     answer = test/100;
     left = test%100;

     answer += left/20;
     left = left%20;

     answer += left/10;
     left = left%10;

     answer += left/5;
     left = left%5;

     answer += left/1;
     left = left%1;

     cout<<answer;
     
}