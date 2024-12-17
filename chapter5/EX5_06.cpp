// 2���� �迭�� �Լ��� �����ϱ�

#include <iostream>

using namespace std;

double yield(double array[][4], int n);

int main(void)
{
	double beans[3][4] = {
		{1.0, 2.0, 3.0, 4.0},
		{5.0, 6.0, 7.0, 8.0},
		{9.0,10.0,11.0,12.0}
	};
	cout << endl
		<< "Yield = " << yield(beans, sizeof beans / sizeof beans[0]);

	cout << endl;
	return 0;
}


// ��ü yield�� ����ϴ� �Լ�

double yield(double beans[][4], int count)
{
	double sum = 0.0;
	for (int i = 0; i < count; i++) // ���� ������ŭ �ݺ��Ѵ�.
		for (int j = 0; j < 4; j++) // �� �ȿ� �ִ� ����� ������ŭ �ݺ��Ѵ�.
			sum += beans[i][j];

	return sum;
}
