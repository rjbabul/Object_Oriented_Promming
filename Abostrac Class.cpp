#include<bits/stdc++.h>
using namespace std;

class A
{
public:
    virtual void MyClass() =0;
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
    A *ptr  ;
    B classB;
    ptr= &classB;
    ptr->MyClass();
    return 0;
}
