#include<iostream>
using namespace std;
class complex{
private:
float real;
float image;
public:
complex()
{
    real = 0;
    image = 0;
}
complex(float r,float i)
{
    real=r;
    image=i;
}
~complex()
{

}
void display(void)
{
    cout<<real<<"+"<<image<<"j"<<endl;}
    
complex add(complex c)
{
    float r = real + c.real;
    float i = image + c.image;
    return complex(r,i);
}
complex sub(complex c)
{
    float r = real - c.real;
    float i = image - c.real;
    return complex(r,i);
}
complex mul(complex c){
    float r = real * c.real;
    float i = image + c.image;
    return complex(r,i);
}
};
int main(){
    complex c1(2.0,3.0);
    cout<<"complex no. is "<<endl;
    c1.display();
    complex c2(5.0,7.0);
    cout<<"complex no. is "<<endl;
    c2.display();
    complex c3(8.0,8.0);
    cout<<"complex no. is "<<endl;
    c3.display();
    complex c4(6.0,13.0);
    cout<<"complex no. is "<<endl;
    c4.display();
    complex sum=c1.add(c2);
    cout<<"addition of complex is "<<endl;
    sum.display();
    complex diff=c1.sub(c2);
    cout<<"subtraction = "<<endl;
    diff.display();
    complex mul=c1.mul(c2);
    cout<<"multiplication is "<<endl;
    mul.display();
    return (0);
}