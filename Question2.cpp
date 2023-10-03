#include<iostream>
using namespace std;
bool checkPalindrom(string str)
{
    bool a=false;
    int i=0;
    int j=str.length()-1;
    while(i<j)
    {
        if(str[i]!=str[j])
            return false;
        i++;
        j--;
    }
    return true;
}
int main()
{
    string input;
    cin>>input;
    cout<<boolalpha<<checkPalindrom(input);
}