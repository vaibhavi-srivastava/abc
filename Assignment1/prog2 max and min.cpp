#include <bits/stdc++.h> 
using namespace std;
int main()
{
	int arr[100],n,i;
	cout<<"enter elements";
	cin>>n;
	for(i=0;i<n;i++)
	cin>> arr[i];
	cout<<"given array:"<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<" "<<endl;
	sort(arr,arr+n);
	cout<<"array in sorted form:"<<endl;
	for (int i = 0; i < n; i++) 
        cout << arr[i] << " "<<endl; 
        cout<<arr[1] <<" is second minimum"<<endl;
        cout<<arr[n-2]<<" is second maximum"<<endl;
    return 0; 
}
