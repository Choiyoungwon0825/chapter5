//ȣ���� �μ��� �����ϱ� ���� ���۷��� ����ϱ�

#include <iostream>

using namespace std;

int incr10(int& num); // �Լ� ������Ÿ��

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
// ������ 10��ŭ ������Ű�� �Լ�

int incr10(int& num) // ���۷��� �μ��� ���� �Լ�
{
	cout << endl
		<< "Value received = " << num;
	num += 10;
	return num;
}