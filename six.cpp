
#include <iostream>

using namespace std;
class Complex{
  int r,i;
  public:
  Complex(){
      
  }
  Complex(int r,int i){
      this->r=r;
      this->i=i;
  }
  Complex &  operator=(Complex c){
      r=c.r;
      i=c.i;
      return *this;
  }
  void display(){
      cout<<" Real = "<<r<<" Imaginary = "<<i<<endl;
  }
};
int main()
{
    
    Complex c1(4,3),c2(1,2);
    Complex c3;
    c3=c2=c1;
   c3.display();
    return 0;
}