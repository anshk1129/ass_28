#include<iostream>
using namespace std;
class Coordinate{
int x,y,z;
public:
Coordinate(){

}
Coordinate(int i,int j,int k){
    x=i;y=j;z=k;
}
Coordinate operator,(Coordinate c){
   Coordinate c1;
    c1.x=c.x;
    c1.y=c.x;
    c1.z=c.z;
   return c1;
}
void show(){
    cout<<" x = "<<x<<" y = "<<y<<" z = "<<z<<endl;
}
};
int main(){
Coordinate c1(10,11,12);
Coordinate c2(1,2,3);
Coordinate c3;
c1.show();
c2.show();
c3=(c1,c2);
c3.show();
return 0;
}