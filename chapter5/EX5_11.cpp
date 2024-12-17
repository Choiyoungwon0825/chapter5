// 함수 안에서 정적인 변수 사용하기

#include <iostream>

using namespace std;

void record(void);// 함수 프로토타입, 어떤 인수나 리턴값도 없다.

int main(void)
{
	record();

	for (int i = 0; i <= 3; i++)
		record();

	cout << endl;
	return 0;
}

// 그것이 얼마나 많이 사용되는가를 기록하는 함수

void record(void)
{
	static int count = 0;
	cout << endl
		<< "This is the " << ++count;

	if ((count > 3) && (count < 21))
		cout << "th";
	else
		switch (count % 10)
		{
		case 1: cout << "st";
			break;
		case 2: cout << "nd";
			break;
		case 3: cout << "rd";
			break;
		default:
			cout << "th";
			break;
		} 

	cout << " time I have been called";
	return;
}