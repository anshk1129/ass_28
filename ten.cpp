#include<iostream>
using namespace std;
class Distance{
float inches,feet;
public:
Distance(){

}
Distance(float f,float i){
    feet=f;inches=i;
}
void operator()(int a,int b,int c){
    feet=a+c+5;
     inches=a+b+15;
}
void display(){
    cout<<"Feet = "<<feet<<" Inches = "<<inches<<endl;
}
};
int main(){
    Distance d1(10.21f,11.23f);
    cout<<"Before overloading function ()"<<endl;
    d1.display();
    d1(10,11,12);    //niche wali line or ye line same hi h
    //  d1.operator()(10,11,12);
    cout<<"After overloading "<<endl;
    d1.display();

}