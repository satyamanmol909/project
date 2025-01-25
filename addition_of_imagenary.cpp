#include <iostream>
using namespace std;

class Complex {
    public:
        float real;
        float imag;
        Complex operator + (Complex  &c) {
            Complex result;
            result.real = this->real + c.real;
            result.imag = this->imag + c.imag;
            return result;
        }

        void input() {
            cout << "Enter real part: ";
            cin >> real;
            cout << "Enter imaginary part: ";
            cin >> imag;
        }
        void display() {
            cout << real<< " + " << imag << "i" << endl;;
            
        }
};

int main() {
    Complex c1, c2, c3;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "Enter second complex number:\n";
    c2.input();
    c3 = c1 + c2;
    cout << "Sum of complex numbers: ";
    c3.display();

    return 0;
}
