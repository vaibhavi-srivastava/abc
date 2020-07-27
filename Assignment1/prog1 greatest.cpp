#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"Enter three numbers";
cin>>a;
cin>>b;
cin>>c;
if(a>b&&a>c)
cout<<a<<" "<< "is largest"<<endl;
if(b>a&&b>c)
cout<<b<<" "<< "is largest"<<endl;
else
cout<<c <<" "<< "is largest"<<endl;
}
