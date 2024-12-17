//함수 안에서 배열을 포인터로서 처리하기

#include <iostream>

using namespace std;

double average(double* array, int count);

int main(void)
{
	double values[] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0 };

	cout << endl
		<< "Average = "
		<< average(values, (sizeof values) / (sizeof values[0]));

	cout << endl;

	return 0;

}

double average(double* array, int count)
{
	double sum = 0.0;
	for (int i = 0; i < count; i++) // 여기에서 총합 누적

		sum += *array++; // 배열 요소 더하기
	return sum / count; // 평균 리턴

}