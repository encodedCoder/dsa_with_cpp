#include <iostream>
using namespace std;

class ComplexNumber{
	int real;
	int imag;
public:
	ComplexNumber(int real = 0, int imag = 0){
		this->real = real;
		this->imag = imag;
	}
	friend ComplexNumber operator+(ComplexNumber, ComplexNumber);
	friend ostream & operator<<(ostream &, ComplexNumber &);
};
ComplexNumber operator+(ComplexNumber comp_num1, ComplexNumber comp_num2){
	int r = comp_num1.real + comp_num2.real;
	int i = comp_num1.imag + comp_num2.imag;
	ComplexNumber complex_number(r, i)		;
	return complex_number;
}
ostream &operator<<(ostream &out, ComplexNumber &c){
	out << c.real << "+" << c.imag << "i";
	return out;
}

int main(int argc, char const *argv[])
{
	ComplexNumber comp_num1(5,7), comp_num2(4,1);
	cout << comp_num1 << endl;
	cout << comp_num2 << endl;
	ComplexNumber comp_num3 = comp_num1 + comp_num2;
	cout << comp_num3 << endl;
	ComplexNumber comp_num4 = comp_num1 + comp_num2 + comp_num3;
	cout << comp_num4 << endl;
	return 0;
}
