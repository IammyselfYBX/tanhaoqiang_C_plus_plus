#include <iostream>
using namespace std;
#include <string.h>

class String
{
private:
    char *p;
public:
    String(){p=NULL;}
    String(char *str){p=str;}
    friend bool operator > (String &string1, String &string2);
    friend bool operator < (String &string1, String &string2);
    friend bool operator == (String &string1, String &string2);
    void display(){cout<<p<<endl;};
};

bool operator>(String &string1, String &string2)
{
    if(strcmp(string1.p, string2.p)<0){
        return true;
    }
}