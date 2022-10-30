#include <iostream>
using namespace std;
class Complex
{
    int r, i;

public:
    Complex()
    {
    }
   friend istream &operator>>(istream &input, Complex &c)
    {
        input >> c.r;
        input >> c.i;
        return input;
    }
    friend ostream &operator<<(ostream &out, Complex &c)
    {
        out <<"Real part is "<< c.r<<endl;
        out << "Imaginary part is" <<c.i<<endl;
        return out;
    }
};
int main()
{
    Complex c1, c2;
    cout << "Enter the real and imaginary part" << endl;
    cin >> c1 >> c2;
    cout<<c1<<c2;
    return 0;
}