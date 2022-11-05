#include<iostream>
using namespace std;

float simpleInterest(float principleAmount, float rate, float time)
{
	return (principleAmount*rate*time)/100;
}

int main()
{
	float principleAmount, rate, time, simpleInterestAmount;
	cout <<"Enter principle amount: ";
	cin>> principleAmount;

	cout <<"Enter rate: ";
	cin>> rate;

	cout <<"Enter time: ";
	cin>> time;

	cout << simpleInterest(principleAmount, rate, time);
}