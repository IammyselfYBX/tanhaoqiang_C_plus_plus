#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    string name;
    int num;
    float score;
public:
    Student(string nam, int n, float sco):name(nam), num(n), score(sco){ }
    void display();
};

void Student::display()
{
    cout<<"name: "<<name<<endl;
    cout<<"num: "<<num<<endl;
    cout<<"score: "<<score<<endl;
}

class Graduate:public Student
{
private:
    float wage;
public:
    Graduate(string nam, int a, char s, string t, float sco, float w):Student(nam, s, sco), wage(w){}
    void display();
};

void Graduate::display()
{
    cout<<"name: "<<name<<endl;
    cout<<"num: "<<num<<endl;
    cout<<"score: "<<score<<endl;
    cout<<"wages: "<<wage<<endl;
}

int main()
{
    Graduate grad1("YBX handsome", 24, 'f', "assistant", 89.5, 1200);
    Student stu1("Li", 1001, 89.0);
    Student *pt=&stu1;
    pt->display();
    cout<<"--------------------------------------------------"<<endl;
    pt=&grad1;
    pt->display();
    cout<<"--------------------------------------------------"<<endl;
    grad1.display();

    return 0;
}
