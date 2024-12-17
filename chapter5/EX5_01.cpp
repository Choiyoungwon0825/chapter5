// 함수 선언/정의하며 사요 ㅇ

#include <iostream>

using namespace std;

double power(double x, int n); //  함수 프로토타입

int main(void)
{
	int index = 3;
	double x = 3.0;
	double y = 0.0;

	y = power(5.0, 3);
	cout << endl
		<< "5.0 cubed = " << y;

	cout << endl
		<< "3.0 cubed = "
		<< power(3.0, index);

	x = power(x, power(2.0, 2.0));
	cout << endl
		<< "x = " << x;

	cout << endl;
	return 0;
}

// double값의 전체 멱값을 계산하는 함수

//  첫번째 인수는 값, 두번째 인수는 지수

double power(double x, int n) {
	double result = 1.0;
	for (int i = 1; i <= n; i++)
		result *= x;
	return result;
}