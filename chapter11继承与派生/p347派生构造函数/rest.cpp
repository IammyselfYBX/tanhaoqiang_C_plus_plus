#include <iostream>
using namespace std;
#include <string>

class Student
{
public:
    Student(int n, string nam, char s):num(n), name(nam), sex(s){}
    ~Student(){}
protected:
    int num;
    string name;
    char sex;
};

class Student1:public Student
{
public:
    Student1(int n, string nam, char s, int a, string ad):Student(n, nam, s), age(a), addr(ad){}
    ~Student1(){}
    void show();
private:
    int age;
    string addr;
};

void Student1::show()
{
    cout<<"num: "<<num<<endl;
    cout<<"name: "<<name<<endl;
    cout<<"sex: "<<sex<<endl;
    cout<<"age: "<<age<<endl;
    cout<<"addr: "<<addr<<endl;
}

int main()
{
    Student1 stu1(10010, "YBX handsome", 'f', 19, "115 Beijing Road, Shanghai");
    Student1 stu2(10011, "YBX briliant", 'f', 19, "213 shanghai Road, Beijing");
    stu1.show();
    cout<<"-------------------------------------------------"<<endl;
    stu2.show();

    return 0;
}
