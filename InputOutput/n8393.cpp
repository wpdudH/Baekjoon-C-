/*
����
n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� n (1 �� n �� 10,000)�� �־�����

���
1���� n���� ���� ����Ѵ�.
*/

#include <iostream>

int main()
{
	int num;
	int answer = 0;

	std::cin >> num;

	for (int i = 1; i <= num; i++)
	{
		answer += i;
	}
	std::cout << answer;

	return 0;
}