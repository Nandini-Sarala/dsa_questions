#include<iostream>
#include<limits.h>
using namespace std;
int setminimum(int arr[],int s);
int setmaximum(int arr[],int s);
int main()
{
    int s=5;
    int arr[s]={3,5,4,1,9};
    cout<<"minimum value is :"<<setminimum(arr,s)<<endl;
    cout<<"maximum is :"<<setmaximum(arr,s)<<endl;
    return 0;

}
int setminimum(int arr[],int s)
{
    int mini=INT_MAX;
    for(int i=0;i<s;i++)
    {
        if(arr[i]<mini)
        mini=arr[i];
    }
    return mini;
}
int setmaximum(int arr[],int s)
{
    int maxi=INT_MIN;
    for(int i=0;i<s;i++)
    {
        if(arr[i]>maxi)
        maxi=arr[i];
    }
    return maxi;
}
