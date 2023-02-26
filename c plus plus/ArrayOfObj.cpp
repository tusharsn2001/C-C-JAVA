#include<iostream>
using namespace std;

class employee
{
    char name[20];
    int age;
    public:
    void setData(void)
    {
        cout<<"Enter name of emp "<<endl;
        cin>>name;
        cout<<"Enter age "<<endl;
        cin>>age;
    }
    void getData(void)
    {
        cout<<"name of employee: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }

};
int main()
{
    employee manager[3];
    for(int i=0;i<3;i++)
    {
        manager[i].setData();
        manager[i].getData();
    }
    return 0;
}