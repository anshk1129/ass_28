#include<iostream>
using namespace std;
class Marks
{
private:
    int marks;
public:
Marks(int m){
    marks=m;
}
void printMarks(){
    cout<<"Marks = "<<marks<<endl;
}
Marks* operator->(){
    return this;
}
};
int main(){
Marks m(10);
m.printMarks();
m->printMarks();
}