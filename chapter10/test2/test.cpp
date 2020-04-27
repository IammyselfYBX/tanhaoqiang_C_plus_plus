/**
 * 定义一个附属类 Complex ，重载运算符 + - × /，使之可以用于附属元算
*/
#include <iostream>
using namespace std;

class Complex
{
public :
    Complex(){rear=0; imag=0;}
    Complex(double r, double i){rear=r;imag=i;}
    Complex operator+(Complex &c2);
    Complex operator-(Complex &c2);
    Complex operator*(Complex &c2);
    Complex operator/(Complex &c2);
    void display();

private:
    double rear,imag;
};

Complex Complex::operator+(Complex &c2)
{
    Complex tmp;
    tmp.rear=c2.rear+this->rear;
    tmp.imag=c2.imag+imag;
    return tmp;
}

Complex Complex::operator-(Complex &c2)
{
    Complex tmp;
    tmp.rear=c2.rear-rear;
    tmp.imag=c2.imag-imag;
    return tmp;
}

Complex Complex::operator*(Complex &c2)
{
    Complex tmp;
    tmp.rear=rear*c2.rear-imag*c2.imag;
    tmp.imag=imag*c2.imag+rear*c2.imag;
    return tmp;
}

Complex Complex::operator/(Complex &c2)
{
    Complex tmp;
    tmp.rear=(rear*c2.rear+imag*c2.imag)/(c2.rear*c2.rear+c2.imag*c2.imag);
    tmp.imag=(imag*c2.rear-rear*c2.imag)/(c2.rear*c2.rear+c2.imag*c2.imag);
    return tmp;
}

void Complex::display()
{
    cout<<"("<<rear<<","<<imag<<"i)"<<endl;
}

int main()
{
    Complex c1(3, 4), c2(5, -10), c3;
    c3=c1+c2;
    cout<<"c1+c2=";
    c3.display();

    c3=c1-c2;
    cout<<"c1-c2=";
    c3.display();
    c3=c1*c2;
    cout<<"c1*c2=";
    c3.display();
    c3=c1/c2;
    cout<<"c1/c2=";
    c3.display();

    return 0;
}