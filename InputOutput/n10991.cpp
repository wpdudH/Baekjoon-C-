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
		bool star = false;
		for (int j = 0; j < num + i - 1; j++)
		{
			if (j >= num - i)
			{
				if (star == false)
				{
					std::cout << "*";
					star = true;
				}
				else if(star == true)
				{
					std::cout << " ";
					star = false;
				}
			}
			else
			{
				std::cout << " ";
			}
		}
		if (i != num)
		{
			std::cout << "\n";
		}
	}
	return 0;
}