#include<iostream>
using namespace std;

class square{
public:
int area(int l,int b)
{
int a= l*b;
cout<<"int"<<a;
}
float area(float l,float b)
{
return l*b;
cout<<"float";
}
};
int main(){
square obj;
obj.area(3,5);
}
