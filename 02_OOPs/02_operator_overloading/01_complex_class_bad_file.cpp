#include <iostream>
using namespace std;

class Complex{
	float real;
	float imag;
public:
	Complex(float real=0, float imag=0){
		this->real = real;
		this->imag = imag;
	}
	Complex(Complex &complex){
		this->real = complex.real;
		this->imag = complex.imag;
	}
	Complex operator+(Complex& c2){
		Complex temp;
		temp.real = real + c2.real;
		temp.imag = imag + c2.imag;
		return temp;
	}
	// friend Complex operator+(Complex &, Complex &);

	friend ostream &operator<<(ostream &, Complex &);
};
// Complex operator+(Complex &c1, Complex &c2){
// 	Complex temp;
// 	temp.real = c1.real + c2.real;
// 	temp.imag = c1.imag + c2.imag;
// 	return temp;
// }
ostream& operator<<(ostream &out, Complex &c){
	out << c.real << "+" << c.imag << "i";
	return out;
}


int main(int argc, char const *argv[])
{
	Complex c1(4,5), c2(5,3);
	cout << c1 << endl;
	c1 = c1 + c2;
	cout << c1 << endl;
	cout << c2 << endl;
	// cout << c1+c2 << endl;
	return 0;
}
