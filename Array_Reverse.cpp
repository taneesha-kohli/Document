#include<iostream>
#include<iomanip>
using namespace std;

void reverse(int arr[],int n)
{
int temp[n],j=0;
for(int i=(n-1);i>=0;i--)
{
    temp[i]=arr[j];
    j++;
}
for(int i=0;i<n;i++)
{
    arr[i]=temp[i];
}
}

int main()
{
int n;
cout<<"Enter the size of array :"<<endl;
cin>>n;

int arr[n];
for(int i=0;i<n;i++)
{
cout<<"Enter "<<i+1<<" element : "<<endl;
cin>>arr[i];
}

cout<<"Your entered array is :-------------"<<endl;
for(int i=0;i<n;i++)
{
cout<<arr[i]<<setw(4);
}

cout<<"\nAfter reverse array is:--------------"<<endl;
reverse(arr,n);
for(int i=0;i<n;i++)
{
cout<<arr[i]<<setw(4);
}
return 0;
}
