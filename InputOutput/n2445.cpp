/*
����
������ ���� ��Ģ�� ������ �ڿ� ���� ��� ������.

�Է�
ù° �ٿ� N(1 �� N �� 100)�� �־�����.

���
ù° �ٺ��� 2��N-1��° �ٱ��� ���ʴ�� ���� ����Ѵ�.
*/

#include <iostream>
#include <cmath>

int main()
{
	int num;

	std::cin >> num;

	for (int i = 1; i < num * 2 + 1; i++)
	{
		int k = num - abs(num - i);
		for (int j = 0; j < num * 2; j++)
		{
			if (j >= k && j <= num * 2 - 1 - k)
			{
				std::cout << " ";
			}
			else
			{
				std::cout << "*";
			}
		}
		if (i != num * 2 )
		{
			std::cout << "\n";
		}
	}
	return 0;
}