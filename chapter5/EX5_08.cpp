// 호출자 인수들을 수정하기 위해 레퍼런스 사용하기

#include <iostream>

using namespace std;

int incr10(const int& num);

int main(void) {
	const int num = 3;

	int value = 6;

	cout << endl
		<< "incr10(num) = " << incr10(num);

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

int incr10(const int& num) //const 레퍼런스 인수를 갖는 함수
{
	cout << endl
		<< "Value received = " << num;

	return num + 10;
}
