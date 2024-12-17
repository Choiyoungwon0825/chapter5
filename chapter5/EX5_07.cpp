//호출자 인수를 수정하기 위해 레퍼런스 사용하기

#include <iostream>

using namespace std;

int incr10(int& num); // 함수 프로토타입

int main(void)
{
	int num = 3;
	int value = 6;

	cout << endl
		<< "incr(num) = " << incr10(num);

	cout << endl
		<< "num = " << num;

	cout << endl
		<< "incr10(value) = " << incr10(value);

	cout << endl
		<< "value = " << value;

	cout << endl;

	return 0;
}
// 변수를 10만큼 증가시키는 함수

int incr10(int& num) // 레퍼런스 인수를 갖는 함수
{
	cout << endl
		<< "Value received = " << num;
	num += 10;
	return num;
}