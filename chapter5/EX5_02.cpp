// 호출자 인수를 수정하려는 헛된 시도

#include <iostream>

using namespace std;

int incr10(int num);		// 함수 프로토타입

int main(void)
{
	int num = 3;

	cout << endl
		<< "incr10(num) = " << incr10(num)
		<< endl
		<< "num = " << num;

	cout << endl;
	return 0;
}


// 변수를 10만큼 증가시키는 함수

int incr10(int num)
{
	num += 10;

	return num;
}