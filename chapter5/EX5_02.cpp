// ȣ���� �μ��� �����Ϸ��� ��� �õ�

#include <iostream>

using namespace std;

int incr10(int num);		// �Լ� ������Ÿ��

int main(void)
{
	int num = 3;

	cout << endl
		<< "incr10(num) = " << incr10(num)
		<< endl
		<< "num = " << num;

	cout << endl;
	return 0;
}


// ������ 10��ŭ ������Ű�� �Լ�

int incr10(int num)
{
	num += 10;

	return num;
}