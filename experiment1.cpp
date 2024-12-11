/*Implement a class Complex which represents the Complex Number data type. Implement 
thefollowing :
        1. Constructor (including a default constructor which creates the complex number 0+0i).
        2. Overload operator+ to add two complex numbers.
        3. Overload operator* to multiply two complex numbers.
        4. Overload operators << and >> to print and read Complex Numbers.
*/

#include <iostream>
using namespace std;

class complex {
     // Real
    float x; 
    // Imaginary
    float y;  

public:
    complex() : x(0),y(0) {}

    // complex() {
    //     x = 0;
    //     y = 0;
    // }
    complex operator+(const complex &c) const;
    complex operator*(const complex &c) const;

    friend istream &operator>>(istream &input, complex &t) {
        input>>t.x;
        input>>t.y;
    }
    friend ostream &operator<<(ostream &output, const complex &t) {
        output<<t.x<<"+"<<t.y<<"i";
    }
};
complex complex::operator+(const complex& c) const {
    complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return temp;
}
complex complex::operator*(const complex& c) const {
    complex temp;
    temp.x = x * c.x - y * c.y; 
    temp.y = x * c.y + y * c.x;
    return temp;
}

int main() {
    complex c1, c2, c3, c4;

    cout << "Enter the first complex number (real and imaginary part): ";
    cin >> c1;
    cout << "Enter the second complex number (real and imaginary part): ";
    cin >> c2;

    c3 = c1 + c2;
    c4 = c1 * c2;

    cout << "First Complex Number: " << c1 << endl;
    cout << "Second Complex Number: " << c2 << endl;
    cout << "Sum: " << c3 << endl;
    cout << "Product: " << c4 << endl;

    return 0;
}
