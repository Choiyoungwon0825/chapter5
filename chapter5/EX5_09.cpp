// 나쁜 포인터 리턴
#include <iostream>

using namespace std;

double* treble(double data);

int main(void)
{
	double num = 5.0;
	double* ptr = 0;

	ptr = treble(num);

	cout << endl
		<< "Three times num = " << 3.0*num;

	cout << endl
		<< "Result = " << *ptr;

	cout << endl;

	return 0;
}

// 값을 세제곱하는 함수

double* treble(double data)
{
	double result = 0.0;

	result = 3.0*data;

	return &result;
}