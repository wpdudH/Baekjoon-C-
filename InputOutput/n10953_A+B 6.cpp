/*
����
�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� �׽�Ʈ ���̽��� ���� T�� �־�����.

�� �׽�Ʈ ���̽��� �� �ٷ� �̷���� ������, �� �ٿ� A�� B�� �־�����. A�� B�� �޸�(,)�� ���еǾ� �ִ�. (0 < A, B < 10)

���
�� �׽�Ʈ ���̽����� A+B�� ����Ѵ�.
*/

#include <iostream>
using namespace std;

int main()
{
	int t;
	char comma;
	int a ,b;

	cin >> t;

	for (int s = 0; s < t; s++)
	{
		cin >> a >> comma >> b;
		cout << a + b << "\n";
	}

	return 0;
}