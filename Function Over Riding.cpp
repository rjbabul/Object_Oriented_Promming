#include<bits/stdc++.h>
using namespace std;

class A
{
public:
     void MyClass()
     {
         cout<<"Class A"<<endl;
     }
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
    B obj;
    obj.MyClass();
    return 0;
}
