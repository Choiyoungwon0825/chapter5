// ȣ���� �μ����� �����ϱ� ���� ���۷��� ����ϱ�

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

// ������ 10��ŭ ������Ű�� �Լ�

int incr10(const int& num) //const ���۷��� �μ��� ���� �Լ�
{
	cout << endl
		<< "Value received = " << num;

	return num + 10;
}
