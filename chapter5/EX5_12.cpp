//x의 n승에 대한 재귀 버전
#include <iostream>
#include <cstdlib> // exit함수에 대한것

using namespace std;

double power(double x, int n);

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

// double 값의 전체 멱값을 계산하는 재귀함수
// 첫 번째 인수는 값이며, 두 번째 인수는 지수이다.
double power(double x, int n)
{
	if (n < 0)
	{
		cout << endl
			<< "Negative index, program terminated.";
		exit(1);
	}
	if (n)
		return x * power(x, n - 1);
	else
		return 1.0;
}
