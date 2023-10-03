#include<iostream>
using namespace std;
int largestElement(int arr[],int size)
{
    int largest=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    return largest;
}
int main()
{
    int arr[]={5,3,7,4,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<largestElement(arr,size);

}