#include <iostream>
using namespace std;
#include <string.h>

class Teacher
{
public:
    Teacher(string nam, int a, string t):name(nam), age(a), title(t){}
    void display();
protected:
    string name;
    int age;
    string title;
};

void Teacher::display()
{
    cout<<"name: "<<name<<endl;
    cout<<"age: "<<age<<endl;
    cout<<"title: "<<title<<endl;
}

class Student
{
protected:
    string name1;
    char sex;
    float score;
public:
    Student(string nam, char s, float sco):name1(nam), sex(s), score(sco){ }
    void dispaly1();
};

void Student::dispaly1()
{
    cout<<"name: "<<name1<<endl;
    cout<<"sex: "<<sex<<endl;
    cout<<"score: "<<score<<endl;
}

class Graduate:public Teacher, public Student
{
private:
    float wage;
public:
    Graduate(string nam, int a, char s, string t, float sco, float w):Teacher(nam, a, t), Student(nam, s, sco), wage(w){}
    void show();
};

void Graduate::show()
{
    cout<<"name: "<<name<<endl;
    cout<<"name1: "<<name1<<endl;
    cout<<"age: "<<age<<endl;
    cout<<"sex: "<<sex<<endl;
    cout<<"score: "<<score<<endl;
    cout<<"title: "<<title<<endl;
    cout<<"wages: "<<wage<<endl;
}

int main()
{
    Graduate grad1("YBX handsome", 24, 'f', "assistant", 89.5, 1200);
    cout<<"-------------------------------------"<<endl;
    grad1.show();
    cout<<"-------------------------------------"<<endl;
    grad1.dispaly1();
    cout<<"-------------------------------------"<<endl;
    grad1.display();

    return 0;
}