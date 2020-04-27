#include <iostream>
using namespace std;
#include <string.h>

class Person
{
protected:
    string name;
    char sex;
    int age;
public:
    Person(string nam, char s, int a):name(nam), sex(s), age(a){}
};

class Teacher:virtual public Person
{
public:
    Teacher(string nam, char s, int a, string t):Person(name, s, a), title(t){}
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

class Student:virtual public Person
{
protected:
    float score;
public:
    Student(string nam, char s, int a, float sco):Person(nam, s, a), score(sco){ }
    void dispaly1();
};

void Student::dispaly1()
{
    cout<<"name: "<<name<<endl;
    cout<<"sex: "<<sex<<endl;
    cout<<"score: "<<score<<endl;
}

class Graduate:public Teacher, public Student
{
private:
    float wage;
public:
    Graduate(string nam, int a, char s, string t, float sco, float w):
            Person(nam, s, a), Teacher(nam, s, a, t), Student(nam, s, a, sco), wage(w){}
    void show();
};

void Graduate::show()
{
    cout<<"name: "<<name<<endl;
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