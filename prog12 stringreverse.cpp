#include<iostream>
#include<cstring>
using namespace std;
string stringReverse(string str,int s,int len)
{
if(s>=len)
return ;
swap(str[s],str[len]);
stringReverse(str,s+1,len-1);
return str;
}
int main()
{
string str;
int s=0,len;
cout<<"Enter the string: ";
getline(cin,str);
len=str.size();
cout<<"The reverse string is : "<<stringReverse(str,s,len)<<endl;
return 0;
}
