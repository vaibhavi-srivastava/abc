#include<bits/stdc++.h>
using namespace std;
class A
{
    public:
        A()
        {
            cout<<"first constructor of class A called"<<endl;
        }
        A(string str)
        {
            cout<<"second constructor of class A called"<<endl;
        }
        ~A()
        {
            cout<<"destructor of class A called"<<endl;
        }
};
class B:public A
{
    public:
        B()
        {
            cout<<"first constructor of class B called"<<endl;
        }
        B(string str)
        {
            cout<<"second constructor of class B called"<<endl;
        }
        ~B()
        {
            cout<<"destructor class B called"<<endl;
        }
};
class C:public A
{
    public:
        C(string str):A(str)
        {
            cout<<"first constructor of class C called"<<endl;
        }
        C()
        {
            cout<<"second constructor of class C called"<<endl;
        }
        ~C()
        {
            cout<<"destructor of class C called"<<endl;
        }
};
class D:public B,public C
{
    public:
        D(string str):B(),C()
        {
            cout<<"first constructor of class D called"<<endl;
        }
        D()
        {
            cout<<"second constructor of class D called"<<endl;
        }
        ~D()
        {
            cout<<"Destructor of class D called"<<endl;
        }
};
int main()
{

    //class C objects
    C objectC1("Test");
    C objectC2;
    //class B onjects
    B objectB1("Test");
    B objectB2;
    // class D objects
    D objectD1("Test");
    D objectD2;
    return 0;
}
