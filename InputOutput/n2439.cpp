/*
����
ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����

������, �������� �������� ������ ��(���� ����)�� ����Ͻÿ�.

�Է�
ù° �ٿ� N(1 �� N �� 100)�� �־�����.

���
ù° �ٺ��� N��° �ٱ��� ���ʴ�� ���� ����Ѵ�.
*/

#include <iostream>

int main()
{
	int num;

	std::cin >> num;

	for (int i = 1;i <= num;i++)
	{
		for (int j = 0; j < num; j++)
		{
			if (j < num - i)
			{
				std::cout << " ";
			}
			else
			{
				std::cout << "*";
			}
		}
		std::cout << "\n";
	}

	return 0;
}