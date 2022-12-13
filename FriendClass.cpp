#include<bits/stdc++.h>
using namespace std;

class parantClass
{
private:
    string name;
    int age;

public:
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }


    friend class childClass;
};

class childClass: public parantClass
{
public:
    SetElement(string name,int age)
    {
        this->age =age;
        this->name= name;
    }

};

int main()
{

    childClass obj;
    int age;
    string name;

    cout<<"Name: ";getline(cin,name);
    cout<<"Age : ";cin>>age;
    obj.SetElement(name, age);


    cout<<"\nName is: "<<obj.getName()<<endl;
    cout<<"Age is: "<<obj.getAge()<<endl;

    return 0;
}
