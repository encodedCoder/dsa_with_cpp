#include <iostream>
using namespace std;

class RationalNumber{
	int p, q;
	static int getGCD(int a, int b){
		if (a%b == 0) return b;
		if (b%a == 0) return a;
		else if(a > b) return getGCD(b, a%b);
		else return getGCD(a, b%a);
	}
	static int getLCM(int a, int b){
		return (a/getGCD(a,b)*b);
	}
public:
	RationalNumber(int p=0, int q=1){
		this->p = p;
		this->q = q;
	}
	friend RationalNumber operator+(RationalNumber, RationalNumber);
	friend ostream& operator<<(ostream &, RationalNumber);
};
RationalNumber operator+(RationalNumber r1, RationalNumber r2){
	int lcm = RationalNumber::getLCM(r1.q, r2.q);
	int fact1 = lcm/r1.q;
	int fact2 = lcm/r2.q;
	int r1_p = r1.p * fact1;
	int r2_p = r2.p * fact2;
	RationalNumber rational_number(r1_p + r2_p, lcm);
	return rational_number;
}
ostream& operator<<(ostream &out, RationalNumber r){
	out << r.p << "/" << r.q; return out;
}

int main(int argc, char const *argv[])
{
	RationalNumber r1(3,4), r2(5,8);
	cout << r1 << endl;
	cout << r2 << endl;
	RationalNumber r3 = r1 + r2;
	cout << r3 << endl;
	return 0;
}
