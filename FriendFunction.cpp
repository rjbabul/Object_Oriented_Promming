#include<bits/stdc++.h>
using namespace std;
class ParantClass
{
private:
    string name;
    int age;

public:

    friend void setElement(ParantClass Obj);
};

void setElement(ParantClass Obj)
{
    int age;
    string name;

    cout<<"Name :"; getline(cin, name);
    cout<<"Age  :"; cin>>age;

    Obj.age = age;
    Obj.name= name;

    cout<<"Name is :"<<Obj.name<<endl;
    cout<<"Age is  :"<<Obj.age<<endl;
}

int main()
{
    ParantClass Obj;
    setElement(Obj);

    return 0;
}
