#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"Before Swapping: A:"<<a<<" B:"<<b;
    swap(a,b);
    cout<<"\nAfter Swapping: A:"<<a<<" B:"<<b;
}