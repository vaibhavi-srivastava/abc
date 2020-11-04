#include<iostream>
using namespace std;
void printArray(int arr[],int s,int n)
{
if(s>=n)
return;
cout<<arr[s]<<" ";
printArray(arr,s+1,n);
}
int main()
{
int n,i;
cout<<"Enter the Array size : "<<endl;
cin>>n;
int arr[n],s=0;
for(i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"Elements in the array :"<<endl;
printArray(arr,s,n);
return 0;
}

