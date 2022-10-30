#include <iostream>
using namespace std;
class Complex
{
    int r, i;

public:
    Complex(int r,int i)
    {
      this->r=r;
      this->i=i;
    }
    void setdata(int r,int i){
     this->r=r;
     this->i=i;
    }
    void display(){
        cout<<" Real part = "<<r<<" Imaginary part = "<<i<<endl;
    }
   
};
int main()
{
    Complex c1(4,5), c2(6,8);
    // c1.setdata(1,2);
    // c2.setdata(5,6);
    c1.display();
    c2.display();
    return 0;
}