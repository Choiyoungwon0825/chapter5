// ȣ���� �μ��� ���������� �����ϴ� �õ�

#include <iostream>

using namespace std;

int incr10(int*num); // �Լ� ������Ÿ��

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

// ������ 10��ŭ ������Ű�� �Լ�

int incr10(int* num) // ������ �μ��� ���� �ִ� �Լ�
{
	cout << endl
		<< "Address received = " << num;

	*num += 10;

	return *num;
}