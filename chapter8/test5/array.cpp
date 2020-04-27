#include "array.h"
#include <iostream>
using namespace std;

void Array::max_value()
{
    max=array[0];
    for(int i=1;i<10;i++)
    {
        if(array[i]>max){
            max=array[i];
        }
    }
}
void Array::set_value()
{
    cout<<"Please input 10 numbers: ";
    for(int i=0; i<10; i++)
    {
        cin>>array[i];
    }
}
void Array::show_value()
{
    cout<<"max="<<max<<endl;
}