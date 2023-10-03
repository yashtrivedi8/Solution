#include<iostream>
using namespace std;
int countChar(string input,char c)
{
    int count=0;
    for(int i=0;i<input.length();i++)
    {
        if(input[i]==c)
            count++;
    }
    return count;
}
int main()
{
    string input;
    getline(cin,input);
    char c;
    cin>>c;
    cout<<countChar(input,c);

}