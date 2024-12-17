// ���۷��� �����ϱ�
#include <iostream>
#include <iomanip>

using namespace std;

double& lowest(double A[], int len); // ���۷����� �����ϴ� �Լ��� ������Ÿ��

int main(void)
{
	double array[] = { 3.0, 10.0, 1.5, 15.0, 2.7, 23.0, 4.5, 12.0, 6.8, 13.5, 2.1, 14.0 };

	int len = sizeof array / sizeof array[0]; // ��� ���� �ʱ�ȭ

	cout << endl;

	for (int i = 0; i < len; i++)
		cout << setw(6) << array[i];

	lowest(array, len) = 6.9; // 6.9�� ����
	lowest(array, len) = 7.9; // 7.9�� ����

	cout << endl;
	for (int i = 0; i < len; i++)
		cout << setw(6) << array[i];

	cout << endl;
	return 0;
}

double& lowest(double A[], int len)
{
	int j = 0; // ���� ���� ��ҿ� ���� ����
	for (int i = 1; i < len; i++) 
		if (A[j] > A[i]) // ���� �� �˻�
			j = i; // ���� ������(j) ������Ʈ
	return A[j]; // ���� ������ҿ� ���� ���۷��� ����
}