#include<iostream>
using namespace std;
int main()
{
    int n,arr[10],i,temp;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"enter array elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
    arr[n-i-1]=temp;
    }
    cout<<"reversed array is:";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}