// 배열을 함수에 전달하기
#include <iostream>

using namespace std;

double average(double array[], int count);

int main(void)
{
	double values[] = { 1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0 };

	cout << endl
		<< "Average = "
		<< average(values, (sizeof values) / (sizeof values[0]));

	cout << endl;
	return 0;
}

// 평균 계산 함수

double average(double array[], int count)
{
	double sum = 0.0;
	for (int i = 0; i < count; i++)
		sum += array[i];

	return sum / count;
}