/*
����
������ ���� ��Ģ�� ������ �ڿ� ���� ��� ������.

�Է�
ù° �ٿ� N(1 �� N �� 100)�� �־�����.

���
ù° �ٺ��� 2��N-1��° �ٱ��� ���ʴ�� ���� ����Ѵ�.
*/

#include <iostream>

int main()
{
	int num;

	std::cin >> num;

	for (int i = 1; i < num + 1; i++)
	{
		if (i != num)
		{
			for (int j = 0; j < num + i - 1; j++)
			{
				if (j == num - i || j == num + i - 2)
				{
					std::cout << "*";
				}
				else
				{
					std::cout << " ";
				}
			}
			std::cout << "\n";
		}
		else
		{
			for (int j = 0; j < num + i - 1; j++)
			{
				std::cout << "*";
			}
		}
	}
	return 0;
}