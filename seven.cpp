
#include <iostream>

using namespace std;
class Integer{
  int r;
  public:
  Integer(int val){
      r=val;
  }
  int operator!(){ 
      return !r;
  }
};
int main()
{
    
    Integer i1=5;
    cout<<!i1;
    return 0;
}