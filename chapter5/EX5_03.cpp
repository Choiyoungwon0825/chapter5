// 호출자 인수를 성공적으로 수정하는 시도

#include <iostream>

using namespace std;

int incr10(int*num); // 함수 프로토타입

int main(void)
{
	int num = 3;
	int *pnum = &num;

	cout << endl
		<< "Address passed = " << pnum;

	cout << endl
		<< "incr10(pnum) = " << incr10(pnum);

	cout << endl
		<< "num = " << num;

	cout << endl;
	return 0;

}

// 변수를 10만큼 증가시키는 함수

int incr10(int* num) // 포인터 인수를 갖고 있는 함수
{
	cout << endl
		<< "Address received = " << num;

	*num += 10;

	return *num;
}