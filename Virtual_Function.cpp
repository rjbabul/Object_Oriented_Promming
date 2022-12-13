#include<bits/stdc++.h>
using namespace std;

class A
{
public:
    virtual void MyClass()
    {
        cout<<"A class"<<endl;
    };
};

class B: public A
{
public:
    void MyClass()
    {
        cout<<"B class"<<endl;
    }
};
int main()
{
    A *ptr = new A() ;

    B classB;
    ptr= &classB;
    ptr->MyClass();
    return 0;
}
