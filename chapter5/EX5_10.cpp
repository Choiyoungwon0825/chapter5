// 레퍼런스 리턴하기
#include <iostream>
#include <iomanip>

using namespace std;

double& lowest(double A[], int len); // 레퍼런스를 리턴하는 함수의 프로토타입

int main(void)
{
	double array[] = { 3.0, 10.0, 1.5, 15.0, 2.7, 23.0, 4.5, 12.0, 6.8, 13.5, 2.1, 14.0 };

	int len = sizeof array / sizeof array[0]; // 요소 개수 초기화

	cout << endl;

	for (int i = 0; i < len; i++)
		cout << setw(6) << array[i];

	lowest(array, len) = 6.9; // 6.9로 변경
	lowest(array, len) = 7.9; // 7.9로 변경

	cout << endl;
	for (int i = 0; i < len; i++)
		cout << setw(6) << array[i];

	cout << endl;
	return 0;
}

double& lowest(double A[], int len)
{
	int j = 0; // 가장 낮은 요소에 대한 색인
	for (int i = 1; i < len; i++) 
		if (A[j] > A[i]) // 낮은 값 검사
			j = i; // 가장 낮은값(j) 업데이트
	return A[j]; // 가장 낮은요소에 대한 레퍼런스 리턴
}