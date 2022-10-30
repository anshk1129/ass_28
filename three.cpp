#include <iostream>
using namespace std;
class Array{
int arr[100];
const int size=100;
public:
void setdata(int index,int n){
  if(index>=size){
    cout<<"\nArray out of bound "<<endl;
    exit(0);
  }
  arr[index]=n;
}
int operator[](int index){
if(index>=size){
    cout<<"\nArray out of bound "<<endl;
    exit(0);
  }
  return arr[index];
}

};
int main(){
Array a1;
a1.setdata(10,5);
a1.setdata(23,4);
cout<<a1[23];
cout<<a1[100];
}