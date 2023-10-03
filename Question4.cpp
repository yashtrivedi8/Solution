#include<iostream>
using namespace std;
void swap(string &input1,string &input2)
{
    input1 = input1 + input2;
    input2 = input1.substr(0, input1.length() - input2.length()); 
    input1 = input1.substr(input2.length()); 
}
int main()
{
    string string1;
    string string2;
    cin>>string1>>string2;
    cout<<"Before Swapping:\n String1:"<<string1<<"\n String 2:"<<string2;
    //We Can do it directly using a function like: string1.swap(string2);
    swap(string1,string2);
    cout<<"\n\nAfter Swapping:\n String1:"<<string1<<"\n String 2:"<<string2;
}